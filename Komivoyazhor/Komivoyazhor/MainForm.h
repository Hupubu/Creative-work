#pragma once
#include <string>

namespace Komivoyazhor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	
	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_uzel;
	protected:




	protected:

	protected:






	private: System::Windows::Forms::Panel^ panel_uzlov;

	private: System::Windows::Forms::RadioButton^ rb_addUzel;
	private: System::Windows::Forms::Panel^ panel_menu;

	private: System::Windows::Forms::RadioButton^ rb_deleteUzel;
	private: System::Windows::Forms::RadioButton^ btn_RedactVesRebro;
	private: System::Windows::Forms::RadioButton^ rb_offRebro;
	private: System::Windows::Forms::RadioButton^ rb_deleteRebro;
	private: System::Windows::Forms::RadioButton^ rb_addRebro;
	private: System::Windows::Forms::Label^ label_rebra;
	private: System::Windows::Forms::TextBox^ tb_vecRebra;

	private: System::Windows::Forms::Label^ label_DlinaPuti;
	private: System::Windows::Forms::Label^ label_resultatKomiLendth;

	private: System::Windows::Forms::Button^ btn_output_resultKomi;





	private: System::Windows::Forms::Panel^ panel_dialogWithPilzovatel;

	private: System::Windows::Forms::Button^ btn_input;
	private: System::Windows::Forms::TextBox^ TB_input;


	public: System::Windows::Forms::TextBox^ textBox_console;
	private: System::Windows::Forms::TextBox^ tb_nameUzla;


	private: System::Windows::Forms::Button^ btnGraf;
	private: System::Windows::Forms::Button^ btnRebro;
	private: System::Windows::Forms::Label^ label_instruct;
	private: System::Windows::Forms::Label^ label_resultatKomiWay;

































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
			this->label_uzel = (gcnew System::Windows::Forms::Label());
			this->panel_uzlov = (gcnew System::Windows::Forms::Panel());
			this->rb_addUzel = (gcnew System::Windows::Forms::RadioButton());
			this->panel_menu = (gcnew System::Windows::Forms::Panel());
			this->tb_nameUzla = (gcnew System::Windows::Forms::TextBox());
			this->tb_vecRebra = (gcnew System::Windows::Forms::TextBox());
			this->btn_RedactVesRebro = (gcnew System::Windows::Forms::RadioButton());
			this->rb_offRebro = (gcnew System::Windows::Forms::RadioButton());
			this->rb_deleteRebro = (gcnew System::Windows::Forms::RadioButton());
			this->rb_addRebro = (gcnew System::Windows::Forms::RadioButton());
			this->label_rebra = (gcnew System::Windows::Forms::Label());
			this->rb_deleteUzel = (gcnew System::Windows::Forms::RadioButton());
			this->label_DlinaPuti = (gcnew System::Windows::Forms::Label());
			this->label_resultatKomiLendth = (gcnew System::Windows::Forms::Label());
			this->btn_output_resultKomi = (gcnew System::Windows::Forms::Button());
			this->panel_dialogWithPilzovatel = (gcnew System::Windows::Forms::Panel());
			this->label_instruct = (gcnew System::Windows::Forms::Label());
			this->textBox_console = (gcnew System::Windows::Forms::TextBox());
			this->btn_input = (gcnew System::Windows::Forms::Button());
			this->TB_input = (gcnew System::Windows::Forms::TextBox());
			this->label_resultatKomiWay = (gcnew System::Windows::Forms::Label());
			this->panel_menu->SuspendLayout();
			this->panel_dialogWithPilzovatel->SuspendLayout();
			this->SuspendLayout();
			// 
			// label_uzel
			// 
			this->label_uzel->AutoSize = true;
			this->label_uzel->Font = (gcnew System::Drawing::Font(L"Arial Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_uzel->Location = System::Drawing::Point(3, 1);
			this->label_uzel->Name = L"label_uzel";
			this->label_uzel->Size = System::Drawing::Size(220, 27);
			this->label_uzel->TabIndex = 5;
			this->label_uzel->Text = L"Действия с узлами";
			// 
			// panel_uzlov
			// 
			this->panel_uzlov->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel_uzlov->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel_uzlov->Location = System::Drawing::Point(299, 14);
			this->panel_uzlov->Name = L"panel_uzlov";
			this->panel_uzlov->Size = System::Drawing::Size(714, 673);
			this->panel_uzlov->TabIndex = 7;
			this->panel_uzlov->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel_uzlov_Paint);
			this->panel_uzlov->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::panel_uzlov_MouseClick);
			// 
			// rb_addUzel
			// 
			this->rb_addUzel->AutoSize = true;
			this->rb_addUzel->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->rb_addUzel->Location = System::Drawing::Point(25, 41);
			this->rb_addUzel->Name = L"rb_addUzel";
			this->rb_addUzel->Size = System::Drawing::Size(105, 23);
			this->rb_addUzel->TabIndex = 9;
			this->rb_addUzel->Text = L"Добавить";
			this->rb_addUzel->UseVisualStyleBackColor = true;
			// 
			// panel_menu
			// 
			this->panel_menu->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel_menu->Controls->Add(this->tb_nameUzla);
			this->panel_menu->Controls->Add(this->tb_vecRebra);
			this->panel_menu->Controls->Add(this->btn_RedactVesRebro);
			this->panel_menu->Controls->Add(this->rb_offRebro);
			this->panel_menu->Controls->Add(this->rb_deleteRebro);
			this->panel_menu->Controls->Add(this->rb_addRebro);
			this->panel_menu->Controls->Add(this->label_rebra);
			this->panel_menu->Controls->Add(this->rb_deleteUzel);
			this->panel_menu->Controls->Add(this->rb_addUzel);
			this->panel_menu->Controls->Add(this->label_uzel);
			this->panel_menu->Location = System::Drawing::Point(12, 12);
			this->panel_menu->Name = L"panel_menu";
			this->panel_menu->Size = System::Drawing::Size(257, 384);
			this->panel_menu->TabIndex = 10;
			// 
			// tb_nameUzla
			// 
			this->tb_nameUzla->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->tb_nameUzla->ForeColor = System::Drawing::Color::DarkGray;
			this->tb_nameUzla->Location = System::Drawing::Point(25, 99);
			this->tb_nameUzla->Name = L"tb_nameUzla";
			this->tb_nameUzla->Size = System::Drawing::Size(181, 26);
			this->tb_nameUzla->TabIndex = 19;
			this->tb_nameUzla->Text = L"Введите название узла";
			this->tb_nameUzla->Enter += gcnew System::EventHandler(this, &MainForm::tb_nameUzla_Enter);
			this->tb_nameUzla->Leave += gcnew System::EventHandler(this, &MainForm::tb_nameUzla_Leave);
			// 
			// tb_vecRebra
			// 
			this->tb_vecRebra->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->tb_vecRebra->ForeColor = System::Drawing::Color::DarkGray;
			this->tb_vecRebra->Location = System::Drawing::Point(25, 296);
			this->tb_vecRebra->Name = L"tb_vecRebra";
			this->tb_vecRebra->Size = System::Drawing::Size(181, 26);
			this->tb_vecRebra->TabIndex = 18;
			this->tb_vecRebra->Text = L"Введите вес ребра";
			this->tb_vecRebra->Enter += gcnew System::EventHandler(this, &MainForm::tb_vecRebra_Enter);
			this->tb_vecRebra->Leave += gcnew System::EventHandler(this, &MainForm::tb_vecRebra_Leave);
			// 
			// btn_RedactVesRebro
			// 
			this->btn_RedactVesRebro->AutoSize = true;
			this->btn_RedactVesRebro->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->btn_RedactVesRebro->Location = System::Drawing::Point(25, 267);
			this->btn_RedactVesRebro->Name = L"btn_RedactVesRebro";
			this->btn_RedactVesRebro->Size = System::Drawing::Size(181, 23);
			this->btn_RedactVesRebro->TabIndex = 17;
			this->btn_RedactVesRebro->Text = L"Редактировать вес";
			this->btn_RedactVesRebro->UseVisualStyleBackColor = true;
			// 
			// rb_offRebro
			// 
			this->rb_offRebro->AutoSize = true;
			this->rb_offRebro->Checked = true;
			this->rb_offRebro->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->rb_offRebro->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->rb_offRebro->Location = System::Drawing::Point(25, 341);
			this->rb_offRebro->Name = L"rb_offRebro";
			this->rb_offRebro->Size = System::Drawing::Size(147, 23);
			this->rb_offRebro->TabIndex = 16;
			this->rb_offRebro->TabStop = true;
			this->rb_offRebro->Text = L"Отключить все";
			this->rb_offRebro->UseVisualStyleBackColor = true;
			// 
			// rb_deleteRebro
			// 
			this->rb_deleteRebro->AutoSize = true;
			this->rb_deleteRebro->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->rb_deleteRebro->Location = System::Drawing::Point(25, 238);
			this->rb_deleteRebro->Name = L"rb_deleteRebro";
			this->rb_deleteRebro->Size = System::Drawing::Size(93, 23);
			this->rb_deleteRebro->TabIndex = 15;
			this->rb_deleteRebro->Text = L"Удалить";
			this->rb_deleteRebro->UseVisualStyleBackColor = true;
			// 
			// rb_addRebro
			// 
			this->rb_addRebro->AutoSize = true;
			this->rb_addRebro->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->rb_addRebro->Location = System::Drawing::Point(25, 209);
			this->rb_addRebro->Name = L"rb_addRebro";
			this->rb_addRebro->Size = System::Drawing::Size(105, 23);
			this->rb_addRebro->TabIndex = 14;
			this->rb_addRebro->Text = L"Добавить";
			this->rb_addRebro->UseVisualStyleBackColor = true;
			this->rb_addRebro->CheckedChanged += gcnew System::EventHandler(this, &MainForm::rb_addRebro_CheckedChanged);
			// 
			// label_rebra
			// 
			this->label_rebra->AutoSize = true;
			this->label_rebra->Font = (gcnew System::Drawing::Font(L"Arial Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_rebra->Location = System::Drawing::Point(3, 168);
			this->label_rebra->Name = L"label_rebra";
			this->label_rebra->Size = System::Drawing::Size(233, 27);
			this->label_rebra->TabIndex = 13;
			this->label_rebra->Text = L"Действия с ребрами";
			// 
			// rb_deleteUzel
			// 
			this->rb_deleteUzel->AutoSize = true;
			this->rb_deleteUzel->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->rb_deleteUzel->Location = System::Drawing::Point(25, 70);
			this->rb_deleteUzel->Name = L"rb_deleteUzel";
			this->rb_deleteUzel->Size = System::Drawing::Size(93, 23);
			this->rb_deleteUzel->TabIndex = 10;
			this->rb_deleteUzel->Text = L"Удалить";
			this->rb_deleteUzel->UseVisualStyleBackColor = true;
			// 
			// label_DlinaPuti
			// 
			this->label_DlinaPuti->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_DlinaPuti->Font = (gcnew System::Drawing::Font(L"Arial Black", 14.25F, System::Drawing::FontStyle::Bold));
			this->label_DlinaPuti->Location = System::Drawing::Point(12, 425);
			this->label_DlinaPuti->Name = L"label_DlinaPuti";
			this->label_DlinaPuti->Size = System::Drawing::Size(257, 206);
			this->label_DlinaPuti->TabIndex = 12;
			this->label_DlinaPuti->Text = L"Решение задачи Коммивояжёра:";
			// 
			// label_resultatKomiLendth
			// 
			this->label_resultatKomiLendth->AutoSize = true;
			this->label_resultatKomiLendth->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_resultatKomiLendth->Location = System::Drawing::Point(17, 489);
			this->label_resultatKomiLendth->Name = L"label_resultatKomiLendth";
			this->label_resultatKomiLendth->Size = System::Drawing::Size(82, 22);
			this->label_resultatKomiLendth->TabIndex = 0;
			this->label_resultatKomiLendth->Text = L"Длина: ";
			// 
			// btn_output_resultKomi
			// 
			this->btn_output_resultKomi->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_output_resultKomi->Location = System::Drawing::Point(12, 637);
			this->btn_output_resultKomi->Name = L"btn_output_resultKomi";
			this->btn_output_resultKomi->Size = System::Drawing::Size(257, 47);
			this->btn_output_resultKomi->TabIndex = 15;
			this->btn_output_resultKomi->Text = L"Получить результат";
			this->btn_output_resultKomi->UseVisualStyleBackColor = true;
			this->btn_output_resultKomi->Click += gcnew System::EventHandler(this, &MainForm::btn_output_resultKomi_Click);
			// 
			// panel_dialogWithPilzovatel
			// 
			this->panel_dialogWithPilzovatel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel_dialogWithPilzovatel->Controls->Add(this->label_instruct);
			this->panel_dialogWithPilzovatel->Controls->Add(this->textBox_console);
			this->panel_dialogWithPilzovatel->Controls->Add(this->btn_input);
			this->panel_dialogWithPilzovatel->Controls->Add(this->TB_input);
			this->panel_dialogWithPilzovatel->Location = System::Drawing::Point(1016, 14);
			this->panel_dialogWithPilzovatel->Name = L"panel_dialogWithPilzovatel";
			this->panel_dialogWithPilzovatel->Size = System::Drawing::Size(338, 673);
			this->panel_dialogWithPilzovatel->TabIndex = 16;
			// 
			// label_instruct
			// 
			this->label_instruct->Font = (gcnew System::Drawing::Font(L"Arial", 12));
			this->label_instruct->Location = System::Drawing::Point(3, 0);
			this->label_instruct->Name = L"label_instruct";
			this->label_instruct->Size = System::Drawing::Size(328, 111);
			this->label_instruct->TabIndex = 18;
			this->label_instruct->Text = L"ИНСТРУКЦИЯ:\r\n1) Обход в глубину - 1, стартовая вершина;\r\n2) Обход в ширину - 2, с"
				L"тартовая вершина;\r\n3) Алгоритм дейкстры - 3, стартовая вершина;\r\n4) Матрица смеж"
				L"ности - 4.";
			// 
			// textBox_console
			// 
			this->textBox_console->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_console->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox_console->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_console->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_console->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox_console->Location = System::Drawing::Point(3, 116);
			this->textBox_console->Multiline = true;
			this->textBox_console->Name = L"textBox_console";
			this->textBox_console->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox_console->Size = System::Drawing::Size(332, 451);
			this->textBox_console->TabIndex = 0;
			// 
			// btn_input
			// 
			this->btn_input->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btn_input->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_input->Location = System::Drawing::Point(3, 623);
			this->btn_input->Name = L"btn_input";
			this->btn_input->Size = System::Drawing::Size(332, 47);
			this->btn_input->TabIndex = 17;
			this->btn_input->Text = L"Ввод";
			this->btn_input->UseVisualStyleBackColor = true;
			this->btn_input->Click += gcnew System::EventHandler(this, &MainForm::btn_input_Click);
			// 
			// TB_input
			// 
			this->TB_input->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->TB_input->BackColor = System::Drawing::SystemColors::Window;
			this->TB_input->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_input->Font = (gcnew System::Drawing::Font(L"Arial", 12));
			this->TB_input->Location = System::Drawing::Point(3, 573);
			this->TB_input->Multiline = true;
			this->TB_input->Name = L"TB_input";
			this->TB_input->Size = System::Drawing::Size(332, 44);
			this->TB_input->TabIndex = 16;
			// 
			// label_resultatKomiWay
			// 
			this->label_resultatKomiWay->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_resultatKomiWay->Location = System::Drawing::Point(17, 526);
			this->label_resultatKomiWay->Name = L"label_resultatKomiWay";
			this->label_resultatKomiWay->Size = System::Drawing::Size(242, 92);
			this->label_resultatKomiWay->TabIndex = 17;
			this->label_resultatKomiWay->Text = L"Путь: ";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1359, 730);
			this->Controls->Add(this->label_resultatKomiWay);
			this->Controls->Add(this->panel_dialogWithPilzovatel);
			this->Controls->Add(this->btn_output_resultKomi);
			this->Controls->Add(this->label_resultatKomiLendth);
			this->Controls->Add(this->label_DlinaPuti);
			this->Controls->Add(this->panel_menu);
			this->Controls->Add(this->panel_uzlov);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Графы";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panel_menu->ResumeLayout(false);
			this->panel_menu->PerformLayout();
			this->panel_dialogWithPilzovatel->ResumeLayout(false);
			this->panel_dialogWithPilzovatel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void Komivoyazhor::MainForm::panel_uzlov_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void Komivoyazhor::MainForm::panel_uzlov_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
	public: System::Void Komivoyazhor::MainForm::btnUzel_MouseClick(System::Object^ sender, System::EventArgs^ e);
	private: System::Void tb_vecRebra_Enter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void tb_vecRebra_Leave(System::Object^ sender, System::EventArgs^ e);
	public: System::Void Komivoyazhor::MainForm::btnRebro_MouseClick(System::Object^ sender, System::EventArgs^ e);
	private: System::Void rb_addRebro_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Komivoyazhor::MainForm::DeleteUzel(int NameUzel);
	private: System::Void Komivoyazhor::MainForm::DeleteRebro(int NameUzel1, int NameUzel2);
	private: System::Void tb_nameUzla_Leave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void tb_nameUzla_Enter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Komivoyazhor::MainForm::AddUzel(int NameUzel, int x, int y);
	private: System::Void Komivoyazhor::MainForm::AddRebro(int NameUzel1, int NameUzel2, int vecRebra);
	private: System::Void Komivoyazhor::MainForm::DFS(int startUzel);
	private: System::Void Komivoyazhor::MainForm::BFS(int startUzel);
	private: System::Void Komivoyazhor::MainForm::Dijkstra(int startUzel);
	private: System::Void btn_output_resultKomi_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_input_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Komivoyazhor::MainForm::Komivoyazhor();
};
}
