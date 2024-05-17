#include "Redactor_tovarov.h"
#include "GlobalPeremen.h"
#include "StMeneger.h"
#include "Dobabit_tovar.h"

bool Flag = false;
System::Void ProjectOOP::Redactor_tovarov::load_bd()
{
    Connect connect;
    Connect connect2;
    connect.myConnection->Open();
    connect.command = gcnew MySqlCommand("SELECT `Kod_Bluda`, `Kod_Kategory`, `Name`, `Kkal`, `Ves`, `Cena` FROM `menu` WHERE `prodazha`='1'", connect.myConnection);
    {
        connect.sqlReader = connect.command->ExecuteReader();
        while (connect.sqlReader->Read())
        {
            DGV_tovary->Rows->Add();
            DGV_tovary->Rows[DGV_tovary->Rows->Count - 1]->Cells[0]->Value = connect.sqlReader[0]->ToString();//код блюда
            DGV_tovary->Rows[DGV_tovary->Rows->Count - 1]->Cells[1]->Value = connect.sqlReader[1]->ToString();//код категории
            DGV_tovary->Rows[DGV_tovary->Rows->Count - 1]->Cells[2]->Value = connect.sqlReader[2]->ToString();//Название блюда
            connect2.myConnection->Open();
            connect2.command = gcnew MySqlCommand("SELECT `Name` FROM `category` WHERE `Kod_Category`=@Kod_Category", connect2.myConnection);
            connect2.command->Parameters->AddWithValue("@Kod_Category", connect.sqlReader[1]->ToString());
            connect2.sqlReader = connect2.command->ExecuteReader();
            while (connect2.sqlReader->Read())
            {
                DGV_tovary->Rows[DGV_tovary->Rows->Count - 1]->Cells[3]->Value = connect2.sqlReader[0]->ToString();//Название категории
            }
            connect2.myConnection->Close();
            
            DGV_tovary->Rows[DGV_tovary->Rows->Count - 1]->Cells[4]->Value = connect.sqlReader[3]->ToString();//Ккал
            DGV_tovary->Rows[DGV_tovary->Rows->Count - 1]->Cells[5]->Value = connect.sqlReader[4]->ToString();//Вес
            DGV_tovary->Rows[DGV_tovary->Rows->Count - 1]->Cells[6]->Value = connect.sqlReader[5]->ToString();//Цена
        }
    }
    connect.myConnection->Close();

    DGV_tovary->ClearSelection();
}
System::Void ProjectOOP::Redactor_tovarov::Redactor_tovarov_Load(System::Object^ sender, System::EventArgs^ e)
{
    this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
    load_bd();
    Flag = true;
}

System::Void ProjectOOP::Redactor_tovarov::btn_poisk_Click(System::Object^ sender, System::EventArgs^ e)
{
    DGV_tovary->ClearSelection();
    for (int i = 0; i < DGV_tovary->Rows->Count; i++)
    {
        if (DGV_tovary->Rows[i]->Visible == true)
        {
            for (int j = 0; j < DGV_tovary->Columns->Count - 1; j++)
            {
                if (DGV_tovary->Rows[i]->Cells[j]->ToString() != nullptr)
                {
                    if (DGV_tovary->Rows[i]->Cells[j]->Value->ToString()->ToLower()->Contains(poisk->Text->ToLower()))
                    {
                        DGV_tovary->Rows[i]->Selected = true;
                        DGV_tovary->Rows[i]->Visible = true;
                    }
                    else if (DGV_tovary->Rows[i]->Selected == false) { DGV_tovary->CurrentCell = nullptr; DGV_tovary->Rows[i]->Visible = false; }
                }
            }
        }
    }
    DGV_tovary->ClearSelection();
}

System::Void ProjectOOP::Redactor_tovarov::btn_obnovit_Click(System::Object^ sender, System::EventArgs^ e)
{
    DGV_tovary->Rows->Clear();
    Flag = false;
    load_bd();
}

System::Void ProjectOOP::Redactor_tovarov::btn_snyatVideleniye_Click(System::Object^ sender, System::EventArgs^ e)
{
    DGV_tovary->ClearSelection();
}

System::Void ProjectOOP::Redactor_tovarov::Back_Click(System::Object^ sender, System::EventArgs^ e)
{
    StMeneger^ stMeneger = gcnew StMeneger();
    stMeneger->Show();
    this->Close();
}

System::Void ProjectOOP::Redactor_tovarov::Dobavit_Click(System::Object^ sender, System::EventArgs^ e)
{
    Dobabit_tovar^ dobabit_tovar = gcnew Dobabit_tovar();
    if (dobabit_tovar->ShowDialog() == System::Windows::Forms::DialogResult::OK)
    {
        Update();
    }
}

System::Void ProjectOOP::Redactor_tovarov::Udalit_Click(System::Object^ sender, System::EventArgs^ e)
{
    Connect connect;
    connect.myConnection->Open();
    connect.command = gcnew MySqlCommand("UPDATE `menu` SET `prodazha`='0' WHERE `Kod_Bluda`=@Kod_Bluda", connect.myConnection);
    connect.command->Parameters->AddWithValue("Kod_Bluda", DGV_tovary->CurrentRow->Cells[0]->Value->ToString());
    connect.command->ExecuteNonQuery();
    connect.myConnection->Close();
    DGV_tovary->Rows->RemoveAt(DGV_tovary->CurrentRow->Index);
}

System::Void ProjectOOP::Redactor_tovarov::Output_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (MessageBox::Show("Закрыть приложение?", "Сообщение", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::OK) Application::Exit();
}

System::Void ProjectOOP::Redactor_tovarov::DGV_tovary_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
    Connect connect;
    if (Flag != false)
    {
        connect.myConnection->Open();
        connect.command = gcnew MySqlCommand("UPDATE `menu` SET `Name`= @Name,`Kkal`= @Kkal,`Ves`= @Ves,`Cena`= @Cena WHERE `Kod_Bluda`= @Kod_Bluda", connect.myConnection);
        connect.command->Parameters->AddWithValue("@Kod_Bluda", DGV_tovary->CurrentRow->Cells[0]->Value->ToString());
        connect.command->Parameters->AddWithValue("@Name", DGV_tovary->CurrentRow->Cells[2]->Value->ToString());
        connect.command->Parameters->AddWithValue("@Kkal", DGV_tovary->CurrentRow->Cells[4]->Value->ToString());
        connect.command->Parameters->AddWithValue("@Ves", DGV_tovary->CurrentRow->Cells[5]->Value->ToString());
        connect.command->Parameters->AddWithValue("@Cena", DGV_tovary->CurrentRow->Cells[6]->Value->ToString());
        connect.command->ExecuteNonQuery();
        connect.myConnection->Close();

        connect.myConnection->Open();
        connect.command = gcnew MySqlCommand("UPDATE `category` SET `Name`=@Name WHERE `Kod_Category`=@Kod_Category", connect.myConnection);
        connect.command->Parameters->AddWithValue("@Name", DGV_tovary->CurrentRow->Cells[3]->Value->ToString());
        connect.command->Parameters->AddWithValue("@Kod_Category", DGV_tovary->CurrentRow->Cells[1]->Value->ToString());
        connect.command->ExecuteNonQuery();
        connect.myConnection->Close();
    }
}
