#include "Sozdaniye_Zakaza.h"
#include "Menedzher.h"
#include "Proverka_zakaza.h"
#include "Dostavka.h"
#include "Oplata.h"
#include "GlobalPeremen.h"
#include <string>
using namespace std;

using namespace System::Data;
using namespace MySql::Data::MySqlClient;

bool bil_li_zakaz;
int kod_oplati, dostavka, summa = 0, kod_zakaza;

System::Void ProjectOOP::Sozdaniye_Zakaza::Back_Click(System::Object^ sender, System::EventArgs^ e)
{
    Connect connect;

    if (bil_li_zakaz == true)
    {
        if (MessageBox::Show("Отменить заказ?", "Предупреждение", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::OK)
        {
            connect.myConnection->Open();
            connect.command = gcnew MySqlCommand("SELECT `Kod_Oplaty` FROM `oplata` WHERE `Kod_Oplaty`=(select max(`Kod_Oplaty`) from `oplata`)", connect.myConnection);
            connect.sqlReader = connect.command->ExecuteReader();
            {
                while  (connect.sqlReader->Read())
                {
                    kod_oplati = connect.sqlReader->GetInt32(0);
                }
            }
            connect.myConnection->Close();

            connect.myConnection->Open();
            connect.command = gcnew MySqlCommand("DELETE FROM `oplata` WHERE `Kod_Oplaty`=@Kod_Oplaty", connect.myConnection);
            connect.command->Parameters->AddWithValue("@Kod_Oplaty", kod_oplati);
            connect.command->ExecuteNonQuery();
            connect.myConnection->Close();

            this->Close();
            Menedzher^ menedzher = gcnew Menedzher();
            menedzher->Show();
        }
    }
    else
    {
        this->Close();
        Menedzher^ menedzher = gcnew Menedzher();
        menedzher->Show();
    }
}

System::Void ProjectOOP::Sozdaniye_Zakaza::dobavit_k_zakazu_Click(System::Object^ sender, System::EventArgs^ e)
{
    Connect connect;
    try
    {
        if (comboBox_categoriya->Text != "" && comboBox_Bludo->Text != "" && colvo_porciy->Text != "")
        {
            zavershit_zakaz->Enabled = true;
            if (bil_li_zakaz == false)//создадим новый заказ
            {
                bil_li_zakaz = true;
                //Создание строки оплаты и запоминание кода последней оплаты
                connect.myConnection->Open();
                connect.command = gcnew MySqlCommand("INSERT INTO `oplata`(`Summa`, `Beznalich`, `Status_Oplaty`) VALUES ('@Summa','@Beznalich','@Status_Oplaty')", connect.myConnection);
                {
                    connect.command->Parameters->AddWithValue("Summa", summa);
                    connect.command->Parameters->AddWithValue("Beznalich", "0");
                    connect.command->Parameters->AddWithValue("Status_Oplaty", "0");
                    connect.command->ExecuteNonQuery();
                }
                connect.myConnection->Close();

                connect.myConnection->Open();
                connect.command = gcnew MySqlCommand("SELECT `Kod_Oplaty` FROM `oplata` WHERE `Kod_Oplaty`=(select max(`Kod_Oplaty`) from `oplata`)", connect.myConnection);
                connect.sqlReader = connect.command->ExecuteReader();
                {
                    while  (connect.sqlReader->Read())
                    {
                        kod_oplati = connect.sqlReader->GetInt32(0);
                    }
                }
                connect.myConnection->Close();

                //Создание нового заказа
                connect.myConnection->Open();
                connect.command = gcnew MySqlCommand("INSERT INTO `zakazy`(`Kod_Oplaty`, `Kod_Menedzhera`) VALUES (@kod_oplati,@Kod_Menedzhera)", connect.myConnection);
                connect.command->Parameters->AddWithValue("@kod_oplati", kod_oplati.ToString());
                connect.command->Parameters->AddWithValue("@Kod_Menedzhera", Kod_Sotrudnika.ToString());
                connect.command->ExecuteNonQuery();
                connect.myConnection->Close();

                //Запоминание последнего кода заказа 
                connect.myConnection->Open();
                connect.command = gcnew MySqlCommand("SELECT `Kod_Zakaza` FROM `zakazy` WHERE `Kod_Zakaza`=(select max(`Kod_Zakaza`) from `zakazy`)", connect.myConnection);
                connect.sqlReader = connect.command->ExecuteReader();
                {
                    while  (connect.sqlReader->Read())
                    {
                        kod_zakaza = connect.sqlReader->GetInt32(0);
                    }
                }
                connect.myConnection->Close();
            }

            int colvo, cena, kod_bluda;
            //Запоминаем в переменную код выбранного блюда
            connect.myConnection->Open();
            connect.command = gcnew MySqlCommand("SELECT `Kod_Bluda`, `Cena` FROM `menu` WHERE `Name`=@Name AND `prodazha`='1'", connect.myConnection);
            connect.command->Parameters->AddWithValue("@Name", comboBox_Bludo->Text);

            connect.sqlReader = connect.command->ExecuteReader();
            {
                if  (connect.sqlReader->Read())
                {
                    kod_bluda = connect.sqlReader->GetInt32(0);
                    cena = connect.sqlReader->GetInt32(1);
                }
            }
            connect.myConnection->Close();
            colvo = Convert::ToInt32(colvo_porciy->Text);
            summa += colvo * cena;

            //Добавляем строку заказа
            connect.myConnection->Open();
            connect.command = gcnew MySqlCommand("INSERT INTO `str_zakaza`(`Kod_Zakaza`, `Kod_Bluda`, `Kolichestvo_Porciy`) VALUES (@Kod_Zakaza,@Kod_Bluda,@Kolichestvo_Porciy)", connect.myConnection);
            connect.command->Parameters->AddWithValue("Kod_Zakaza", kod_zakaza.ToString());
            connect.command->Parameters->AddWithValue("Kod_Bluda", kod_bluda.ToString());
            connect.command->Parameters->AddWithValue("Kolichestvo_Porciy", colvo_porciy->Text);
            connect.command->ExecuteNonQuery();
            connect.myConnection->Close();
            MessageBox::Show("Добавлено!", "Сообщение");
        }
        else MessageBox::Show("Заполните все пустые поля!", "Предупреждение", MessageBoxButtons::OKCancel, MessageBoxIcon::Exclamation);
    }
    catch (...)
    {
        MessageBox::Show("Проверьте ввод!", "Предупреждение", MessageBoxButtons::OKCancel, MessageBoxIcon::Exclamation);
    }
}

System::Void ProjectOOP::Sozdaniye_Zakaza::zavershit_zakaz_Click(System::Object^ sender, System::EventArgs^ e)
{
    Connect connect;
    //Запоминание суммы оплаты
    connect.myConnection = gcnew MySqlConnection(connect.connectString);
    connect.myConnection->Open();
    connect.command = gcnew MySqlCommand("UPDATE `oplata` SET `Summa`=@Summa WHERE `Kod_Oplaty`=@Kod_Oplaty", connect.myConnection);
    {
        connect.command->Parameters->AddWithValue("@Kod_Oplaty", kod_oplati);
        connect.command->Parameters->AddWithValue("@Summa", summa);
        connect.command->ExecuteNonQuery();
    }
    connect.myConnection->Close();
    Proverka_zakaza^ proverka_zakaza = gcnew Proverka_zakaza();
    if (proverka_zakaza->ShowDialog() == System::Windows::Forms::DialogResult::OK)
    {
        if (checkBox_dostavka->Checked == true)
        {
            dostavka = 1;
            Dostavka^ dostavka = gcnew Dostavka();
            dostavka->Show();
            this->Close();
        }
        else
        {
            dostavka = 0;
            connect.myConnection->Open();
            connect.command = gcnew MySqlCommand("UPDATE `zakazy` SET `Kod_Dostavky`= NULL  WHERE `Kod_Oplaty`=@Kod_Oplaty", connect.myConnection);
            {
                connect.command->Parameters->AddWithValue("@Kod_Oplaty", kod_oplati);
                connect.command->ExecuteNonQuery();
            }
            connect.myConnection->Close();

            Oplata^ oplata = gcnew Oplata();
            oplata->Show();
            this->Close();
        }
    }
}

System::Void ProjectOOP::Sozdaniye_Zakaza::Output_Click(System::Object^ sender, System::EventArgs^ e)
{
    int kod_oplati;
    Connect connect;
    if (MessageBox::Show("Закрыть приложение? Заказ будет удален!", "Сообщение", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::OK)
    {
        if (bil_li_zakaz == true)
        {
            connect.myConnection->Open();
            connect.command = gcnew MySqlCommand("SELECT `Kod_Oplaty` FROM `oplata` WHERE `Kod_Oplaty`=(select max(`Kod_Oplaty`) from `oplata`)", connect.myConnection);
            connect.sqlReader = connect.command->ExecuteReader();
            {
                while  (connect.sqlReader->Read())
                {
                    kod_oplati = connect.sqlReader->GetInt32(0);
                }
            }
            connect.myConnection->Close();

            connect.myConnection->Open();
            connect.command = gcnew MySqlCommand("DELETE FROM `oplata` WHERE `Kod_Oplaty`=@Kod_Oplaty", connect.myConnection);
            connect.command->Parameters->AddWithValue("@Kod_Oplaty", kod_oplati);
            connect.command->ExecuteNonQuery();
            connect.myConnection->Close();

            Application::Exit();
        }
        Application::Exit();
    }
}
int Kod_Categorii;
System::Void ProjectOOP::Sozdaniye_Zakaza::comboBox_categoriya_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    Connect connect;

    comboBox_Bludo->Text = "";
    comboBox_Bludo->Items->Clear();
    connect.myConnection->Open();
    connect.command = gcnew MySqlCommand("SELECT `Kod_Category`FROM `category` WHERE `Name`=@Name", connect.myConnection);
    connect.command->Parameters->AddWithValue("@Name", comboBox_categoriya->Text);

    connect.sqlReader = connect.command->ExecuteReader();
    {
        while  (connect.sqlReader->Read())
        {
            Kod_Categorii = connect.sqlReader->GetInt32(0);
        }
    }
    connect.myConnection->Close();

    connect.myConnection->Open();

    connect.command = gcnew MySqlCommand("SELECT `Name`, `Kkal`, `Ves`, `Cena` FROM `menu` WHERE `Kod_Kategory`=@Kod_Kategory AND `prodazha`='1'", connect.myConnection);
    connect.command->Parameters->AddWithValue("@Kod_Kategory", Kod_Categorii);

    connect.sqlReader = connect.command->ExecuteReader();
    {
        while  (connect.sqlReader->Read())
        {
            comboBox_Bludo->Items->Add (connect.sqlReader[0]->ToString());
        }
    }
    connect.myConnection->Close();
}

System::Void ProjectOOP::Sozdaniye_Zakaza::colvo_porciy_Leave(System::Object^ sender, System::EventArgs^ e)
{
    try
    {
        if (Convert::ToInt32(colvo_porciy->Text) >= 10)
        {
            colvo_porciy->Text = "";
            MessageBox::Show("Нельзя ввести число, большее 9", "Предупреждение", MessageBoxButtons::OKCancel, MessageBoxIcon::Exclamation);
        }
    }
    catch (...)
    {
        if (colvo_porciy->Text != "")
        {
            colvo_porciy->Text = "";
            MessageBox::Show("Проверьте ввод!", "Предупреждение", MessageBoxButtons::OKCancel, MessageBoxIcon::Exclamation);
        }
    }
}

System::Void ProjectOOP::Sozdaniye_Zakaza::Sozdaniye_Zakaza_Load(System::Object^ sender, System::EventArgs^ e)
{
    Connect connect;
    String^ Familiya;
    connect.myConnection->Open();
    connect.command = gcnew MySqlCommand("SELECT `Familiya`, `Name`, `Otchestvo` FROM `personal` WHERE `Kod_Sotrudnika`=@Kod_Sotrudnika", connect.myConnection);
    connect.command->Parameters->AddWithValue("@Kod_Sotrudnika", Kod_Sotrudnika);
    connect.sqlReader = connect.command->ExecuteReader();
    {
        while  (connect.sqlReader->Read())
        {
            Familiya = connect.sqlReader[1]->ToString();
        }
    }
    connect.myConnection->Close();
    dostavka = 0;
    bil_li_zakaz = false;
    connect.myConnection->Open();
    connect.command = gcnew MySqlCommand("SELECT `Name` FROM `category`", connect.myConnection);

    connect.sqlReader = connect.command->ExecuteReader();
    {
        while  (connect.sqlReader->Read())
        {
            comboBox_categoriya->Items->Add (connect.sqlReader[0]->ToString());
        }
    }
    connect.myConnection->Close();
    connect.myConnection->Open();

    connect.command = gcnew MySqlCommand("SELECT `Name`, `Kkal`, `Ves`, `Cena` FROM `menu` WHERE `Kod_Kategory`=@Kod_Kategory AND `prodazha`='1'", connect.myConnection);
    connect.command->Parameters->AddWithValue("@Kod_Kategory", Kod_Categorii);

    connect.sqlReader = connect.command->ExecuteReader();
    {
        while  (connect.sqlReader->Read())
        {
            comboBox_Bludo->Items->Add (connect.sqlReader[0]->ToString());
        }
    }
    connect.myConnection->Close();
}
