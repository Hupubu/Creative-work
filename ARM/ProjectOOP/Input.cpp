#include "Input.h"
#include <Windows.h>
#include "Menedzher.h"
#include "StMeneger.h"
#include "GlobalPeremen.h"

using namespace std;
using namespace System::Data;
using namespace MySql::Data::MySqlClient;

using namespace ProjectOOP; // Название проекта


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew Input);
    return 0;
}
int Kod_Sotrudnika;
enum KodDolznosty{ Manager = 1, StManager = 2};
System::Void ProjectOOP::Input::button_input_Click(System::Object^ sender, System::EventArgs^ e)
{
    int Kod_Dolzhnosty = -1;
    Connect connect;
    try
    {
        connect.myConnection->Open();
        connect.command = gcnew MySqlCommand("SELECT `Kod_Sotrudnika`, `Kod_Dolzhnosty` FROM `personal` WHERE `Login` = @Login AND `Password` = @Password", connect.myConnection);
        connect.command->Parameters->AddWithValue("@Login", textBox_login->Text);
        connect.command->Parameters->AddWithValue("@Password", textBox_password->Text);
        connect.sqlReader = connect.command->ExecuteReader();
        while (connect.sqlReader->Read())
        {
            Kod_Sotrudnika = connect.sqlReader->GetInt32(0);
            Kod_Dolzhnosty = connect.sqlReader->GetInt32(1);
        }
        connect.myConnection->Close();
    }
    catch (Exception^ ex)   // обработка остальных исключений
    {
        MessageBox::Show("Не удалось подключиться к базе!", "Ошибка!", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);
    }

    switch (Kod_Dolzhnosty)
    {
    case KodDolznosty::Manager:
    {
        Menedzher^ menedzher = gcnew Menedzher();
        menedzher->Show();
        break;
    }
       
    case KodDolznosty::StManager:
    {
        StMeneger^ stMeneger = gcnew StMeneger();
        stMeneger->Show(); 
        break;
    }
    case -1: break;
       
    default: 
        if (MessageBox::Show("Проверьте введенные данные!", "Предупреждение", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Cancel)
        {
            this->Close();
        }
    }
}

System::Void ProjectOOP::Input::textBox_login_Leave(System::Object^ sender, System::EventArgs^ e)
{
    if (textBox_login->Text == "")
    {
        textBox_login->Text = "Логин";
        textBox_login->ForeColor = Color::DarkGray;
    }
}

System::Void ProjectOOP::Input::textBox_login_Enter(System::Object^ sender, System::EventArgs^ e)
{
    if (textBox_login->Text == "Логин")
    {
        textBox_login->Text = "";
        textBox_login->ForeColor = Color::Black;
    }
}

System::Void ProjectOOP::Input::textBox_password_Leave(System::Object^ sender, System::EventArgs^ e)
{
    if (textBox_password->Text == "")
    {
        textBox_password->PasswordChar = '\0';
        textBox_password->Text = "Пароль";
        textBox_password->ForeColor = Color::DarkGray;
    }
}

System::Void ProjectOOP::Input::textBox_password_Enter(System::Object^ sender, System::EventArgs^ e)
{
    if (textBox_password->Text == "Пароль")
    {
        textBox_password->Text = "";
        textBox_password->PasswordChar = '*';
        textBox_password->ForeColor = Color::Black;
    }
}
