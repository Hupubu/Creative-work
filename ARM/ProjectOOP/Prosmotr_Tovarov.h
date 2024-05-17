#pragma once

namespace ProjectOOP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Prosmotr_Tovarov : public System::Windows::Forms::Form
	{
	public:
		Prosmotr_Tovarov(void)
		{
			InitializeComponent();
		}

	protected:
		~Prosmotr_Tovarov()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox_categoriya;
	private: System::Windows::Forms::DataGridView^ dataGridView_menu;
	protected:


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Prosmotr_Tovarov::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox_categoriya = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView_menu = (gcnew System::Windows::Forms::DataGridView());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Back = (gcnew System::Windows::Forms::Button());
			this->Output = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_menu))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 156);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(286, 26);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Выберите категорию товаров:";
			// 
			// comboBox_categoriya
			// 
			this->comboBox_categoriya->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox_categoriya->FormattingEnabled = true;
			this->comboBox_categoriya->Location = System::Drawing::Point(304, 148);
			this->comboBox_categoriya->Name = L"comboBox_categoriya";
			this->comboBox_categoriya->Size = System::Drawing::Size(227, 34);
			this->comboBox_categoriya->TabIndex = 23;
			this->comboBox_categoriya->TextChanged += gcnew System::EventHandler(this, &Prosmotr_Tovarov::comboBox_categoriya_TextChanged);
			// 
			// dataGridView_menu
			// 
			this->dataGridView_menu->AllowUserToAddRows = false;
			this->dataGridView_menu->AllowUserToDeleteRows = false;
			this->dataGridView_menu->AllowUserToResizeColumns = false;
			this->dataGridView_menu->AllowUserToResizeRows = false;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::Black;
			this->dataGridView_menu->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView_menu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView_menu->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView_menu->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView_menu->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView_menu->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::InfoText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView_menu->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView_menu->ColumnHeadersHeight = 40;
			this->dataGridView_menu->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column2,
					this->Column4, this->Column5, this->Column6
			});
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView_menu->DefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridView_menu->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridView_menu->Location = System::Drawing::Point(12, 185);
			this->dataGridView_menu->Name = L"dataGridView_menu";
			this->dataGridView_menu->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView_menu->RowHeadersDefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView_menu->RowHeadersVisible = false;
			this->dataGridView_menu->Size = System::Drawing::Size(776, 194);
			this->dataGridView_menu->TabIndex = 22;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column2->HeaderText = L"Название блюда";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Калорийность, ккал";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Вес, г";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Цена, руб";
			this->Column6->Name = L"Column6";
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
			this->pictureBox1->TabIndex = 21;
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
			this->Back->TabIndex = 20;
			this->Back->Text = L"Назад";
			this->Back->UseVisualStyleBackColor = false;
			this->Back->Click += gcnew System::EventHandler(this, &Prosmotr_Tovarov::Back_Click);
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
			this->Output->TabIndex = 19;
			this->Output->Text = L"Выход";
			this->Output->UseVisualStyleBackColor = false;
			this->Output->Click += gcnew System::EventHandler(this, &Prosmotr_Tovarov::Output_Click);
			// 
			// Prosmotr_Tovarov
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(800, 450);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox_categoriya);
			this->Controls->Add(this->dataGridView_menu);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Back);
			this->Controls->Add(this->Output);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Prosmotr_Tovarov";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Просмотр товаров";
			this->Load += gcnew System::EventHandler(this, &Prosmotr_Tovarov::Prosmotr_Tovarov_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_menu))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Prosmotr_Tovarov_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Output_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Back_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void comboBox_categoriya_TextChanged(System::Object^ sender, System::EventArgs^ e);
};
}
