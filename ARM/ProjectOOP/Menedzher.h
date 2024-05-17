#pragma once

namespace ProjectOOP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Menedzher
	/// </summary>
	public ref class Menedzher : public System::Windows::Forms::Form
	{
	public:
		Menedzher(void)
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
		~Menedzher()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Back;
	protected:
	private: System::Windows::Forms::Button^ Output;
	private: System::Windows::Forms::Label^ sozdaniye_zakazov;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ prosmotr_tovarov;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Menedzher::typeid));
			this->Back = (gcnew System::Windows::Forms::Button());
			this->Output = (gcnew System::Windows::Forms::Button());
			this->sozdaniye_zakazov = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->prosmotr_tovarov = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Back
			// 
			this->Back->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->Back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->Back->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24));
			this->Back->Location = System::Drawing::Point(12, 385);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(131, 53);
			this->Back->TabIndex = 18;
			this->Back->Text = L"Назад";
			this->Back->UseVisualStyleBackColor = false;
			this->Back->Click += gcnew System::EventHandler(this, &Menedzher::Back_Click);
			// 
			// Output
			// 
			this->Output->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Output->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->Output->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24));
			this->Output->Location = System::Drawing::Point(657, 385);
			this->Output->Name = L"Output";
			this->Output->Size = System::Drawing::Size(131, 53);
			this->Output->TabIndex = 17;
			this->Output->Text = L"Выход";
			this->Output->UseVisualStyleBackColor = false;
			this->Output->Click += gcnew System::EventHandler(this, &Menedzher::Output_Click);
			// 
			// sozdaniye_zakazov
			// 
			this->sozdaniye_zakazov->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->sozdaniye_zakazov->AutoSize = true;
			this->sozdaniye_zakazov->Cursor = System::Windows::Forms::Cursors::Hand;
			this->sozdaniye_zakazov->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sozdaniye_zakazov->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(8)));
			this->sozdaniye_zakazov->Location = System::Drawing::Point(199, 258);
			this->sozdaniye_zakazov->Name = L"sozdaniye_zakazov";
			this->sozdaniye_zakazov->Size = System::Drawing::Size(399, 67);
			this->sozdaniye_zakazov->TabIndex = 16;
			this->sozdaniye_zakazov->Text = L"Создание заказа";
			this->sozdaniye_zakazov->Click += gcnew System::EventHandler(this, &Menedzher::sozdaniye_zakazov_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(323, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(140, 126);
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// prosmotr_tovarov
			// 
			this->prosmotr_tovarov->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->prosmotr_tovarov->AutoSize = true;
			this->prosmotr_tovarov->Cursor = System::Windows::Forms::Cursors::Hand;
			this->prosmotr_tovarov->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->prosmotr_tovarov->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(8)));
			this->prosmotr_tovarov->Location = System::Drawing::Point(169, 141);
			this->prosmotr_tovarov->Name = L"prosmotr_tovarov";
			this->prosmotr_tovarov->Size = System::Drawing::Size(456, 67);
			this->prosmotr_tovarov->TabIndex = 14;
			this->prosmotr_tovarov->Text = L"Просмотр товаров";
			this->prosmotr_tovarov->Click += gcnew System::EventHandler(this, &Menedzher::prosmotr_tovarov_Click);
			// 
			// Menedzher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(800, 450);
			this->Controls->Add(this->Back);
			this->Controls->Add(this->Output);
			this->Controls->Add(this->sozdaniye_zakazov);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->prosmotr_tovarov);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Menedzher";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Меню";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Back_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Output_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void prosmotr_tovarov_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void sozdaniye_zakazov_Click(System::Object^ sender, System::EventArgs^ e);
};
}
