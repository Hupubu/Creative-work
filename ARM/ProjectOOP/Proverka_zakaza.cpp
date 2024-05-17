#include "Proverka_zakaza.h"
#include "GlobalPeremen.h"
#include "Sozdaniye_Zakaza.h"

extern int summa, kod_oplati, kod_zakaza;
System::Void ProjectOOP::Proverka_zakaza::Back_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Close();
}

System::Void ProjectOOP::Proverka_zakaza::Dobavit_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Close();
}

System::Void ProjectOOP::Proverka_zakaza::Udalit_Click(System::Object^ sender, System::EventArgs^ e)
{
    Connect connect;
    if (MessageBox::Show("Удалить выбранный заказ?", "Предупреждение", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::OK)
    {
        int kod_bluda_na_udaleniye = 0, cena = 0, colvo = 0;
        colvo = Int32::Parse(DGV_zakazy->CurrentRow->Cells[1]->Value->ToString());

        connect.myConnection->Open();
        connect.command = gcnew MySqlCommand("SELECT `Cena` FROM `menu` WHERE `Name`=@Name AND `prodazha`='1'", connect.myConnection);
        connect.command->Parameters->AddWithValue("@Name", DGV_zakazy->CurrentRow->Cells[0]->Value->ToString());
        connect.sqlReader = connect.command->ExecuteReader();
        {
            while (connect.sqlReader->Read())
            {
                cena = connect.sqlReader->GetInt32(0);
            }
        }
        connect.myConnection->Close();

        summa -= colvo * cena;

        connect.myConnection->Open();
        connect.command = gcnew MySqlCommand("UPDATE `oplata` SET `Summa`= @Summa WHERE `Kod_Oplaty`=@Kod_Oplaty", connect.myConnection);
        connect.command->Parameters->AddWithValue("Summa", summa.ToString());
        connect.command->Parameters->AddWithValue("Kod_Oplaty", kod_oplati.ToString());
        connect.command->ExecuteNonQuery();
        connect.myConnection->Close();

        connect.myConnection->Open();
        connect.command = gcnew MySqlCommand("SELECT `Kod_Bluda` FROM `menu` WHERE `Name`=@Name AND `prodazha`='1'", connect.myConnection);
        connect.command->Parameters->AddWithValue("@Name", DGV_zakazy->CurrentRow->Cells[0]->Value->ToString());
        connect.sqlReader = connect.command->ExecuteReader();
        {
            while (connect.sqlReader->Read())
            {
                kod_bluda_na_udaleniye = connect.sqlReader->GetInt32(0);
            }
        }
        connect.myConnection->Close();

        connect.myConnection->Open();
        connect.command = gcnew MySqlCommand("DELETE FROM `str_zakaza` WHERE `Kod_Bluda`=@Kod_Bluda AND `Kod_Zakaza`=@Kod_Zakaza LIMIT 1", connect.myConnection);
        connect.command->Parameters->AddWithValue("@Kod_Bluda", kod_bluda_na_udaleniye);
        connect.command->Parameters->AddWithValue("@Kod_Zakaza", kod_zakaza);
        connect.command->ExecuteNonQuery();
        connect.myConnection->Close();
        DGV_zakazy->Rows->RemoveAt(DGV_zakazy->CurrentRow->Index);
        Refresh();
    }
}

System::Void ProjectOOP::Proverka_zakaza::gotovo_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (MessageBox::Show("После данные заказа будет невозможно изменить. Продолжить?", "Предупреждение", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::OK)
    {
        this->DialogResult = System::Windows::Forms::DialogResult::OK;
    }
}

System::Void ProjectOOP::Proverka_zakaza::Output_Click(System::Object^ sender, System::EventArgs^ e)
{
    Connect connect;
    if (MessageBox::Show("Закрыть приложение? Заказ будет удален!", "Сообщение", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::OK)
    {
        connect.myConnection->Open();
        connect.command = gcnew MySqlCommand("DELETE FROM `oplata` WHERE `Kod_Oplaty`=@Kod_Oplaty", connect.myConnection);
        connect.command->Parameters->AddWithValue("@Kod_Oplaty", kod_oplati.ToString());
        connect.command->ExecuteNonQuery();
        connect.myConnection->Close();

        Application::Exit();
    }
}

System::Void ProjectOOP::Proverka_zakaza::nonSelection_Click(System::Object^ sender, System::EventArgs^ e)
{
    DGV_zakazy->ClearSelection();
}

System::Void ProjectOOP::Proverka_zakaza::Proverka_zakaza_Load(System::Object^ sender, System::EventArgs^ e)
{
    Connect connect;
    Connect connect2;
    connect.myConnection->Open();
    connect.command = gcnew MySqlCommand("SELECT `Kod_Bluda`, `Kolichestvo_Porciy` FROM `str_zakaza` WHERE `Kod_Zakaza`=@Kod_Zakaza", connect.myConnection);
    connect.command->Parameters->AddWithValue("@Kod_Zakaza", kod_zakaza);

    connect.sqlReader = connect.command->ExecuteReader();
    {
        {
            while (connect.sqlReader->Read())
            {
                DGV_zakazy->Rows->Add();
                DGV_zakazy->Rows[DGV_zakazy->Rows->Count - 1]->Cells[1]->Value = connect.sqlReader[1]->ToString();

                connect2.myConnection->Open();
                connect2.command = gcnew MySqlCommand("SELECT `Name` FROM `menu` WHERE `Kod_Bluda`=@Kod_Bluda AND `prodazha`='1'", connect2.myConnection);
                connect2.command->Parameters->AddWithValue("@Kod_Bluda", connect.sqlReader[0]->ToString());
                connect2.sqlReader = connect2.command->ExecuteReader();
                while (connect2.sqlReader->Read())
                {
                    DGV_zakazy->Rows[DGV_zakazy->Rows->Count - 1]->Cells[0]->Value = connect2.sqlReader[0]->ToString();
                }
                connect2.myConnection->Close();
            }
        }
    }
    connect.myConnection->Close();

    DGV_zakazy->ClearSelection();
}
