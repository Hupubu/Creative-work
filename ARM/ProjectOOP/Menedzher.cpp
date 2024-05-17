#include "Menedzher.h"
#include "Prosmotr_Tovarov.h"
#include "Sozdaniye_Zakaza.h"

System::Void ProjectOOP::Menedzher::Back_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Close();
}

System::Void ProjectOOP::Menedzher::Output_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (MessageBox::Show("Закрыть приложение?", "Сообщение", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::OK)
    {
        Application::Exit();
    }
}

System::Void ProjectOOP::Menedzher::prosmotr_tovarov_Click(System::Object^ sender, System::EventArgs^ e)
{
    Prosmotr_Tovarov^ prosmotr_Tovarov = gcnew Prosmotr_Tovarov();
    prosmotr_Tovarov->Show();
    this->Close();
}

System::Void ProjectOOP::Menedzher::sozdaniye_zakazov_Click(System::Object^ sender, System::EventArgs^ e)
{
    Sozdaniye_Zakaza^ sozdaniye_Zakaza = gcnew Sozdaniye_Zakaza();
    sozdaniye_Zakaza->Show();
    this->Close();
}
