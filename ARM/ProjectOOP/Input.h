#pragma once
#include <string>

namespace ProjectOOP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Input
	/// </summary>
	public ref class Input : public System::Windows::Forms::Form
	{
		
		

	public:
		Input(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Input()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox_password;
	protected:

	private: System::Windows::Forms::TextBox^ textBox_login;
	private: System::Windows::Forms::Button^ button_input;


	private: System::Windows::Forms::Label^ label1;

	protected:





	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Input::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			this->textBox_login = (gcnew System::Windows::Forms::TextBox());
			this->button_input = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(325, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(140, 126);
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// textBox_password
			// 
			this->textBox_password->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_password->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
			this->textBox_password->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox_password->Location = System::Drawing::Point(32, 285);
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->Size = System::Drawing::Size(737, 45);
			this->textBox_password->TabIndex = 12;
			this->textBox_password->Text = L"Пароль";
			this->textBox_password->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox_password->Enter += gcnew System::EventHandler(this, &Input::textBox_password_Enter);
			this->textBox_password->Leave += gcnew System::EventHandler(this, &Input::textBox_password_Leave);
			// 
			// textBox_login
			// 
			this->textBox_login->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_login->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
			this->textBox_login->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox_login->Location = System::Drawing::Point(32, 225);
			this->textBox_login->Name = L"textBox_login";
			this->textBox_login->Size = System::Drawing::Size(737, 45);
			this->textBox_login->TabIndex = 11;
			this->textBox_login->Text = L"Логин";
			this->textBox_login->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox_login->Enter += gcnew System::EventHandler(this, &Input::textBox_login_Enter);
			this->textBox_login->Leave += gcnew System::EventHandler(this, &Input::textBox_login_Leave);
			// 
			// button_input
			// 
			this->button_input->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_input->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)));
			this->button_input->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24));
			this->button_input->Location = System::Drawing::Point(32, 373);
			this->button_input->Name = L"button_input";
			this->button_input->Size = System::Drawing::Size(737, 53);
			this->button_input->TabIndex = 10;
			this->button_input->Text = L"Войти";
			this->button_input->UseVisualStyleBackColor = false;
			this->button_input->Click += gcnew System::EventHandler(this, &Input::button_input_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)));
			this->label1->Location = System::Drawing::Point(228, 132);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(327, 67);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Авторизация";
			// 
			// Input
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(800, 450);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox_password);
			this->Controls->Add(this->textBox_login);
			this->Controls->Add(this->button_input);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(816, 489);
			this->Name = L"Input";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Авторизация";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button_input_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void textBox_login_Leave(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox_login_Enter(System::Object^ sender, System::EventArgs^ e);

private: System::Void textBox_password_Leave(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox_password_Enter(System::Object^ sender, System::EventArgs^ e);
};
}
