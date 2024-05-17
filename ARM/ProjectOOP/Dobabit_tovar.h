#pragma once

namespace ProjectOOP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Dobabit_tovar
	/// </summary>
	public ref class Dobabit_tovar : public System::Windows::Forms::Form
	{
	public:
		Dobabit_tovar(void)
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
		~Dobabit_tovar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ name;
	protected:
	private: System::Windows::Forms::Button^ dobavit_tovar;
	private: System::Windows::Forms::Button^ dobavit_product;
	private: System::Windows::Forms::TextBox^ kolvo;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ comboBox_ingredienty;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ cena;
	private: System::Windows::Forms::TextBox^ Ves;
	private: System::Windows::Forms::TextBox^ Kkal;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBox_categoriya;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ dobavit;
	private: System::Windows::Forms::Button^ Back;
	private: System::Windows::Forms::Button^ Output;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dobabit_tovar::typeid));
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->dobavit_tovar = (gcnew System::Windows::Forms::Button());
			this->dobavit_product = (gcnew System::Windows::Forms::Button());
			this->kolvo = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox_ingredienty = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cena = (gcnew System::Windows::Forms::TextBox());
			this->Ves = (gcnew System::Windows::Forms::TextBox());
			this->Kkal = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox_categoriya = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dobavit = (gcnew System::Windows::Forms::Button());
			this->Back = (gcnew System::Windows::Forms::Button());
			this->Output = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// name
			// 
			this->name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->name->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F));
			this->name->Location = System::Drawing::Point(237, 176);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(316, 34);
			this->name->TabIndex = 79;
			// 
			// dobavit_tovar
			// 
			this->dobavit_tovar->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->dobavit_tovar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)));
			this->dobavit_tovar->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dobavit_tovar->Location = System::Drawing::Point(79, 395);
			this->dobavit_tovar->Name = L"dobavit_tovar";
			this->dobavit_tovar->Size = System::Drawing::Size(146, 37);
			this->dobavit_tovar->TabIndex = 84;
			this->dobavit_tovar->Text = L"Добавить";
			this->dobavit_tovar->UseVisualStyleBackColor = false;
			this->dobavit_tovar->Click += gcnew System::EventHandler(this, &Dobabit_tovar::dobavit_tovar_Click);
			// 
			// dobavit_product
			// 
			this->dobavit_product->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->dobavit_product->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)));
			this->dobavit_product->Enabled = false;
			this->dobavit_product->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dobavit_product->Location = System::Drawing::Point(683, 266);
			this->dobavit_product->Name = L"dobavit_product";
			this->dobavit_product->Size = System::Drawing::Size(146, 37);
			this->dobavit_product->TabIndex = 87;
			this->dobavit_product->Text = L"Добавить";
			this->dobavit_product->UseVisualStyleBackColor = false;
			this->dobavit_product->Click += gcnew System::EventHandler(this, &Dobabit_tovar::dobavit_product_Click);
			// 
			// kolvo
			// 
			this->kolvo->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->kolvo->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F));
			this->kolvo->Location = System::Drawing::Point(649, 226);
			this->kolvo->Name = L"kolvo";
			this->kolvo->Size = System::Drawing::Size(100, 34);
			this->kolvo->TabIndex = 86;
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(573, 227);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(70, 29);
			this->label9->TabIndex = 100;
			this->label9->Text = L"Вес, г";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(573, 186);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(131, 29);
			this->label8->TabIndex = 99;
			this->label8->Text = L"Ингредиент";
			// 
			// comboBox_ingredienty
			// 
			this->comboBox_ingredienty->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox_ingredienty->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F));
			this->comboBox_ingredienty->FormattingEnabled = true;
			this->comboBox_ingredienty->Location = System::Drawing::Point(707, 186);
			this->comboBox_ingredienty->Name = L"comboBox_ingredienty";
			this->comboBox_ingredienty->Size = System::Drawing::Size(255, 34);
			this->comboBox_ingredienty->TabIndex = 85;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)));
			this->label7->Location = System::Drawing::Point(573, 143);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(377, 30);
			this->label7->TabIndex = 98;
			this->label7->Text = L"2. Заполните данные о продуктах\r\n";
			// 
			// cena
			// 
			this->cena->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cena->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F));
			this->cena->Location = System::Drawing::Point(146, 345);
			this->cena->Name = L"cena";
			this->cena->Size = System::Drawing::Size(100, 34);
			this->cena->TabIndex = 83;
			// 
			// Ves
			// 
			this->Ves->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Ves->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F));
			this->Ves->Location = System::Drawing::Point(108, 304);
			this->Ves->Name = L"Ves";
			this->Ves->Size = System::Drawing::Size(100, 34);
			this->Ves->TabIndex = 82;
			// 
			// Kkal
			// 
			this->Kkal->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Kkal->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F));
			this->Kkal->Location = System::Drawing::Point(99, 264);
			this->Kkal->Name = L"Kkal";
			this->Kkal->Size = System::Drawing::Size(100, 34);
			this->Kkal->TabIndex = 81;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(32, 350);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(108, 29);
			this->label6->TabIndex = 97;
			this->label6->Text = L"Цена, руб";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(32, 311);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 29);
			this->label4->TabIndex = 96;
			this->label4->Text = L"Вес, г";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(32, 264);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 29);
			this->label3->TabIndex = 95;
			this->label3->Text = L"Ккал";
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
			this->label5->Location = System::Drawing::Point(32, 143);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(340, 30);
			this->label5->TabIndex = 94;
			this->label5->Text = L"1. Заполните данные о товаре";
			// 
			// comboBox_categoriya
			// 
			this->comboBox_categoriya->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox_categoriya->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F));
			this->comboBox_categoriya->FormattingEnabled = true;
			this->comboBox_categoriya->Location = System::Drawing::Point(237, 222);
			this->comboBox_categoriya->Name = L"comboBox_categoriya";
			this->comboBox_categoriya->Size = System::Drawing::Size(316, 34);
			this->comboBox_categoriya->TabIndex = 80;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(32, 227);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(193, 29);
			this->label1->TabIndex = 93;
			this->label1->Text = L"Категория товара:";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(32, 181);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(186, 29);
			this->label2->TabIndex = 92;
			this->label2->Text = L"Название блюда:";
			// 
			// dobavit
			// 
			this->dobavit->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->dobavit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)));
			this->dobavit->Enabled = false;
			this->dobavit->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24));
			this->dobavit->Location = System::Drawing::Point(376, 454);
			this->dobavit->Name = L"dobavit";
			this->dobavit->Size = System::Drawing::Size(219, 53);
			this->dobavit->TabIndex = 88;
			this->dobavit->Text = L"Применить";
			this->dobavit->UseVisualStyleBackColor = false;
			this->dobavit->Click += gcnew System::EventHandler(this, &Dobabit_tovar::dobavit_Click);
			// 
			// Back
			// 
			this->Back->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->Back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->Back->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24));
			this->Back->Location = System::Drawing::Point(12, 454);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(131, 53);
			this->Back->TabIndex = 89;
			this->Back->Text = L"Назад";
			this->Back->UseVisualStyleBackColor = false;
			this->Back->Click += gcnew System::EventHandler(this, &Dobabit_tovar::Back_Click);
			// 
			// Output
			// 
			this->Output->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Output->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->Output->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24));
			this->Output->Location = System::Drawing::Point(831, 454);
			this->Output->Name = L"Output";
			this->Output->Size = System::Drawing::Size(131, 53);
			this->Output->TabIndex = 90;
			this->Output->Text = L"Выход";
			this->Output->UseVisualStyleBackColor = false;
			this->Output->Click += gcnew System::EventHandler(this, &Dobabit_tovar::Output_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(410, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(140, 126);
			this->pictureBox1->TabIndex = 91;
			this->pictureBox1->TabStop = false;
			// 
			// Dobabit_tovar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(974, 519);
			this->Controls->Add(this->name);
			this->Controls->Add(this->dobavit_tovar);
			this->Controls->Add(this->dobavit_product);
			this->Controls->Add(this->kolvo);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->comboBox_ingredienty);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->cena);
			this->Controls->Add(this->Ves);
			this->Controls->Add(this->Kkal);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBox_categoriya);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dobavit);
			this->Controls->Add(this->Back);
			this->Controls->Add(this->Output);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Dobabit_tovar";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Добавление товаров";
			this->Load += gcnew System::EventHandler(this, &Dobabit_tovar::Dobabit_tovar_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ProjectOOP::Dobabit_tovar::uslovie_zavershenie_radact();
	private: System::Void Dobabit_tovar_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Back_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void dobavit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Output_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void dobavit_tovar_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void dobavit_product_Click(System::Object^ sender, System::EventArgs^ e);
};
}
