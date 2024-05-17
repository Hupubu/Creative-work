#pragma once

namespace ProjectOOP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Redactor_tovarov
	/// </summary>
	public ref class Redactor_tovarov : public System::Windows::Forms::Form
	{
	public:
		Redactor_tovarov(void)
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
		~Redactor_tovarov()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ btn_obnovit;
	protected:

	private: System::Windows::Forms::Label^ btn_poisk;
	protected:

	private: System::Windows::Forms::TextBox^ poisk;
	private: System::Windows::Forms::Button^ Udalit;
	private: System::Windows::Forms::Button^ Dobavit;
	private: System::Windows::Forms::Label^ btn_snyatVideleniye;
	private: System::Windows::Forms::DataGridView^ DGV_tovary;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Redactor_tovarov::typeid));
			this->btn_obnovit = (gcnew System::Windows::Forms::Label());
			this->btn_poisk = (gcnew System::Windows::Forms::Label());
			this->poisk = (gcnew System::Windows::Forms::TextBox());
			this->Udalit = (gcnew System::Windows::Forms::Button());
			this->Dobavit = (gcnew System::Windows::Forms::Button());
			this->btn_snyatVideleniye = (gcnew System::Windows::Forms::Label());
			this->DGV_tovary = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Back = (gcnew System::Windows::Forms::Button());
			this->Output = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_tovary))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_obnovit
			// 
			this->btn_obnovit->AutoSize = true;
			this->btn_obnovit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_obnovit->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_obnovit->Location = System::Drawing::Point(524, 152);
			this->btn_obnovit->Name = L"btn_obnovit";
			this->btn_obnovit->Size = System::Drawing::Size(83, 23);
			this->btn_obnovit->TabIndex = 64;
			this->btn_obnovit->Text = L"Обновить";
			this->btn_obnovit->Click += gcnew System::EventHandler(this, &Redactor_tovarov::btn_obnovit_Click);
			// 
			// btn_poisk
			// 
			this->btn_poisk->AutoSize = true;
			this->btn_poisk->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_poisk->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_poisk->Location = System::Drawing::Point(460, 152);
			this->btn_poisk->Name = L"btn_poisk";
			this->btn_poisk->Size = System::Drawing::Size(58, 23);
			this->btn_poisk->TabIndex = 63;
			this->btn_poisk->Text = L"Найти";
			this->btn_poisk->Click += gcnew System::EventHandler(this, &Redactor_tovarov::btn_poisk_Click);
			// 
			// poisk
			// 
			this->poisk->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F));
			this->poisk->Location = System::Drawing::Point(12, 141);
			this->poisk->Name = L"poisk";
			this->poisk->Size = System::Drawing::Size(433, 34);
			this->poisk->TabIndex = 62;
			// 
			// Udalit
			// 
			this->Udalit->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Udalit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)));
			this->Udalit->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24));
			this->Udalit->Location = System::Drawing::Point(413, 385);
			this->Udalit->Name = L"Udalit";
			this->Udalit->Size = System::Drawing::Size(163, 53);
			this->Udalit->TabIndex = 61;
			this->Udalit->Text = L"Удалить";
			this->Udalit->UseVisualStyleBackColor = false;
			this->Udalit->Click += gcnew System::EventHandler(this, &Redactor_tovarov::Udalit_Click);
			// 
			// Dobavit
			// 
			this->Dobavit->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Dobavit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)));
			this->Dobavit->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24));
			this->Dobavit->Location = System::Drawing::Point(211, 385);
			this->Dobavit->Name = L"Dobavit";
			this->Dobavit->Size = System::Drawing::Size(173, 53);
			this->Dobavit->TabIndex = 60;
			this->Dobavit->Text = L"Добавить";
			this->Dobavit->UseVisualStyleBackColor = false;
			this->Dobavit->Click += gcnew System::EventHandler(this, &Redactor_tovarov::Dobavit_Click);
			// 
			// btn_snyatVideleniye
			// 
			this->btn_snyatVideleniye->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn_snyatVideleniye->AutoSize = true;
			this->btn_snyatVideleniye->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_snyatVideleniye->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_snyatVideleniye->Location = System::Drawing::Point(647, 152);
			this->btn_snyatVideleniye->Name = L"btn_snyatVideleniye";
			this->btn_snyatVideleniye->Size = System::Drawing::Size(141, 23);
			this->btn_snyatVideleniye->TabIndex = 59;
			this->btn_snyatVideleniye->Text = L"Снять выделение";
			this->btn_snyatVideleniye->Click += gcnew System::EventHandler(this, &Redactor_tovarov::btn_snyatVideleniye_Click);
			// 
			// DGV_tovary
			// 
			this->DGV_tovary->AllowUserToAddRows = false;
			this->DGV_tovary->AllowUserToDeleteRows = false;
			this->DGV_tovary->AllowUserToResizeColumns = false;
			this->DGV_tovary->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Black;
			this->DGV_tovary->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->DGV_tovary->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->DGV_tovary->BackgroundColor = System::Drawing::Color::White;
			this->DGV_tovary->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGV_tovary->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->DGV_tovary->ColumnHeadersHeight = 40;
			this->DGV_tovary->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1, this->Column3,
					this->Column2, this->Column4, this->Column5, this->Column6, this->Column7
			});
			this->DGV_tovary->Cursor = System::Windows::Forms::Cursors::Default;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DGV_tovary->DefaultCellStyle = dataGridViewCellStyle3;
			this->DGV_tovary->EnableHeadersVisualStyles = false;
			this->DGV_tovary->GridColor = System::Drawing::Color::White;
			this->DGV_tovary->Location = System::Drawing::Point(13, 181);
			this->DGV_tovary->Name = L"DGV_tovary";
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGV_tovary->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->DGV_tovary->RowTemplate->Height = 40;
			this->DGV_tovary->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DGV_tovary->Size = System::Drawing::Size(775, 198);
			this->DGV_tovary->TabIndex = 58;
			this->DGV_tovary->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Redactor_tovarov::DGV_tovary_CellValueChanged);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Код блюда";
			this->Column1->Name = L"Column1";
			this->Column1->Visible = false;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Код категории";
			this->Column3->Name = L"Column3";
			this->Column3->Visible = false;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column2->HeaderText = L"Название";
			this->Column2->Name = L"Column2";
			// 
			// Column4
			// 
			this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column4->HeaderText = L"Категория";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Ккал";
			this->Column5->Name = L"Column5";
			this->Column5->Width = 150;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Вес, г";
			this->Column6->Name = L"Column6";
			this->Column6->Width = 150;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Цена, руб";
			this->Column7->Name = L"Column7";
			this->Column7->Width = 150;
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
			this->Back->TabIndex = 57;
			this->Back->Text = L"Назад";
			this->Back->UseVisualStyleBackColor = false;
			this->Back->Click += gcnew System::EventHandler(this, &Redactor_tovarov::Back_Click);
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
			this->Output->TabIndex = 56;
			this->Output->Text = L"Выход";
			this->Output->UseVisualStyleBackColor = false;
			this->Output->Click += gcnew System::EventHandler(this, &Redactor_tovarov::Output_Click);
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
			this->pictureBox1->TabIndex = 55;
			this->pictureBox1->TabStop = false;
			// 
			// Redactor_tovarov
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(800, 450);
			this->Controls->Add(this->btn_obnovit);
			this->Controls->Add(this->btn_poisk);
			this->Controls->Add(this->poisk);
			this->Controls->Add(this->Udalit);
			this->Controls->Add(this->Dobavit);
			this->Controls->Add(this->btn_snyatVideleniye);
			this->Controls->Add(this->DGV_tovary);
			this->Controls->Add(this->Back);
			this->Controls->Add(this->Output);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Redactor_tovarov";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Редактор товаров";
			this->Load += gcnew System::EventHandler(this, &Redactor_tovarov::Redactor_tovarov_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_tovary))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ProjectOOP::Redactor_tovarov::load_bd();
	private: System::Void Redactor_tovarov_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_poisk_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_obnovit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_snyatVideleniye_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Back_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Dobavit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Udalit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Output_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void DGV_tovary_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
};
}
