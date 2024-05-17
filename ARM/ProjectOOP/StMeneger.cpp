#include "StMeneger.h"
#include "Redactor_tovarov.h"

System::Void ProjectOOP::StMeneger::Prosmotr_Tovarov_Click(System::Object^ sender, System::EventArgs^ e)
{
    Redactor_tovarov^ redactor_tovarov = gcnew Redactor_tovarov();
    redactor_tovarov->Show();
    this->Close();
}

System::Void ProjectOOP::StMeneger::Back_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Close();
}

System::Void ProjectOOP::StMeneger::Output_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (MessageBox::Show("Закрыть приложение?", "Сообщение", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::OK)
    {
        Application::Exit();
    }
}
