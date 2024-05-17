#pragma once

namespace ProjectOOP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Sozdaniye_Zakaza
	/// </summary>
	public ref class Sozdaniye_Zakaza : public System::Windows::Forms::Form
	{
	public:
		Sozdaniye_Zakaza(void)
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
		~Sozdaniye_Zakaza()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ checkBox_dostavka;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox_categoriya;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ zavershit_zakaz;
	private: System::Windows::Forms::Button^ dobavit_k_zakazu;
	private: System::Windows::Forms::Button^ Output;
	private: System::Windows::Forms::Button^ Back;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox_Bludo;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ colvo_porciy;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Sozdaniye_Zakaza::typeid));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->checkBox_dostavka = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox_categoriya = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->zavershit_zakaz = (gcnew System::Windows::Forms::Button());
			this->dobavit_k_zakazu = (gcnew System::Windows::Forms::Button());
			this->Output = (gcnew System::Windows::Forms::Button());
			this->Back = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox_Bludo = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->colvo_porciy = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)));
			this->label5->Location = System::Drawing::Point(41, 156);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(284, 30);
			this->label5->TabIndex = 64;
			this->label5->Text = L"Заполните данные заказа";
			// 
			// checkBox_dostavka
			// 
			this->checkBox_dostavka->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->checkBox_dostavka->AutoSize = true;
			this->checkBox_dostavka->Location = System::Drawing::Point(472, 297);
			this->checkBox_dostavka->Name = L"checkBox_dostavka";
			this->checkBox_dostavka->Size = System::Drawing::Size(15, 14);
			this->checkBox_dostavka->TabIndex = 63;
			this->checkBox_dostavka->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(355, 285);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 29);
			this->label4->TabIndex = 62;
			this->label4->Text = L"Доставка:";
			// 
			// comboBox_categoriya
			// 
			this->comboBox_categoriya->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox_categoriya->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F));
			this->comboBox_categoriya->FormattingEnabled = true;
			this->comboBox_categoriya->Location = System::Drawing::Point(246, 190);
			this->comboBox_categoriya->Name = L"comboBox_categoriya";
			this->comboBox_categoriya->Size = System::Drawing::Size(316, 34);
			this->comboBox_categoriya->TabIndex = 61;
			this->comboBox_categoriya->TextChanged += gcnew System::EventHandler(this, &Sozdaniye_Zakaza::comboBox_categoriya_TextChanged);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(41, 195);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(193, 29);
			this->label1->TabIndex = 60;
			this->label1->Text = L"Категория товара:";
			// 
			// zavershit_zakaz
			// 
			this->zavershit_zakaz->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->zavershit_zakaz->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)));
			this->zavershit_zakaz->Enabled = false;
			this->zavershit_zakaz->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24));
			this->zavershit_zakaz->Location = System::Drawing::Point(443, 385);
			this->zavershit_zakaz->Name = L"zavershit_zakaz";
			this->zavershit_zakaz->Size = System::Drawing::Size(191, 53);
			this->zavershit_zakaz->TabIndex = 59;
			this->zavershit_zakaz->Text = L"Завершить";
			this->zavershit_zakaz->UseVisualStyleBackColor = false;
			this->zavershit_zakaz->Click += gcnew System::EventHandler(this, &Sozdaniye_Zakaza::zavershit_zakaz_Click);
			// 
			// dobavit_k_zakazu
			// 
			this->dobavit_k_zakazu->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->dobavit_k_zakazu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(8)));
			this->dobavit_k_zakazu->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24));
			this->dobavit_k_zakazu->Location = System::Drawing::Point(156, 385);
			this->dobavit_k_zakazu->Name = L"dobavit_k_zakazu";
			this->dobavit_k_zakazu->Size = System::Drawing::Size(181, 53);
			this->dobavit_k_zakazu->TabIndex = 58;
			this->dobavit_k_zakazu->Text = L"Добавить";
			this->dobavit_k_zakazu->UseVisualStyleBackColor = false;
			this->dobavit_k_zakazu->Click += gcnew System::EventHandler(this, &Sozdaniye_Zakaza::dobavit_k_zakazu_Click);
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
			this->Output->TabIndex = 57;
			this->Output->Text = L"Выход";
			this->Output->UseVisualStyleBackColor = false;
			this->Output->Click += gcnew System::EventHandler(this, &Sozdaniye_Zakaza::Output_Click);
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
			this->Back->TabIndex = 56;
			this->Back->Text = L"Назад";
			this->Back->UseVisualStyleBackColor = false;
			this->Back->Click += gcnew System::EventHandler(this, &Sozdaniye_Zakaza::Back_Click);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(41, 285);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(219, 29);
			this->label3->TabIndex = 55;
			this->label3->Text = L"Количество порций:";
			// 
			// comboBox_Bludo
			// 
			this->comboBox_Bludo->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox_Bludo->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F));
			this->comboBox_Bludo->FormattingEnabled = true;
			this->comboBox_Bludo->Location = System::Drawing::Point(246, 237);
			this->comboBox_Bludo->Name = L"comboBox_Bludo";
			this->comboBox_Bludo->Size = System::Drawing::Size(316, 34);
			this->comboBox_Bludo->TabIndex = 54;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(41, 242);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(186, 29);
			this->label2->TabIndex = 53;
			this->label2->Text = L"Название блюда:";
			// 
			// colvo_porciy
			// 
			this->colvo_porciy->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->colvo_porciy->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F));
			this->colvo_porciy->Location = System::Drawing::Point(275, 280);
			this->colvo_porciy->Name = L"colvo_porciy";
			this->colvo_porciy->Size = System::Drawing::Size(62, 34);
			this->colvo_porciy->TabIndex = 52;
			this->colvo_porciy->Leave += gcnew System::EventHandler(this, &Sozdaniye_Zakaza::colvo_porciy_Leave);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(323, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(140, 126);
			this->pictureBox1->TabIndex = 51;
			this->pictureBox1->TabStop = false;
			// 
			// Sozdaniye_Zakaza
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(800, 450);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->checkBox_dostavka);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox_categoriya);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->zavershit_zakaz);
			this->Controls->Add(this->dobavit_k_zakazu);
			this->Controls->Add(this->Output);
			this->Controls->Add(this->Back);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox_Bludo);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->colvo_porciy);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Sozdaniye_Zakaza";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Создание заказа";
			this->Load += gcnew System::EventHandler(this, &Sozdaniye_Zakaza::Sozdaniye_Zakaza_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void Back_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void dobavit_k_zakazu_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void zavershit_zakaz_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Output_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void comboBox_categoriya_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void colvo_porciy_Leave(System::Object^ sender, System::EventArgs^ e);
private: System::Void Sozdaniye_Zakaza_Load(System::Object^ sender, System::EventArgs^ e);
};
}
