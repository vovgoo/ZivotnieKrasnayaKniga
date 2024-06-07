#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

#include "SwitchToggle.h"
#include "DatabaseConnection.h"

namespace ZivotnieRB {

	/// <summary>
	/// Сводка для Item
	/// </summary>
	public ref class Item : public System::Windows::Forms::UserControl
	{
	private:
		Int32^ id;
		String^ name;
		String^ description;
		String^ category;
		Int32^ categoryZnach;
		Int32^ views;
		String^ picture;
		ImageToggle^ toggle;
		DatabaseConnection^ databaseConnection = DatabaseConnection::Instance;
	public:
		Item(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		Item(Int32^ id, String^ name, String^ description, String^ category, Int32^ categoryZnach, Int32^ views, String^ picture, ImageToggle^ toggle)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			this->id = id;
			this->name = name;
			this->description = description;
			this->category = category;
			this->categoryZnach = categoryZnach;
			this->views = views;
			this->picture = picture;
			this->toggle = toggle;

			initializeItem();
			ChangeTheme();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Item()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Item::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1080, 228);
			this->panel1->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->Controls->Add(this->label5);
			this->panel4->Location = System::Drawing::Point(888, 159);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(163, 50);
			this->panel4->TabIndex = 13;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 10, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(0, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(163, 50);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Подробнее";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Click += gcnew System::EventHandler(this, &Item::label5_Click);
			this->label5->MouseLeave += gcnew System::EventHandler(this, &Item::label5_MouseLeave);
			this->label5->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Item::label5_MouseMove);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 10, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(791, 174);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 20);
			this->label3->TabIndex = 12;
			this->label3->Text = L"9999999";
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Location = System::Drawing::Point(755, 174);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(30, 20);
			this->panel3->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 10, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(348, 169);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(257, 40);
			this->label1->TabIndex = 10;
			this->label1->Text = L"2 Категория национальной природоохранной значимости";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 11, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(348, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(703, 72);
			this->label2->TabIndex = 9;
			this->label2->Text = resources->GetString(L"label2.Text");
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(348, 19);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(703, 30);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Пиявка медицинская";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Location = System::Drawing::Point(29, 19);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(290, 190);
			this->panel2->TabIndex = 0;
			// 
			// Item
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(0, 0, 0, 25);
			this->Name = L"Item";
			this->Size = System::Drawing::Size(1080, 228);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	// Темная тема

	private: void Toggle_CheckedChanged_Item(Object^ sender, EventArgs^ e);

	private: void ChangeTheme();

	// Анимация кнопки

	private: System::Void label5_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void label5_MouseLeave(System::Object^ sender, System::EventArgs^ e);

	// Переход по таб контролу

	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e);

	// Инициализация пользовательского элемента управления

	private: void initializeItem();
};
}
