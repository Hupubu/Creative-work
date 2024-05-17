#include "Oplata.h"
#include "GlobalPeremen.h"
#include "Sozdaniye_Zakaza.h"
#include "Dostavka.h"
#include "Menedzher.h"

bool tumb1;
int i, colvo;
extern int kod_oplati, dostavka;
extern int kod_Dostavki;

System::Void ProjectOOP::Oplata::Oplata_Load(System::Object^ sender, System::EventArgs^ e)
{
    int summa = 0;
    Connect connect;
    connect.myConnection->Open();
    connect.command = gcnew MySqlCommand("SELECT `Summa` FROM `oplata` WHERE `Kod_Oplaty`=(SELECT max(`Kod_Oplaty`) FROM `oplata`)", connect.myConnection);
    connect.sqlReader = connect.command->ExecuteReader();
    {
        while (connect.sqlReader->Read())
        {
            summa = connect.sqlReader->GetInt32(0);
        }
    }
    label_summa->Text = summa.ToString();
    connect.myConnection->Close();
}

System::Void ProjectOOP::Oplata::Back_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Close();
}

System::Void ProjectOOP::Oplata::Output_Click(System::Object^ sender, System::EventArgs^ e)
{
    Connect connect;
    if (MessageBox::Show("Закрыть приложение? Заказ будет удален!", "Сообщение", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::OK)
    {
        connect.myConnection->Open();
        connect.command = gcnew MySqlCommand("DELETE FROM `oplata` WHERE `Kod_Oplaty`=@Kod_Oplaty", connect.myConnection);
        connect.command->Parameters->AddWithValue("@Kod_Oplaty", kod_oplati.ToString());
        connect.command->ExecuteNonQuery();
        connect.myConnection->Close();

        connect.myConnection->Open();
        connect.command = gcnew MySqlCommand("DELETE FROM `dostavka` WHERE `Kod_Dostavky`=@Kod_Dostavky", connect.myConnection);
        connect.command->Parameters->AddWithValue("@Kod_Dostavky", kod_Dostavki.ToString());
        connect.command->ExecuteNonQuery();
        connect.myConnection->Close();

        Application::Exit();
    }
}
System::Void ProjectOOP::Oplata::zavershit_zakaz_Click(System::Object^ sender, System::EventArgs^ e)
{
    Connect connect;
    int beznal_oplataText = 0;
    //Оплата заказа
    if (beznal_oplata->Checked == true) beznal_oplataText = 1;
    if (dostavka == 0)
    {
        connect.myConnection->Open();
        connect.command = gcnew MySqlCommand("UPDATE `oplata` SET `Beznalich`=@Beznalich,`Status_Oplaty`='1' WHERE `Kod_Oplaty`=@Kod_Oplaty", connect.myConnection);
        connect.command->Parameters->AddWithValue("@Beznalich", beznal_oplataText);
        connect.command->Parameters->AddWithValue("@Kod_Oplaty", kod_oplati);
        connect.sqlReader = connect.command->ExecuteReader();
        connect.myConnection->Close();

        if (MessageBox::Show("Заказ успешно оплачен!", "Сообщение") == System::Windows::Forms::DialogResult::OK)
        {
            for (int i = Application::OpenForms->Count - 1; i >= 0; i--)
            {
                if (Application::OpenForms[i]->Name != "Input") Application::OpenForms[i]->Close();
            }
            Menedzher^ menedzher = gcnew Menedzher();
            menedzher->Show();
        }


    }
    else MessageBox::Show("Заказ оплачивается после доставки!", "Сообщение");
}

System::Void ProjectOOP::Oplata::oplata_posle_Click(System::Object^ sender, System::EventArgs^ e)
{
    Connect connect;
    int beznal_oplataText = 0;
    //Оплата заказа
    if (beznal_oplata->Checked == true) beznal_oplataText = 1;
    if (dostavka == 1)
    {
        connect.myConnection->Open();
        connect.command = gcnew MySqlCommand("UPDATE `oplata` SET `Beznalich`=@Beznalich,`Status_Oplaty`='0' WHERE `Kod_Oplaty`=@Kod_Oplaty", connect.myConnection);
        connect.command->Parameters->AddWithValue("@Beznalich", beznal_oplataText);
        connect.command->Parameters->AddWithValue("@Kod_Oplaty", kod_oplati);
        connect.sqlReader = connect.command->ExecuteReader();
        connect.myConnection->Close();

        if (MessageBox::Show("Заказ ждет оплаты!", "Сообщение") == System::Windows::Forms::DialogResult::OK)
        {
            for (int i = Application::OpenForms->Count - 1; i >= 0; i--)
            {
                if (Application::OpenForms[i]->Name != "Input") Application::OpenForms[i]->Close();
            }
            Menedzher^ menedzher = gcnew Menedzher();
            menedzher->Show();
        }
    }
    else MessageBox::Show("Оплатите заказ!", "Сообщение");
}




