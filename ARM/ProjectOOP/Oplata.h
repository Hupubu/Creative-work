#pragma once

namespace ProjectOOP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Oplata
	/// </summary>
	public ref class Oplata : public System::Windows::Forms::Form
	{
	public:
		Oplata(void)
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
		~Oplata()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ oplata_posle;
	protected:
	private: System::Windows::Forms::Button^ Output;
	private: System::Windows::Forms::Button^ Back;
	private: System::Windows::Forms::Button^ zavershit_zakaz;
	private: System::Windows::Forms::Label^ label_summa;
	private: System::Windows::Forms::CheckBox^ beznal_oplata;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Oplata::typeid));
			this->oplata_posle = (gcnew System::Windows::Forms::Button());
			this->Output = (gcnew System::Windows::Forms::Button());
			this->Back = (gcnew System::Windows::Forms::Button());
			this->zavershit_zakaz = (gcnew System::Windows::Forms::Button());
			this->label_summa = (gcnew System::Windows::Forms::Label());
			this->beznal_oplata = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// oplata_posle
			// 
			this->oplata_posle->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->oplata_posle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)));
			this->oplata_posle->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24));
			this->oplata_posle->Location = System::Drawing::Point(363, 383);
			this->oplata_posle->Name = L"oplata_posle";
			this->oplata_posle->Size = System::Drawing::Size(288, 53);
			this->oplata_posle->TabIndex = 56;
			this->oplata_posle->Text = L"После доставки";
			this->oplata_posle->UseVisualStyleBackColor = false;
			this->oplata_posle->Click += gcnew System::EventHandler(this, &Oplata::oplata_posle_Click);
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
			this->Output->TabIndex = 55;
			this->Output->Text = L"Выход";
			this->Output->UseVisualStyleBackColor = false;
			this->Output->Click += gcnew System::EventHandler(this, &Oplata::Output_Click);
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
			this->Back->TabIndex = 54;
			this->Back->Text = L"Назад";
			this->Back->UseVisualStyleBackColor = false;
			this->Back->Click += gcnew System::EventHandler(this, &Oplata::Back_Click);
			// 
			// zavershit_zakaz
			// 
			this->zavershit_zakaz->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->zavershit_zakaz->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)));
			this->zavershit_zakaz->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24));
			this->zavershit_zakaz->Location = System::Drawing::Point(149, 383);
			this->zavershit_zakaz->Name = L"zavershit_zakaz";
			this->zavershit_zakaz->Size = System::Drawing::Size(195, 53);
			this->zavershit_zakaz->TabIndex = 53;
			this->zavershit_zakaz->Text = L"Оплатить";
			this->zavershit_zakaz->UseVisualStyleBackColor = false;
			this->zavershit_zakaz->Click += gcnew System::EventHandler(this, &Oplata::zavershit_zakaz_Click);
			// 
			// label_summa
			// 
			this->label_summa->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_summa->AutoSize = true;
			this->label_summa->BackColor = System::Drawing::Color::Transparent;
			this->label_summa->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_summa->ForeColor = System::Drawing::Color::Black;
			this->label_summa->Location = System::Drawing::Point(131, 204);
			this->label_summa->Name = L"label_summa";
			this->label_summa->Size = System::Drawing::Size(19, 29);
			this->label_summa->TabIndex = 52;
			this->label_summa->Text = L" ";
			// 
			// beznal_oplata
			// 
			this->beznal_oplata->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->beznal_oplata->AutoSize = true;
			this->beznal_oplata->Location = System::Drawing::Point(272, 272);
			this->beznal_oplata->Name = L"beznal_oplata";
			this->beznal_oplata->Size = System::Drawing::Size(15, 14);
			this->beznal_oplata->TabIndex = 51;
			this->beznal_oplata->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(41, 260);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(225, 29);
			this->label2->TabIndex = 50;
			this->label2->Text = L"Безналичная оплата:";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(41, 204);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 29);
			this->label1->TabIndex = 49;
			this->label1->Text = L"Сумма:";
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
			this->label4->Location = System::Drawing::Point(41, 156);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(326, 30);
			this->label4->TabIndex = 48;
			this->label4->Text = L"Заполните данные об оплате\r\n";
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
			this->pictureBox1->TabIndex = 47;
			this->pictureBox1->TabStop = false;
			// 
			// Oplata
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(800, 450);
			this->Controls->Add(this->oplata_posle);
			this->Controls->Add(this->Output);
			this->Controls->Add(this->Back);
			this->Controls->Add(this->zavershit_zakaz);
			this->Controls->Add(this->label_summa);
			this->Controls->Add(this->beznal_oplata);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Oplata";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Оплата";
			this->Load += gcnew System::EventHandler(this, &Oplata::Oplata_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Back_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void zavershit_zakaz_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void oplata_posle_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Output_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Oplata_Load(System::Object^ sender, System::EventArgs^ e);
};
}
