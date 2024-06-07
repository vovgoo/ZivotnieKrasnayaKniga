#pragma once
#include "Item.h"
#include "Spravka.h"
#include "SwitchToggle.h"
#include "DatabaseConnection.h"

namespace ZivotnieRB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private: ImageToggle^ toggle = gcnew ImageToggle();
	private: System::Windows::Forms::Timer^ timer = gcnew System::Windows::Forms::Timer();
	private: int selectedIndexLeftbar = 0;
	private: DatabaseConnection^ databaseConnection = DatabaseConnection::Instance;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Panel^ panel27;
	private: System::Windows::Forms::Panel^ panel26;
	private: System::Windows::Forms::Panel^ panel28;

	public:

		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//

			initializeProject();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::Panel^ panel20;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::Panel^ panel21;

	private: System::Windows::Forms::Panel^ panel22;
	private: System::Windows::Forms::Label^ label13;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Panel^ panel24;

	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel5;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel6;
	private: System::Windows::Forms::Panel^ panel25;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::Panel^ panel23;
	private: System::Windows::Forms::PictureBox^ pictureBox2;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel5 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel6 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel1->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel13->SuspendLayout();
			this->panel4->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->flowLayoutPanel3->SuspendLayout();
			this->panel22->SuspendLayout();
			this->panel17->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->panel19->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->panel11);
			this->panel1->Controls->Add(this->panel9);
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(100, 780);
			this->panel1->TabIndex = 0;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label10->Font = (gcnew System::Drawing::Font(L"Montserrat", 10, System::Drawing::FontStyle::Bold));
			this->label10->Location = System::Drawing::Point(5, 655);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(103, 20);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Темная тема";
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::White;
			this->panel11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel11.BackgroundImage")));
			this->panel11->Controls->Add(this->panel12);
			this->panel11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel11->Location = System::Drawing::Point(25, 419);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(50, 50);
			this->panel11->TabIndex = 2;
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::Transparent;
			this->panel12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel12.BackgroundImage")));
			this->panel12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel12->Location = System::Drawing::Point(0, 0);
			this->panel12->Margin = System::Windows::Forms::Padding(0);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(50, 50);
			this->panel12->TabIndex = 0;
			this->panel12->Click += gcnew System::EventHandler(this, &MyForm::panel12_Click);
			this->panel12->MouseLeave += gcnew System::EventHandler(this, &MyForm::panel6_MouseLeave);
			this->panel12->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel6_MouseMove);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::White;
			this->panel9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel9.BackgroundImage")));
			this->panel9->Controls->Add(this->panel10);
			this->panel9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel9->Location = System::Drawing::Point(25, 331);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(50, 50);
			this->panel9->TabIndex = 2;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::Transparent;
			this->panel10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel10.BackgroundImage")));
			this->panel10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel10->Location = System::Drawing::Point(0, 0);
			this->panel10->Margin = System::Windows::Forms::Padding(0);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(50, 50);
			this->panel10->TabIndex = 0;
			this->panel10->Click += gcnew System::EventHandler(this, &MyForm::panel10_Click);
			this->panel10->MouseLeave += gcnew System::EventHandler(this, &MyForm::panel6_MouseLeave);
			this->panel10->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel6_MouseMove);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::White;
			this->panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel7.BackgroundImage")));
			this->panel7->Controls->Add(this->panel8);
			this->panel7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel7->Location = System::Drawing::Point(25, 243);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(50, 50);
			this->panel7->TabIndex = 2;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Transparent;
			this->panel8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel8.BackgroundImage")));
			this->panel8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel8->Location = System::Drawing::Point(0, 0);
			this->panel8->Margin = System::Windows::Forms::Padding(0);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(50, 50);
			this->panel8->TabIndex = 0;
			this->panel8->Click += gcnew System::EventHandler(this, &MyForm::panel8_Click);
			this->panel8->MouseLeave += gcnew System::EventHandler(this, &MyForm::panel6_MouseLeave);
			this->panel8->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel6_MouseMove);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(107)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->Controls->Add(this->panel6);
			this->panel5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel5->Location = System::Drawing::Point(25, 155);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(50, 50);
			this->panel5->TabIndex = 1;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Transparent;
			this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel6->Location = System::Drawing::Point(0, 0);
			this->panel6->Margin = System::Windows::Forms::Padding(0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(50, 50);
			this->panel6->TabIndex = 0;
			this->panel6->Click += gcnew System::EventHandler(this, &MyForm::panel6_Click);
			this->panel6->MouseLeave += gcnew System::EventHandler(this, &MyForm::panel6_MouseLeave);
			this->panel6->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel6_MouseMove);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel3->Location = System::Drawing::Point(20, 20);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(60, 60);
			this->panel3->TabIndex = 0;
			this->panel3->Click += gcnew System::EventHandler(this, &MyForm::panel6_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->panel2->Controls->Add(this->panel15);
			this->panel2->Controls->Add(this->panel13);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(100, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1180, 100);
			this->panel2->TabIndex = 1;
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::White;
			this->panel15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel15.BackgroundImage")));
			this->panel15->Controls->Add(this->pictureBox2);
			this->panel15->Controls->Add(this->label1);
			this->panel15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel15->Location = System::Drawing::Point(926, 23);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(223, 57);
			this->panel15->TabIndex = 1;
			this->panel15->Click += gcnew System::EventHandler(this, &MyForm::panel15_Click);
			this->panel15->MouseLeave += gcnew System::EventHandler(this, &MyForm::panel15_MouseLeave);
			this->panel15->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel15_MouseMove);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(170, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(30, 30);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::panel15_Click);
			this->pictureBox2->MouseLeave += gcnew System::EventHandler(this, &MyForm::panel15_MouseLeave);
			this->pictureBox2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel15_MouseMove);
			// 
			// label1
			// 
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 10, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(22, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"О приложении";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::panel15_Click);
			this->label1->MouseLeave += gcnew System::EventHandler(this, &MyForm::panel15_MouseLeave);
			this->label1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel15_MouseMove);
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::White;
			this->panel13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel13.BackgroundImage")));
			this->panel13->Controls->Add(this->textBox1);
			this->panel13->Controls->Add(this->panel14);
			this->panel13->Location = System::Drawing::Point(46, 23);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(425, 57);
			this->panel13->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Montserrat", 10, System::Drawing::FontStyle::Bold));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)), static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->textBox1->Location = System::Drawing::Point(66, 20);
			this->textBox1->MaxLength = 40;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(335, 17);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"Название животного";
			this->textBox1->Enter += gcnew System::EventHandler(this, &MyForm::textBox1_Enter);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			this->textBox1->Leave += gcnew System::EventHandler(this, &MyForm::textBox1_Leave);
			// 
			// panel14
			// 
			this->panel14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel14.BackgroundImage")));
			this->panel14->Location = System::Drawing::Point(22, 19);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(20, 20);
			this->panel14->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->tabControl1);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel4->Location = System::Drawing::Point(100, 100);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1180, 680);
			this->panel4->TabIndex = 2;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Location = System::Drawing::Point(-7, -22);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1195, 712);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::White;
			this->tabPage1->Controls->Add(this->panel25);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->flowLayoutPanel1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1187, 686);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Главная страница";
			// 
			// panel25
			// 
			this->panel25->Location = System::Drawing::Point(1138, 6);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(23, 680);
			this->panel25->TabIndex = 4;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat", 11, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->label6->Location = System::Drawing::Point(222, 129);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(47, 21);
			this->label6->TabIndex = 3;
			this->label6->Text = L"17:22";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 11, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->label5->Location = System::Drawing::Point(50, 129);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(109, 21);
			this->label5->TabIndex = 2;
			this->label5->Text = L"2 июня 2024";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(50, 50);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(676, 54);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Добро пожаловать в справочник “Животные Красной книги\nРеспублики беларусь”  ";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Location = System::Drawing::Point(50, 171);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(1111, 519);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::White;
			this->tabPage2->Controls->Add(this->panel23);
			this->tabPage2->Controls->Add(this->flowLayoutPanel3);
			this->tabPage2->Controls->Add(this->panel17);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1187, 686);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"О животном";
			// 
			// panel23
			// 
			this->panel23->Location = System::Drawing::Point(957, -5);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(23, 695);
			this->panel23->TabIndex = 3;
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->AutoScroll = true;
			this->flowLayoutPanel3->Controls->Add(this->label11);
			this->flowLayoutPanel3->Controls->Add(this->panel21);
			this->flowLayoutPanel3->Controls->Add(this->label12);
			this->flowLayoutPanel3->Controls->Add(this->panel22);
			this->flowLayoutPanel3->Location = System::Drawing::Point(226, 0);
			this->flowLayoutPanel3->Margin = System::Windows::Forms::Padding(0);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Padding = System::Windows::Forms::Padding(0, 0, 10, 0);
			this->flowLayoutPanel3->Size = System::Drawing::Size(750, 683);
			this->flowLayoutPanel3->TabIndex = 2;
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(0, 0);
			this->label11->Margin = System::Windows::Forms::Padding(0);
			this->label11->Name = L"label11";
			this->label11->Padding = System::Windows::Forms::Padding(0, 40, 0, 40);
			this->label11->Size = System::Drawing::Size(725, 121);
			this->label11->TabIndex = 14;
			this->label11->Text = L"Пиявка медицинская";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel21
			// 
			this->panel21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel21.BackgroundImage")));
			this->panel21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel21->Location = System::Drawing::Point(0, 121);
			this->panel21->Margin = System::Windows::Forms::Padding(0);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(725, 425);
			this->panel21->TabIndex = 9;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Montserrat", 11, System::Drawing::FontStyle::Bold));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(0, 546);
			this->label12->Margin = System::Windows::Forms::Padding(0);
			this->label12->Name = L"label12";
			this->label12->Padding = System::Windows::Forms::Padding(10, 35, 0, 35);
			this->label12->Size = System::Drawing::Size(673, 112);
			this->label12->TabIndex = 13;
			this->label12->Text = L"Медицинская пиявка -  вид кольчатых червей из подкласса пиявок (Hirudinea), наибо"
				L"лее часто применяемый Паразит, питающийся кровью человека и\r\n";
			this->label12->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel22
			// 
			this->panel22->Controls->Add(this->panel24);
			this->panel22->Controls->Add(this->label13);
			this->panel22->Controls->Add(this->label14);
			this->panel22->Location = System::Drawing::Point(0, 658);
			this->panel22->Margin = System::Windows::Forms::Padding(0, 0, 0, 50);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(725, 63);
			this->panel22->TabIndex = 11;
			// 
			// panel24
			// 
			this->panel24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel24.BackgroundImage")));
			this->panel24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel24->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel24->Location = System::Drawing::Point(655, 0);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(30, 63);
			this->panel24->TabIndex = 16;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Dock = System::Windows::Forms::DockStyle::Right;
			this->label13->Font = (gcnew System::Drawing::Font(L"Montserrat", 10, System::Drawing::FontStyle::Bold));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->label13->Location = System::Drawing::Point(685, 0);
			this->label13->Name = L"label13";
			this->label13->Padding = System::Windows::Forms::Padding(5, 20, 5, 0);
			this->label13->Size = System::Drawing::Size(40, 40);
			this->label13->TabIndex = 15;
			this->label13->Text = L"123";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->Dock = System::Windows::Forms::DockStyle::Left;
			this->label14->Font = (gcnew System::Drawing::Font(L"Montserrat", 10, System::Drawing::FontStyle::Bold));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(0, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(261, 63);
			this->label14->TabIndex = 13;
			this->label14->Text = L"2 Категория национальной природоохранной значимости";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->panel17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel17.BackgroundImage")));
			this->panel17->Controls->Add(this->panel18);
			this->panel17->Controls->Add(this->label2);
			this->panel17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel17->Location = System::Drawing::Point(982, 36);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(160, 57);
			this->panel17->TabIndex = 1;
			this->panel17->Click += gcnew System::EventHandler(this, &MyForm::panel6_Click);
			this->panel17->MouseLeave += gcnew System::EventHandler(this, &MyForm::panel17_MouseLeave);
			this->panel17->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel17_MouseMove);
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::Transparent;
			this->panel18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel18.BackgroundImage")));
			this->panel18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel18->Location = System::Drawing::Point(107, 14);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(30, 30);
			this->panel18->TabIndex = 1;
			this->panel18->Click += gcnew System::EventHandler(this, &MyForm::panel6_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 10, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(20, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Назад";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::panel6_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::White;
			this->tabPage3->Controls->Add(this->panel28);
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Controls->Add(this->flowLayoutPanel2);
			this->tabPage3->Controls->Add(this->panel19);
			this->tabPage3->ForeColor = System::Drawing::Color::Black;
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1187, 686);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Поиск";
			// 
			// panel28
			// 
			this->panel28->Location = System::Drawing::Point(1138, 152);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(25, 538);
			this->panel28->TabIndex = 8;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Montserrat", 11, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->label7->Location = System::Drawing::Point(222, 129);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(47, 21);
			this->label7->TabIndex = 7;
			this->label7->Text = L"17:22";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Montserrat", 11, System::Drawing::FontStyle::Bold));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->label8->Location = System::Drawing::Point(50, 129);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(109, 21);
			this->label8->TabIndex = 6;
			this->label8->Text = L"2 июня 2024";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(50, 50);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(525, 54);
			this->label9->TabIndex = 5;
			this->label9->Text = L"Результаты поиска по запросу: Пиявка\r\nКоличество результатов по данному запросу: "
				L"1\r\n";
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->AutoScroll = true;
			this->flowLayoutPanel2->Location = System::Drawing::Point(50, 171);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(1111, 519);
			this->flowLayoutPanel2->TabIndex = 4;
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->panel19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel19.BackgroundImage")));
			this->panel19->Controls->Add(this->panel20);
			this->panel19->Controls->Add(this->label3);
			this->panel19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel19->Location = System::Drawing::Point(982, 36);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(160, 57);
			this->panel19->TabIndex = 2;
			this->panel19->Click += gcnew System::EventHandler(this, &MyForm::panel6_Click);
			this->panel19->MouseLeave += gcnew System::EventHandler(this, &MyForm::panel17_MouseLeave);
			this->panel19->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel17_MouseMove);
			// 
			// panel20
			// 
			this->panel20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel20.BackgroundImage")));
			this->panel20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel20->Location = System::Drawing::Point(107, 14);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(30, 30);
			this->panel20->TabIndex = 1;
			this->panel20->Click += gcnew System::EventHandler(this, &MyForm::panel6_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 10, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(20, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Назад";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::panel6_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::Color::White;
			this->tabPage4->Controls->Add(this->panel27);
			this->tabPage4->Controls->Add(this->label15);
			this->tabPage4->Controls->Add(this->label16);
			this->tabPage4->Controls->Add(this->label17);
			this->tabPage4->Controls->Add(this->flowLayoutPanel4);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1187, 686);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Животные";
			// 
			// panel27
			// 
			this->panel27->Location = System::Drawing::Point(1138, 6);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(23, 684);
			this->panel27->TabIndex = 8;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Montserrat", 11, System::Drawing::FontStyle::Bold));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->label15->Location = System::Drawing::Point(222, 129);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(47, 21);
			this->label15->TabIndex = 7;
			this->label15->Text = L"17:22";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Montserrat", 11, System::Drawing::FontStyle::Bold));
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->label16->Location = System::Drawing::Point(50, 129);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(109, 21);
			this->label16->TabIndex = 6;
			this->label16->Text = L"2 июня 2024";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(50, 50);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(544, 54);
			this->label17->TabIndex = 5;
			this->label17->Text = L"Животные Красной книги Республики беларусь\r\nКатегория: Животные";
			// 
			// flowLayoutPanel4
			// 
			this->flowLayoutPanel4->AutoScroll = true;
			this->flowLayoutPanel4->Location = System::Drawing::Point(50, 171);
			this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
			this->flowLayoutPanel4->Size = System::Drawing::Size(1111, 519);
			this->flowLayoutPanel4->TabIndex = 4;
			// 
			// tabPage5
			// 
			this->tabPage5->BackColor = System::Drawing::Color::White;
			this->tabPage5->Controls->Add(this->panel26);
			this->tabPage5->Controls->Add(this->label18);
			this->tabPage5->Controls->Add(this->label19);
			this->tabPage5->Controls->Add(this->label20);
			this->tabPage5->Controls->Add(this->flowLayoutPanel5);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(1187, 686);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Птицы";
			// 
			// panel26
			// 
			this->panel26->Location = System::Drawing::Point(1138, 6);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(23, 684);
			this->panel26->TabIndex = 8;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Montserrat", 11, System::Drawing::FontStyle::Bold));
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->label18->Location = System::Drawing::Point(222, 129);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(47, 21);
			this->label18->TabIndex = 7;
			this->label18->Text = L"17:22";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Montserrat", 11, System::Drawing::FontStyle::Bold));
			this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->label19->Location = System::Drawing::Point(50, 129);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(109, 21);
			this->label19->TabIndex = 6;
			this->label19->Text = L"2 июня 2024";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(50, 50);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(544, 54);
			this->label20->TabIndex = 5;
			this->label20->Text = L"Животные Красной книги Республики беларусь\r\nКатегория: Птицы";
			// 
			// flowLayoutPanel5
			// 
			this->flowLayoutPanel5->AutoScroll = true;
			this->flowLayoutPanel5->Location = System::Drawing::Point(50, 171);
			this->flowLayoutPanel5->Name = L"flowLayoutPanel5";
			this->flowLayoutPanel5->Size = System::Drawing::Size(1111, 512);
			this->flowLayoutPanel5->TabIndex = 4;
			// 
			// tabPage6
			// 
			this->tabPage6->BackColor = System::Drawing::Color::White;
			this->tabPage6->Controls->Add(this->panel16);
			this->tabPage6->Controls->Add(this->label21);
			this->tabPage6->Controls->Add(this->label22);
			this->tabPage6->Controls->Add(this->label23);
			this->tabPage6->Controls->Add(this->flowLayoutPanel6);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(1187, 686);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Рыбы";
			// 
			// panel16
			// 
			this->panel16->Location = System::Drawing::Point(1138, 6);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(23, 677);
			this->panel16->TabIndex = 8;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Montserrat", 11, System::Drawing::FontStyle::Bold));
			this->label21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->label21->Location = System::Drawing::Point(222, 129);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(47, 21);
			this->label21->TabIndex = 7;
			this->label21->Text = L"17:22";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Montserrat", 11, System::Drawing::FontStyle::Bold));
			this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->label22->Location = System::Drawing::Point(50, 129);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(109, 21);
			this->label22->TabIndex = 6;
			this->label22->Text = L"2 июня 2024";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(50, 50);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(544, 54);
			this->label23->TabIndex = 5;
			this->label23->Text = L"Животные Красной книги Республики беларусь\r\nКатегория: Рыбы\r\n";
			// 
			// flowLayoutPanel6
			// 
			this->flowLayoutPanel6->AutoScroll = true;
			this->flowLayoutPanel6->Location = System::Drawing::Point(50, 171);
			this->flowLayoutPanel6->Name = L"flowLayoutPanel6";
			this->flowLayoutPanel6->Size = System::Drawing::Size(1111, 512);
			this->flowLayoutPanel6->TabIndex = 4;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1280, 780);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Животные Красной книги Республики Беларусь";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel9->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel15->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->flowLayoutPanel3->ResumeLayout(false);
			this->flowLayoutPanel3->PerformLayout();
			this->panel22->ResumeLayout(false);
			this->panel22->PerformLayout();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion	

	// Темная тема

	private: void Toggle_CheckedChanged(Object^ sender, EventArgs^ e);

	private: void ChangeTheme(ImageToggle^ toggle);

	// Анимации кнопок

	private: System::Void panel15_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void panel15_MouseLeave(System::Object^ sender, System::EventArgs^ e);

	private: System::Void panel17_MouseLeave(System::Object^ sender, System::EventArgs^ e);

	private: System::Void panel17_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void panel6_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void panel6_MouseLeave(System::Object^ sender, System::EventArgs^ e);

	// Перенаправление по табконтролу

	private: System::Void panel6_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void panel8_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void panel10_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void panel12_Click(System::Object^ sender, System::EventArgs^ e);

	private: void ChangeTabControlIndex(Int32^ tabControlSelectedIndex, Int32^ selectedIndexLeftbar);

	// Справка

	private: System::Void panel15_Click(System::Object^ sender, System::EventArgs^ e);

	// Время

	private: void UpdateDateTimeLabel();

	private: void timer_Tick(Object^ sender, EventArgs^ e);

	// Поле поиска

	private: System::Void textBox1_Enter(System::Object^ sender, System::EventArgs^ e);

	private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e);

	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
	
	private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);

	// Боковое меню

	private: void changeLeftBarSelected();

	private: void clearLeftBarSelected();

	// База дынных

	private: void LoadAllData();

	private: void LoadSearchData(String^ searchParametr);

	private: void ClearAllData(FlowLayoutPanel^ panel);

	// Инициализация проекта

	private: void initializeProject();
};
}
