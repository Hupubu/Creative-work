#include "Prosmotr_Tovarov.h"
#include "Menedzher.h"
#include "GlobalPeremen.h"

using namespace std;
using namespace System::Data;
using namespace MySql::Data::MySqlClient;


System::Void ProjectOOP::Prosmotr_Tovarov::Prosmotr_Tovarov_Load(System::Object^ sender, System::EventArgs^ e)
{
    int i, Kod_Categorii;
    this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
    Connect connect;
    connect.myConnection->Open();
    comboBox_categoriya->Items->Add("Все");
    connect.command = gcnew MySqlCommand("SELECT `Name` FROM `category`", connect.myConnection);

    connect.sqlReader = connect.command->ExecuteReader();
    {
        while (connect.sqlReader->Read())
        {
            comboBox_categoriya->Items->Add(connect.sqlReader[0]->ToString());
        }
    }
    connect.myConnection->Close();
}

System::Void ProjectOOP::Prosmotr_Tovarov::Output_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (MessageBox::Show("Закрыть приложение?", "Сообщение", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::OK) Application::Exit();
}

System::Void ProjectOOP::Prosmotr_Tovarov::Back_Click(System::Object^ sender, System::EventArgs^ e)
{
    Menedzher^ menedzher = gcnew Menedzher();
    menedzher->Show();
    this->Close();
}

System::Void ProjectOOP::Prosmotr_Tovarov::comboBox_categoriya_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    int Kod_Categorii;
    Connect connect;
    dataGridView_menu->Rows->Clear();
    connect.myConnection->Open();
    connect.command = gcnew MySqlCommand("SELECT `Kod_Category`FROM `category` WHERE `Name`=@Name", connect.myConnection);
    connect.command->Parameters->AddWithValue("@Name", comboBox_categoriya->Text);

    connect.sqlReader = connect.command->ExecuteReader();
    {
        while (connect.sqlReader->Read())
        {
            Kod_Categorii = connect.sqlReader->GetInt32(0);
        }
    }
    connect.myConnection->Close();

    connect.myConnection->Open();
    if (comboBox_categoriya->Text != "Все")
    {
        connect.command = gcnew MySqlCommand("SELECT `Name`, `Kkal`, `Ves`, `Cena` FROM `menu` WHERE `Kod_Kategory`=@Kod_Kategory AND `prodazha`='1'", connect.myConnection);
        connect.command->Parameters->AddWithValue("@Kod_Kategory", Kod_Categorii);
    }
    else connect.command = gcnew MySqlCommand("SELECT `Name`, `Kkal`, `Ves`, `Cena` FROM `menu` WHERE `prodazha`='1'", connect.myConnection);
    {
        connect.sqlReader = connect.command->ExecuteReader();
        while (connect.sqlReader->Read())
        {
            dataGridView_menu->Rows->Add();
            dataGridView_menu->Rows[dataGridView_menu->Rows->Count - 1]->Cells[0]->Value = connect.sqlReader[0]->ToString();
            dataGridView_menu->Rows[dataGridView_menu->Rows->Count - 1]->Cells[1]->Value = connect.sqlReader[1]->ToString();
            dataGridView_menu->Rows[dataGridView_menu->Rows->Count - 1]->Cells[2]->Value = connect.sqlReader[2]->ToString();
            dataGridView_menu->Rows[dataGridView_menu->Rows->Count - 1]->Cells[3]->Value = connect.sqlReader[3]->ToString();
        }
    }
    connect.myConnection->Close();
}

