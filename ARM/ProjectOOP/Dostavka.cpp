#include "Dostavka.h"
#include <string>
#include "GlobalPeremen.h"
#include "Sozdaniye_Zakaza.h"
#include "Oplata.h"

int kod_Dostavki;
int kod_Dostavshika;
bool flag;
extern int kod_oplati;

System::Void ProjectOOP::Dostavka::zavershit_zakaz_Click(System::Object^ sender, System::EventArgs^ e)
{
    Connect connect;
    try
    {
        if (familiya->Text != "" && name->Text != "" && ulitsa->Text != "" && dom->Text != "" && kvartira->Text != "" && comboBox_dostavshik->Text != "")
        {
            if (flag == false)
            {
                flag = true;
                connect.myConnection->Open();
                connect.command = gcnew MySqlCommand("INSERT INTO `dostavka`(`Familiya`, `Name`, `Ulitsa`, `Dom`, `Kvartira`, `Kod_Dostavshika`, `Status_Dostavki`) VALUES (@Familiya, @Name, @Ulitsa, @Dom, @Kvartira,@Kod_Dostavshika,'0')", connect.myConnection);
                connect.command->Parameters->AddWithValue("@Familiya", familiya->Text);
                connect.command->Parameters->AddWithValue("@Name", name->Text);
                connect.command->Parameters->AddWithValue("@Ulitsa", ulitsa->Text);
                connect.command->Parameters->AddWithValue("@Dom", dom->Text);
                connect.command->Parameters->AddWithValue("@Kvartira", kvartira->Text);
                connect.command->Parameters->AddWithValue("@Kod_Dostavshika", kod_Dostavshika);

                connect.command->ExecuteNonQuery();
                connect.myConnection->Close();

                connect.myConnection->Open();
                connect.command = gcnew MySqlCommand("SELECT `Kod_Dostavky` FROM `dostavka` WHERE `Kod_Dostavky`=(SELECT max(`Kod_Dostavky`) FROM `dostavka`)", connect.myConnection);

                connect.sqlReader = connect.command->ExecuteReader();
                {
                    while (connect.sqlReader->Read())
                    {
                        kod_Dostavki = connect.sqlReader->GetInt32(0);
                    }
                }
                connect.myConnection->Close();

                connect.myConnection->Open();
                connect.command = gcnew MySqlCommand("UPDATE `zakazy` SET `Kod_Dostavky`=@Kod_Dostavky WHERE `Kod_Oplaty`=@Kod_Oplaty", connect.myConnection);
                connect.command->Parameters->AddWithValue("@Kod_Dostavky", kod_Dostavki.ToString());
                connect.command->Parameters->AddWithValue("@Kod_Oplaty", kod_oplati.ToString());

                connect.command->ExecuteNonQuery();
                connect.myConnection->Close();
            }
            else
            {
                connect.myConnection->Open();
                connect.command = gcnew MySqlCommand("UPDATE `dostavka` SET `Familiya` = @Familiya,`Name`= @Name,`Ulitsa`= @Ulitsa,`Dom`= @Dom,`Kvartira`= @Kvartira,`Kod_Dostavshika`= @Kod_Dostavshika WHERE `Kod_Dostavky`=@Kod_Dostavky", connect.myConnection);
                connect.command->Parameters->AddWithValue("@Familiya", familiya->Text);
                connect.command->Parameters->AddWithValue("@Name", name->Text);
                connect.command->Parameters->AddWithValue("@Ulitsa", ulitsa->Text);
                connect.command->Parameters->AddWithValue("@Dom", dom->Text);
                connect.command->Parameters->AddWithValue("@Kvartira", kvartira->Text);
                connect.command->Parameters->AddWithValue("@Kod_Dostavshika", kod_Dostavshika);
                connect.command->Parameters->AddWithValue("@Kod_Dostavky", kod_Dostavki.ToString());

                connect.command->ExecuteNonQuery();
                connect.myConnection->Close();
            }


            Oplata^ oplata = gcnew Oplata();
            oplata->Show();
        }
        else MessageBox::Show("Заполните все пустые поля!", "Предупреждение", MessageBoxButtons::OKCancel, MessageBoxIcon::Exclamation);
    }
    catch (...)
    {
        MessageBox::Show("Проверьте ввод!", "Предупреждение", MessageBoxButtons::OKCancel, MessageBoxIcon::Exclamation);
    }
}

System::Void ProjectOOP::Dostavka::Output_Click(System::Object^ sender, System::EventArgs^ e)
{
    Connect connect;
    if (MessageBox::Show("Закрыть приложение? Заказ будет удален!", "Сообщение", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::OK)
    {
        connect.myConnection->Open();
        connect.command = gcnew MySqlCommand("DELETE FROM `oplata` WHERE `Kod_Oplaty`=@Kod_Oplaty", connect.myConnection);
        connect.command->Parameters->AddWithValue("@Kod_Oplaty", kod_oplati.ToString());
        connect.command->ExecuteNonQuery();
        connect.myConnection->Close();

        if (flag == true)
        {
            connect.myConnection->Open();
            connect.command = gcnew MySqlCommand("DELETE FROM `dostavka` WHERE `Kod_Dostavky`=@Kod_Dostavky", connect.myConnection);
            connect.command->Parameters->AddWithValue("@Kod_Dostavky", kod_Dostavki.ToString());
            connect.command->ExecuteNonQuery();
            connect.myConnection->Close();
        }

        Application::Exit();
    }
}

System::Void ProjectOOP::Dostavka::Dostavka_Load(System::Object^ sender, System::EventArgs^ e)
{
    String^ Familiya;
    Connect connect;
    connect.myConnection->Open();
    connect.command = gcnew MySqlCommand("SELECT `Kod_Sotrudnika`, `Familiya`, `Name`, `Otchestvo` FROM `personal` WHERE `Kod_Dolzhnosty`='3'", connect.myConnection);

    connect.sqlReader = connect.command->ExecuteReader();
    {
        while (connect.sqlReader->Read())
        {
            comboBox_dostavshik->Items->Add(connect.sqlReader[1]->ToString() + " " + connect.sqlReader[2]->ToString() + " " + connect.sqlReader[3]->ToString());
            Familiya = connect.sqlReader[1]->ToString();
        }
    }
    connect.myConnection->Close();
}

System::Void ProjectOOP::Dostavka::comboBox_dostavshik_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    Connect connect;
    connect.myConnection->Open();
    connect.command = gcnew MySqlCommand("SELECT `Kod_Sotrudnika` FROM `personal` WHERE Concat(Familiya, ' ', Name, ' ', Otchestvo) = @FIO", connect.myConnection);
    connect.command->Parameters->AddWithValue("@FIO", comboBox_dostavshik->Text);

    connect.sqlReader = connect.command->ExecuteReader();
    {
        while (connect.sqlReader->Read())
        {
            kod_Dostavshika = connect.sqlReader->GetInt32(0);
        }
    }
    connect.myConnection->Close();
}
