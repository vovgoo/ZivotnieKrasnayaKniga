#pragma once

namespace ZivotnieRB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Spravka
	/// </summary>
	public ref class Spravka : public System::Windows::Forms::Form
	{
	public:
		bool darkTheme = 0;
		Spravka(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		Spravka(bool darkTheme)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//

			this->darkTheme = darkTheme;

			if (darkTheme) {
				this->BackColor = Color::Black;
				label1->ForeColor = Color::White;
				label2->ForeColor = Color::White;
				label3->ForeColor = Color::White;
				label4->ForeColor = Color::White;
				label5->ForeColor = Color::White;
				panel19->BackColor = Color::FromArgb(103, 103, 103);
				panel19->BackgroundImage = Image::FromFile("Images/ui_images/subject_back_gray.png");
				panel20->BackgroundImage = Image::FromFile("Images/icons/exit_white.png");
			}
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Spravka()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel19;
	protected:
	private: System::Windows::Forms::Panel^ panel20;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Spravka::typeid));
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel19->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->panel19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel19.BackgroundImage")));
			this->panel19->Controls->Add(this->panel20);
			this->panel19->Controls->Add(this->label3);
			this->panel19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel19->Location = System::Drawing::Point(510, 529);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(160, 57);
			this->panel19->TabIndex = 3;
			this->panel19->Click += gcnew System::EventHandler(this, &Spravka::panel19_Click);
			this->panel19->MouseLeave += gcnew System::EventHandler(this, &Spravka::panel19_MouseLeave);
			this->panel19->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Spravka::panel19_MouseMove);
			// 
			// panel20
			// 
			this->panel20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel20.BackgroundImage")));
			this->panel20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel20->Location = System::Drawing::Point(21, 19);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(20, 20);
			this->panel20->TabIndex = 1;
			this->panel20->Click += gcnew System::EventHandler(this, &Spravka::panel19_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 10, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(67, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Закрыть";
			this->label3->Click += gcnew System::EventHandler(this, &Spravka::panel19_Click);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(226, 50);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(751, 60);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Справочник “Животные Красной книги\nРеспублики беларусь”  ";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 11, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(453, 471);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(274, 18);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Версия: 1.0.0";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 11, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(453, 427);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(274, 18);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Подготовила: Коваленко Мария";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 11, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(660, 157);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(441, 224);
			this->label2->TabIndex = 7;
			this->label2->Text = resources->GetString(L"label2.Text");
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Location = System::Drawing::Point(114, 157);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(441, 224);
			this->panel1->TabIndex = 8;
			// 
			// Spravka
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1180, 623);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->panel19);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Spravka";
			this->Text = L"Справка";
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	// Выход

	private: System::Void panel19_Click(System::Object^ sender, System::EventArgs^ e);
	
	// Анимация 

	private: System::Void panel19_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void panel19_MouseLeave(System::Object^ sender, System::EventArgs^ e);
};
}
