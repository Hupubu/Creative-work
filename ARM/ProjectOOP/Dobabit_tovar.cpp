#include "Dobabit_tovar.h"
#include "GlobalPeremen.h"

int Kod_Category = 0, Kod_Ingredienta = 0, Kod_Bluda;
bool Flag1 = false;

System::Void ProjectOOP::Dobabit_tovar::Dobabit_tovar_Load(System::Object^ sender, System::EventArgs^ e)
{
    Connect connect;
    connect.myConnection->Open();
    connect.command = gcnew MySqlCommand("SELECT `Name` FROM `category`",connect. myConnection);

    connect.sqlReader = connect.command->ExecuteReader();
    {
        while (connect.sqlReader->Read())
        {
            comboBox_categoriya->Items->Add(connect.sqlReader[0]->ToString());
        }
    }
    connect.myConnection->Close();

    connect.myConnection->Open();
    connect.command = gcnew MySqlCommand("SELECT `Name` FROM `sclad`",connect. myConnection);

    connect.sqlReader = connect.command->ExecuteReader();
    {
        while (connect.sqlReader->Read())
        {
            comboBox_ingredienty->Items->Add(connect.sqlReader[0]->ToString());
        }
    }
    connect.myConnection->Close();
}
System::Void ProjectOOP::Dobabit_tovar::uslovie_zavershenie_radact()
{
    Connect connect;
    connect.myConnection->Open();
    connect.command = gcnew MySqlCommand("DELETE FROM `sostav` WHERE `Kod_Bluda`=@Kod_Bluda", connect.myConnection);
    connect.command->Parameters->AddWithValue("Kod_Bluda", Kod_Bluda);
    connect.command->ExecuteNonQuery();
    connect.myConnection->Close();

    connect.myConnection->Open();
    connect.command = gcnew MySqlCommand("DELETE FROM `menu` WHERE `Kod_Bluda`=@Kod_Bluda", connect.myConnection);
    connect.command->Parameters->AddWithValue("Kod_Bluda", Kod_Bluda);
    connect.command->ExecuteNonQuery();
    connect.myConnection->Close();
}
System::Void ProjectOOP::Dobabit_tovar::Back_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (Flag1 != false)
    {
        if (MessageBox::Show("Отменить добавление?", "Сообщение", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::OK)
        {
            uslovie_zavershenie_radact();
        }
    }
    else this->Close();
}

System::Void ProjectOOP::Dobabit_tovar::dobavit_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (MessageBox::Show("Завершить добавление?", "Сообщение", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::OK)
    {
        this->DialogResult = System::Windows::Forms::DialogResult::OK;
    }
}

System::Void ProjectOOP::Dobabit_tovar::Output_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (Flag1 != false)
    {
        if (MessageBox::Show("Выйти? Введенные данные будут удалены", "Сообщение", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::OK)
        {
            uslovie_zavershenie_radact();
        }
    }
    else if (MessageBox::Show("Выйти из приложения?", "Сообщение", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Cancel)
    {
        Application::Exit();
    }
}

System::Void ProjectOOP::Dobabit_tovar::dobavit_tovar_Click(System::Object^ sender, System::EventArgs^ e)
{
    Connect connect;
    try
    {
    Found:
        if (name->Text != "" && comboBox_categoriya->Text != "" && Kkal->Text != "" && Ves->Text != "" && cena->Text != "")
        {
            Flag1 = true;
            dobavit_product->Enabled = true;
            connect.myConnection->Open();
            connect.command = gcnew MySqlCommand("SELECT `Kod_Category` FROM `category` WHERE `Name`=@Name",connect. myConnection);
            connect.command->Parameters->AddWithValue("@Name", comboBox_categoriya->Text);
            {
                connect.sqlReader = connect.command->ExecuteReader();
                while (connect.sqlReader->Read())
                {
                    Kod_Category = connect.sqlReader->GetInt32(0);//Название категории
                }
            }
            connect.myConnection->Close();

            if (Kod_Category == 0)
            {
                if (MessageBox::Show("Верно ли введена отрасль?", "Предупреждение", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::OK)
                {
                    connect.myConnection->Open();
                    connect.command = gcnew MySqlCommand("INSERT INTO `category`(`Name`) VALUES (@Name)",connect. myConnection);
                    connect.command->Parameters->AddWithValue("Name", comboBox_categoriya->Text);
                    connect.command->ExecuteNonQuery();
                    connect.myConnection->Close();

                    connect.myConnection->Open();
                    connect.command = gcnew MySqlCommand("SELECT `Kod_Category` FROM `category` WHERE `Name`=@Name",connect. myConnection);
                    connect.command->Parameters->AddWithValue("Name", comboBox_categoriya->Text);

                    connect.sqlReader = connect.command->ExecuteReader();
                    {
                        while (connect.sqlReader->Read())
                        {
                            Kod_Category = connect.sqlReader->GetInt32(0);
                        }
                    }
                    connect.myConnection->Close();
                }
                else
                {
                    comboBox_categoriya->Text = "";
                    goto Found;
                }
            }

            connect.myConnection->Open();
            connect.command = gcnew MySqlCommand("INSERT INTO `menu`(`Name`, `Kod_Kategory`, `Kkal`, `Ves`, `Cena`, `prodazha`) VALUES (@Name, @Kod_Kategory, @Kkal,@Ves,@Cena,'1')",connect. myConnection);
            connect.command->Parameters->AddWithValue("Name", name->Text);
            connect.command->Parameters->AddWithValue("Kod_Kategory", Kod_Category.ToString());
            connect.command->Parameters->AddWithValue("Kkal", Kkal->Text);
            connect.command->Parameters->AddWithValue("Ves", Ves->Text);
            connect.command->Parameters->AddWithValue("Cena", cena->Text);
            connect.command->ExecuteNonQuery();
            connect.myConnection->Close();

            MessageBox::Show("Добавлено!");
            dobavit_tovar->Enabled = false;
        }
        else MessageBox::Show("Заполните все пустые поля!", "Предупреждение", MessageBoxButtons::OKCancel, MessageBoxIcon::Exclamation);
    }
    catch (...)
    {
        MessageBox::Show("Проверьте ввод!", "Предупреждение", MessageBoxButtons::OKCancel, MessageBoxIcon::Exclamation);
    }
}

System::Void ProjectOOP::Dobabit_tovar::dobavit_product_Click(System::Object^ sender, System::EventArgs^ e)
{
    Connect connect;
    try
    {
    Found:
        if (comboBox_ingredienty->Text != "" && kolvo->Text != "")
        {
            connect.myConnection->Open();
            connect.command = gcnew MySqlCommand("SELECT `Kod_Indredienta` FROM `sclad` WHERE `Name`=@Name",connect. myConnection);
            connect.command->Parameters->AddWithValue("Name", comboBox_ingredienty->Text);

            connect.sqlReader = connect.command->ExecuteReader();
            {
                while (connect.sqlReader->Read())
                {
                    Kod_Ingredienta = connect.sqlReader->GetInt32(0);
                }
            }
            connect.myConnection->Close();
            if (Kod_Ingredienta == 0)
            {
                if (MessageBox::Show("Верно ли введен продукт?", "Предупреждение", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::OK)
                {
                    connect.myConnection->Open();
                    connect.command = gcnew MySqlCommand("INSERT INTO `sclad`(`Name`) VALUES (@Name)",connect. myConnection);
                    connect.command->Parameters->AddWithValue("Name", comboBox_ingredienty->Text);
                    connect.command->ExecuteNonQuery();
                    connect.myConnection->Close();

                    connect.myConnection->Open();
                    connect.command = gcnew MySqlCommand("SELECT `Kod_Indredienta` FROM `sclad` WHERE `Name`=@Name",connect. myConnection);
                    connect.command->Parameters->AddWithValue("Name", comboBox_ingredienty->Text);

                    connect.sqlReader = connect.command->ExecuteReader();
                    {
                        while (connect.sqlReader->Read())
                        {
                            Kod_Ingredienta = connect.sqlReader->GetInt32(0);
                        }
                    }
                    connect.myConnection->Close();
                }
                else
                {
                    comboBox_ingredienty->Text = "";
                    goto Found;
                }
            }

            connect.myConnection->Open();
            connect.command = gcnew MySqlCommand("SELECT `Kod_Bluda` FROM `menu` WHERE `Name`=@Name",connect. myConnection);
            connect.command->Parameters->AddWithValue("Name", name->Text);

            connect.sqlReader = connect.command->ExecuteReader();
            {
                while (connect.sqlReader->Read())
                {
                    Kod_Bluda = connect.sqlReader->GetInt32(0);
                }
            }
            connect.myConnection->Close();

            connect.myConnection->Open();
            connect.command = gcnew MySqlCommand("INSERT INTO `sostav`(`Kod_Bluda`, `Kod_Indredienta`, `Kolichestvo`) VALUES (@Kod_Bluda,@Kod_Indredienta,@Kolichestvo)",connect. myConnection);
            connect.command->Parameters->AddWithValue("Kod_Bluda", Kod_Bluda.ToString());
            connect.command->Parameters->AddWithValue("Kod_Indredienta", Kod_Ingredienta.ToString());
            connect.command->Parameters->AddWithValue("Kolichestvo", kolvo->Text);
            connect.command->ExecuteNonQuery();
            connect.myConnection->Close();

            MessageBox::Show("Добавлено!");
            dobavit->Enabled = true;

        }
        else MessageBox::Show("Заполните все пустые поля!", "Предупреждение", MessageBoxButtons::OKCancel, MessageBoxIcon::Exclamation);
    }
    catch (...)
    {
        MessageBox::Show("Проверьте ввод!", "Предупреждение", MessageBoxButtons::OKCancel, MessageBoxIcon::Exclamation);
    }
}
