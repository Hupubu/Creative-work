#pragma once

namespace ProjectOOP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Dostavka
	/// </summary>
	public ref class Dostavka : public System::Windows::Forms::Form
	{
	public:
		Dostavka(void)
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
		~Dostavka()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ zavershit_zakaz;
	protected:
	private: System::Windows::Forms::Button^ Output;
	private: System::Windows::Forms::ComboBox^ comboBox_dostavshik;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ kvartira;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ dom;
	private: System::Windows::Forms::TextBox^ ulitsa;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ name;
	private: System::Windows::Forms::TextBox^ familiya;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dostavka::typeid));
			this->zavershit_zakaz = (gcnew System::Windows::Forms::Button());
			this->Output = (gcnew System::Windows::Forms::Button());
			this->comboBox_dostavshik = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->kvartira = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dom = (gcnew System::Windows::Forms::TextBox());
			this->ulitsa = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->familiya = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// zavershit_zakaz
			// 
			this->zavershit_zakaz->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->zavershit_zakaz->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)));
			this->zavershit_zakaz->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24));
			this->zavershit_zakaz->Location = System::Drawing::Point(284, 385);
			this->zavershit_zakaz->Name = L"zavershit_zakaz";
			this->zavershit_zakaz->Size = System::Drawing::Size(181, 53);
			this->zavershit_zakaz->TabIndex = 58;
			this->zavershit_zakaz->Text = L"Далее";
			this->zavershit_zakaz->UseVisualStyleBackColor = false;
			this->zavershit_zakaz->Click += gcnew System::EventHandler(this, &Dostavka::zavershit_zakaz_Click);
			// 
			// Output
			// 
			this->Output->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Output->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->Output->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24));
			this->Output->Location = System::Drawing::Point(643, 385);
			this->Output->Name = L"Output";
			this->Output->Size = System::Drawing::Size(131, 53);
			this->Output->TabIndex = 57;
			this->Output->Text = L"Выход";
			this->Output->UseVisualStyleBackColor = false;
			this->Output->Click += gcnew System::EventHandler(this, &Dostavka::Output_Click);
			// 
			// comboBox_dostavshik
			// 
			this->comboBox_dostavshik->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox_dostavshik->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F));
			this->comboBox_dostavshik->FormattingEnabled = true;
			this->comboBox_dostavshik->Location = System::Drawing::Point(163, 285);
			this->comboBox_dostavshik->Name = L"comboBox_dostavshik";
			this->comboBox_dostavshik->Size = System::Drawing::Size(342, 34);
			this->comboBox_dostavshik->TabIndex = 56;
			this->comboBox_dostavshik->TextChanged += gcnew System::EventHandler(this, &Dostavka::comboBox_dostavshik_TextChanged);
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(27, 285);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(130, 29);
			this->label7->TabIndex = 55;
			this->label7->Text = L"Доставщик:";
			// 
			// kvartira
			// 
			this->kvartira->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->kvartira->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F));
			this->kvartira->Location = System::Drawing::Point(598, 242);
			this->kvartira->Name = L"kvartira";
			this->kvartira->Size = System::Drawing::Size(82, 34);
			this->kvartira->TabIndex = 54;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(482, 242);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(110, 29);
			this->label6->TabIndex = 53;
			this->label6->Text = L"Квартира:";
			// 
			// dom
			// 
			this->dom->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dom->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F));
			this->dom->Location = System::Drawing::Point(383, 237);
			this->dom->Name = L"dom";
			this->dom->Size = System::Drawing::Size(82, 34);
			this->dom->TabIndex = 52;
			// 
			// ulitsa
			// 
			this->ulitsa->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ulitsa->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F));
			this->ulitsa->Location = System::Drawing::Point(116, 237);
			this->ulitsa->Name = L"ulitsa";
			this->ulitsa->Size = System::Drawing::Size(193, 34);
			this->ulitsa->TabIndex = 51;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(315, 242);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 29);
			this->label3->TabIndex = 50;
			this->label3->Text = L"Дом:";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(27, 242);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 29);
			this->label5->TabIndex = 49;
			this->label5->Text = L"Улица:";
			// 
			// name
			// 
			this->name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->name->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F));
			this->name->Location = System::Drawing::Point(408, 190);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(193, 34);
			this->name->TabIndex = 48;
			// 
			// familiya
			// 
			this->familiya->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->familiya->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F));
			this->familiya->Location = System::Drawing::Point(142, 190);
			this->familiya->Name = L"familiya";
			this->familiya->Size = System::Drawing::Size(193, 34);
			this->familiya->TabIndex = 47;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)));
			this->label4->Location = System::Drawing::Point(27, 156);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(337, 30);
			this->label4->TabIndex = 46;
			this->label4->Text = L"Заполните контактные данные";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(341, 195);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 29);
			this->label2->TabIndex = 45;
			this->label2->Text = L"Имя:";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(27, 195);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 29);
			this->label1->TabIndex = 44;
			this->label1->Text = L"Фамилия:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(309, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(140, 126);
			this->pictureBox1->TabIndex = 43;
			this->pictureBox1->TabStop = false;
			// 
			// Dostavka
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(800, 450);
			this->Controls->Add(this->zavershit_zakaz);
			this->Controls->Add(this->Output);
			this->Controls->Add(this->comboBox_dostavshik);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->kvartira);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->dom);
			this->Controls->Add(this->ulitsa);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->name);
			this->Controls->Add(this->familiya);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Dostavka";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Доставка";
			this->Load += gcnew System::EventHandler(this, &Dostavka::Dostavka_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void zavershit_zakaz_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Output_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Dostavka_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void comboBox_dostavshik_TextChanged(System::Object^ sender, System::EventArgs^ e);
};
}
