#pragma once

namespace ProjectOOP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Proverka_zakaza
	/// </summary>
	public ref class Proverka_zakaza : public System::Windows::Forms::Form
	{
	public:
		Proverka_zakaza(void)
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
		~Proverka_zakaza()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ gotovo;
	private: System::Windows::Forms::Label^ nonSelection;
	private: System::Windows::Forms::DataGridView^ DGV_zakazy;


	protected:


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::Button^ Udalit;
	private: System::Windows::Forms::Button^ Dobavit;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ Back;
	private: System::Windows::Forms::Button^ Output;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Proverka_zakaza::typeid));
			this->gotovo = (gcnew System::Windows::Forms::Button());
			this->nonSelection = (gcnew System::Windows::Forms::Label());
			this->DGV_zakazy = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Udalit = (gcnew System::Windows::Forms::Button());
			this->Dobavit = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Back = (gcnew System::Windows::Forms::Button());
			this->Output = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_zakazy))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// gotovo
			// 
			this->gotovo->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->gotovo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)));
			this->gotovo->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24));
			this->gotovo->Location = System::Drawing::Point(493, 385);
			this->gotovo->Name = L"gotovo";
			this->gotovo->Size = System::Drawing::Size(158, 53);
			this->gotovo->TabIndex = 56;
			this->gotovo->Text = L"Готово";
			this->gotovo->UseVisualStyleBackColor = false;
			this->gotovo->Click += gcnew System::EventHandler(this, &Proverka_zakaza::gotovo_Click);
			// 
			// nonSelection
			// 
			this->nonSelection->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->nonSelection->AutoSize = true;
			this->nonSelection->Cursor = System::Windows::Forms::Cursors::Hand;
			this->nonSelection->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nonSelection->Location = System::Drawing::Point(647, 115);
			this->nonSelection->Name = L"nonSelection";
			this->nonSelection->Size = System::Drawing::Size(141, 23);
			this->nonSelection->TabIndex = 55;
			this->nonSelection->Text = L"Снять выделение";
			this->nonSelection->Click += gcnew System::EventHandler(this, &Proverka_zakaza::nonSelection_Click);
			// 
			// DGV_zakazy
			// 
			this->DGV_zakazy->AllowUserToAddRows = false;
			this->DGV_zakazy->AllowUserToDeleteRows = false;
			this->DGV_zakazy->AllowUserToResizeColumns = false;
			this->DGV_zakazy->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Black;
			this->DGV_zakazy->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->DGV_zakazy->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->DGV_zakazy->BackgroundColor = System::Drawing::Color::White;
			this->DGV_zakazy->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGV_zakazy->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->DGV_zakazy->ColumnHeadersHeight = 40;
			this->DGV_zakazy->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->Column1, this->Column2 });
			this->DGV_zakazy->Cursor = System::Windows::Forms::Cursors::Default;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DGV_zakazy->DefaultCellStyle = dataGridViewCellStyle3;
			this->DGV_zakazy->EnableHeadersVisualStyles = false;
			this->DGV_zakazy->GridColor = System::Drawing::SystemColors::Control;
			this->DGV_zakazy->Location = System::Drawing::Point(13, 142);
			this->DGV_zakazy->Name = L"DGV_zakazy";
			this->DGV_zakazy->ReadOnly = true;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGV_zakazy->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->DGV_zakazy->RowTemplate->Height = 40;
			this->DGV_zakazy->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DGV_zakazy->Size = System::Drawing::Size(775, 222);
			this->DGV_zakazy->TabIndex = 54;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column1->HeaderText = L"Название";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column2->HeaderText = L"Количество";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// Udalit
			// 
			this->Udalit->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Udalit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)));
			this->Udalit->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24));
			this->Udalit->Location = System::Drawing::Point(329, 385);
			this->Udalit->Name = L"Udalit";
			this->Udalit->Size = System::Drawing::Size(158, 53);
			this->Udalit->TabIndex = 53;
			this->Udalit->Text = L"Удалить";
			this->Udalit->UseVisualStyleBackColor = false;
			this->Udalit->Click += gcnew System::EventHandler(this, &Proverka_zakaza::Udalit_Click);
			// 
			// Dobavit
			// 
			this->Dobavit->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Dobavit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)));
			this->Dobavit->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24));
			this->Dobavit->Location = System::Drawing::Point(150, 385);
			this->Dobavit->Name = L"Dobavit";
			this->Dobavit->Size = System::Drawing::Size(177, 53);
			this->Dobavit->TabIndex = 52;
			this->Dobavit->Text = L"Добавить";
			this->Dobavit->UseVisualStyleBackColor = false;
			this->Dobavit->Click += gcnew System::EventHandler(this, &Proverka_zakaza::Dobavit_Click);
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
			// Back
			// 
			this->Back->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->Back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->Back->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24));
			this->Back->Location = System::Drawing::Point(13, 385);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(131, 53);
			this->Back->TabIndex = 50;
			this->Back->Text = L"Назад";
			this->Back->UseVisualStyleBackColor = false;
			this->Back->Click += gcnew System::EventHandler(this, &Proverka_zakaza::Back_Click);
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
			this->Output->TabIndex = 49;
			this->Output->Text = L"Выход";
			this->Output->UseVisualStyleBackColor = false;
			this->Output->Click += gcnew System::EventHandler(this, &Proverka_zakaza::Output_Click);
			// 
			// Proverka_zakaza
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(800, 450);
			this->Controls->Add(this->gotovo);
			this->Controls->Add(this->nonSelection);
			this->Controls->Add(this->DGV_zakazy);
			this->Controls->Add(this->Udalit);
			this->Controls->Add(this->Dobavit);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Back);
			this->Controls->Add(this->Output);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Proverka_zakaza";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Проверка заказа";
			this->Load += gcnew System::EventHandler(this, &Proverka_zakaza::Proverka_zakaza_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_zakazy))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Back_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Dobavit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Udalit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void gotovo_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Output_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void nonSelection_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Proverka_zakaza_Load(System::Object^ sender, System::EventArgs^ e);
};
}
