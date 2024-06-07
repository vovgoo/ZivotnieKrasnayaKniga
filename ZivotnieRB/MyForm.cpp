#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

int main() {
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault;
	ZivotnieRB::MyForm form;
	Application::Run(% form);
}

// Темная тема

void ZivotnieRB::MyForm::Toggle_CheckedChanged(Object^ sender, EventArgs^ e)
{
	ImageToggle^ toggle = dynamic_cast<ImageToggle^>(sender);
	ChangeTheme(toggle);
	
}

void ZivotnieRB::MyForm::ChangeTheme(ImageToggle^ toggle)
{
	if (toggle != nullptr) {
		changeLeftBarSelected();

		if (toggle->Checked) {
			tabPage1->BackColor = Color::Black;
			tabPage2->BackColor = Color::Black;
			tabPage3->BackColor = Color::Black;
			tabPage4->BackColor = Color::Black;
			tabPage5->BackColor = Color::Black;
			tabPage6->BackColor = Color::Black;

			panel1->BackColor = Color::FromArgb(29, 29, 29);
			panel2->BackColor = Color::FromArgb(29, 29, 29);

			panel13->BackColor = Color::FromArgb(103, 103, 103);
			panel15->BackColor = Color::FromArgb(103, 103, 103);

			textBox1->BackColor = Color::FromArgb(103, 103, 103);
			textBox1->ForeColor = Color::White;

			panel13->BackgroundImage = Image::FromFile("Images/ui_images/subject_search_gray.png");
			panel15->BackgroundImage = Image::FromFile("Images/ui_images/subject_spravka_gray.png");
			panel14->BackgroundImage = Image::FromFile("Images/icons/search_white.png");
			pictureBox2->Image = Image::FromFile("Images/icons/spravka_white.png");

			panel17->BackgroundImage = Image::FromFile("Images/ui_images/subject_back_gray.png");
			panel19->BackgroundImage = Image::FromFile("Images/ui_images/subject_back_gray.png");

			panel17->BackColor = Color::FromArgb(103, 103, 103);
			panel19->BackColor = Color::FromArgb(103, 103, 103);

			panel18->BackgroundImage = Image::FromFile("Images/icons/back_white.png");
			panel20->BackgroundImage = Image::FromFile("Images/icons/back_white.png");

			panel24->BackgroundImage = Image::FromFile("Images/icons/views_white.png");

			label1->ForeColor = Color::White;
			label2->ForeColor = Color::White;
			label3->ForeColor = Color::White;
			label4->ForeColor = Color::White;
			label9->ForeColor = Color::White;
			label10->ForeColor = Color::White;
			label11->ForeColor = Color::White;
			label12->ForeColor = Color::White;
			label13->ForeColor = Color::White;
			label14->ForeColor = Color::White;
			label17->ForeColor = Color::White;
			label20->ForeColor = Color::White;
			label23->ForeColor = Color::White;
		}
		else {
			tabPage1->BackColor = Color::White;
			tabPage2->BackColor = Color::White;
			tabPage3->BackColor = Color::White;
			tabPage4->BackColor = Color::White;
			tabPage5->BackColor = Color::White;
			tabPage6->BackColor = Color::White;

			panel1->BackColor = Color::FromArgb(244, 244, 244);
			panel2->BackColor = Color::FromArgb(244, 244, 244);

			panel13->BackColor = Color::White;
			panel15->BackColor = Color::White;

			textBox1->BackColor = Color::White;
			textBox1->ForeColor = Color::FromArgb(184, 184, 184);

			panel13->BackgroundImage = Image::FromFile("Images/ui_images/subject_search.png");
			panel15->BackgroundImage = Image::FromFile("Images/ui_images/subject_spravka.png");
			panel14->BackgroundImage = Image::FromFile("Images/icons/search.png");
			pictureBox2->Image = Image::FromFile("Images/icons/spravka.png");

			panel17->BackgroundImage = Image::FromFile("Images/ui_images/subject_back.png");
			panel19->BackgroundImage = Image::FromFile("Images/ui_images/subject_back.png");

			panel17->BackColor = Color::FromArgb(244, 244, 244);
			panel19->BackColor = Color::FromArgb(244, 244, 244);

			panel18->BackgroundImage = Image::FromFile("Images/icons/back.png");
			panel20->BackgroundImage = Image::FromFile("Images/icons/back.png");

			panel24->BackgroundImage = Image::FromFile("Images/icons/views.png");

			label1->ForeColor = Color::Black;
			label2->ForeColor = Color::Black;
			label3->ForeColor = Color::Black;
			label4->ForeColor = Color::Black;
			label9->ForeColor = Color::Black;
			label10->ForeColor = Color::Black;
			label11->ForeColor = Color::Black;
			label12->ForeColor = Color::Black;
			label13->ForeColor = Color::Black;
			label14->ForeColor = Color::Black;
			label17->ForeColor = Color::Black;
			label20->ForeColor = Color::Black;
			label23->ForeColor = Color::Black;
		}
	}
}

// Анимации кнопок

System::Void ZivotnieRB::MyForm::panel15_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	Panel^ panel = dynamic_cast<Panel^>(sender);
	if (panel == nullptr) {
		panel = dynamic_cast<Panel^>(((Control^)sender)->Parent);
	}
	if (panel != nullptr) {
		if (toggle->Checked) {
			panel->BackColor = panel->ClientRectangle.Contains(panel->PointToClient(Control::MousePosition)) ? Color::FromArgb(140, 140, 140) : Color::FromArgb(103, 103, 103);
		}
		else {
			panel->BackColor = panel->ClientRectangle.Contains(panel->PointToClient(Control::MousePosition)) ? Color::FromArgb(200, 200, 200) : Color::White;
		}
	}
	return System::Void();
}

System::Void ZivotnieRB::MyForm::panel15_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	Panel^ panel = dynamic_cast<Panel^>(sender);
	if (panel != nullptr && !panel->ClientRectangle.Contains(panel->PointToClient(Control::MousePosition))) {
		toggle->Checked ? panel->BackColor = Color::FromArgb(103, 103, 103) : panel->BackColor = Color::White;
	}
	return System::Void();
}

System::Void ZivotnieRB::MyForm::panel17_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	Panel^ panel = dynamic_cast<Panel^>(sender);
	if (panel == nullptr) {
		panel = dynamic_cast<Panel^>(((Control^)sender)->Parent);
	}
	if (panel != nullptr) {
		if (toggle->Checked) {
			panel->BackColor = panel->ClientRectangle.Contains(panel->PointToClient(Control::MousePosition)) ? Color::FromArgb(140, 140, 140) : Color::FromArgb(103, 103, 103);
		}
		else {
			panel->BackColor = panel->ClientRectangle.Contains(panel->PointToClient(Control::MousePosition)) ? Color::FromArgb(200, 200, 200) : Color::FromArgb(244, 244, 244);
		}
	}
	return System::Void();
}

System::Void ZivotnieRB::MyForm::panel17_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	Panel^ panel = dynamic_cast<Panel^>(sender);
	if (panel != nullptr && !panel->ClientRectangle.Contains(panel->PointToClient(Control::MousePosition))) {
		toggle->Checked ? panel->BackColor = Color::FromArgb(103, 103, 103) : panel->BackColor = Color::FromArgb(244, 244, 244);
	}
	return System::Void();
}

System::Void ZivotnieRB::MyForm::panel6_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	Panel^ panel = dynamic_cast<Panel^>(((Control^)sender)->Parent);
	if (panel != nullptr) {
		if (toggle->Checked) {
			if (panel->BackColor != Color::FromArgb(237, 237, 237)) {
				panel->BackColor = Color::FromArgb(140, 140, 140);
			}
		}
		else {
			if (panel->BackColor != Color::FromArgb(103, 103, 103)) {
				panel->BackColor = Color::FromArgb(200, 200, 200);
			}
		}
	}
	return System::Void();
}

System::Void ZivotnieRB::MyForm::panel6_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	Panel^ panel = dynamic_cast<Panel^>(((Control^)sender)->Parent);
	if (panel != nullptr && !panel->ClientRectangle.Contains(panel->PointToClient(Control::MousePosition))) {
		if (toggle->Checked) {
			if (panel->BackColor != Color::FromArgb(237, 237, 237)) {
				panel->BackColor = Color::FromArgb(107, 107, 107);
			}
		}
		else {
			if (panel->BackColor != Color::FromArgb(103, 103, 103)) {
				panel->BackColor = Color::White;
			}
		}
	}
	return System::Void();
}

// Перенаправление по табконтролу

System::Void ZivotnieRB::MyForm::panel6_Click(System::Object^ sender, System::EventArgs^ e)
{
	ChangeTabControlIndex(0, 0);
	return System::Void();
}

System::Void ZivotnieRB::MyForm::panel8_Click(System::Object^ sender, System::EventArgs^ e)
{
	ChangeTabControlIndex(3, 1);
	return System::Void();
}

System::Void ZivotnieRB::MyForm::panel10_Click(System::Object^ sender, System::EventArgs^ e)
{
	ChangeTabControlIndex(4, 2);
	return System::Void();
}

System::Void ZivotnieRB::MyForm::panel12_Click(System::Object^ sender, System::EventArgs^ e)
{
	ChangeTabControlIndex(5, 3);
	return System::Void();
}

void ZivotnieRB::MyForm::ChangeTabControlIndex(Int32^ tabControlSelectedIndex, Int32^ selectedIndexLeftbar)
{
	tabControl1->SelectedIndex = *tabControlSelectedIndex;
	this->selectedIndexLeftbar = *selectedIndexLeftbar;
	changeLeftBarSelected();
}

// Справка

System::Void ZivotnieRB::MyForm::panel15_Click(System::Object^ sender, System::EventArgs^ e)
{
	Spravka^ spravka = gcnew Spravka(toggle->Checked);
	this->Hide();
	spravka->ShowDialog();
	this->Show();
	ChangeTheme(toggle);
	return System::Void();
}

// Время

void ZivotnieRB::MyForm::UpdateDateTimeLabel()
{
	DateTime now = DateTime::Now;
	label5->Text = now.ToString("d MMMM yyyy", gcnew System::Globalization::CultureInfo("ru-RU"));
	label6->Text = now.ToString("HH:mm");
	label8->Text = now.ToString("d MMMM yyyy", gcnew System::Globalization::CultureInfo("ru-RU"));
	label7->Text = now.ToString("HH:mm");
	label16->Text = now.ToString("d MMMM yyyy", gcnew System::Globalization::CultureInfo("ru-RU"));
	label15->Text = now.ToString("HH:mm");
	label19->Text = now.ToString("d MMMM yyyy", gcnew System::Globalization::CultureInfo("ru-RU"));
	label18->Text = now.ToString("HH:mm");
	label22->Text = now.ToString("d MMMM yyyy", gcnew System::Globalization::CultureInfo("ru-RU"));
	label21->Text = now.ToString("HH:mm");
}

void ZivotnieRB::MyForm::timer_Tick(Object^ sender, EventArgs^ e)
{
	UpdateDateTimeLabel();
}

// Поле поиска

System::Void ZivotnieRB::MyForm::textBox1_Enter(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox1->Text->Equals("Название животного")) { textBox1->Clear(); }
	return System::Void();
}

System::Void ZivotnieRB::MyForm::textBox1_Leave(System::Object^ sender, System::EventArgs^ e)
{
	if (String::IsNullOrWhiteSpace(textBox1->Text)) { textBox1->Clear(); }
	return System::Void();
}

System::Void ZivotnieRB::MyForm::textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	if (e->KeyChar == (char)Keys::Enter) {
		if (!String::IsNullOrWhiteSpace(textBox1->Text)) {
			ChangeTabControlIndex(2, -1);
			ClearAllData(flowLayoutPanel2);
			LoadSearchData(textBox1->Text);
			
			label9->Text = "Результаты поиска по запросу: " + textBox1->Text + "\nКоличество результатов по данному запросу: " + flowLayoutPanel2->Controls->Count;
			
			textBox1->Text = "Название животного";
			this->ActiveControl = nullptr;
		}
		else {
			MessageBox::Show("Для выполнение поиска необходимо заполнить поле.", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		e->Handled = true;
	}
	return System::Void();
}

System::Void ZivotnieRB::MyForm::tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (String::IsNullOrWhiteSpace(textBox1->Text)) { textBox1->Text = "Название животного"; }
	this->ActiveControl = nullptr;
	selectedIndexLeftbar = -1;
	ChangeTheme(toggle);
	return System::Void();
}



// Боковое меню	

void ZivotnieRB::MyForm::changeLeftBarSelected()
{
	if (String::IsNullOrWhiteSpace(textBox1->Text)) { textBox1->Text = "Название животного"; }
	this->ActiveControl = nullptr;

	clearLeftBarSelected();

	switch (selectedIndexLeftbar)
	{
	case 0:
		toggle->Checked ? panel5->BackColor = Color::FromArgb(237, 237, 237) : panel5->BackColor = Color::FromArgb(103, 103, 103);
		toggle->Checked ? panel6->BackgroundImage = Image::FromFile("Images/icons/home_black.png") : panel6->BackgroundImage = Image::FromFile("Images/icons/home_white.png");
		break;
	case 1: 
		toggle->Checked ? panel7->BackColor = Color::FromArgb(237, 237, 237) : panel7->BackColor = Color::FromArgb(103, 103, 103);
		toggle->Checked ? panel8->BackgroundImage = Image::FromFile("Images/icons/lapa_black.png") : panel8->BackgroundImage = Image::FromFile("Images/icons/lapa_white.png");
		break;
	case 2:
		toggle->Checked ? panel9->BackColor = Color::FromArgb(237, 237, 237) : panel9->BackColor = Color::FromArgb(103, 103, 103);
		toggle->Checked ? panel10->BackgroundImage = Image::FromFile("Images/icons/orel_black.png") : panel10->BackgroundImage = Image::FromFile("Images/icons/orel_white.png");
		break;
	case 3:
		toggle->Checked ? panel11->BackColor = Color::FromArgb(237, 237, 237) : panel11->BackColor = Color::FromArgb(103, 103, 103);
		toggle->Checked ? panel12->BackgroundImage = Image::FromFile("Images/icons/fish_black.png") : panel12->BackgroundImage = Image::FromFile("Images/icons/fish_white.png");
		break;
	default:
		break;
	}
}

void ZivotnieRB::MyForm::clearLeftBarSelected()
{
	if (toggle->Checked) {
		panel5->BackColor = Color::FromArgb(103, 103, 103);
		panel7->BackColor = Color::FromArgb(103, 103, 103);
		panel9->BackColor = Color::FromArgb(103, 103, 103);
		panel11->BackColor = Color::FromArgb(103, 103, 103);
		panel5->BackgroundImage = Image::FromFile("Images/ui_images/subject_button_leftbar_gray.png");
		panel7->BackgroundImage = Image::FromFile("Images/ui_images/subject_button_leftbar_gray.png");
		panel9->BackgroundImage = Image::FromFile("Images/ui_images/subject_button_leftbar_gray.png");
		panel11->BackgroundImage = Image::FromFile("Images/ui_images/subject_button_leftbar_gray.png");
		panel6->BackgroundImage = Image::FromFile("Images/icons/home_white.png");
		panel8->BackgroundImage = Image::FromFile("Images/icons/lapa_white.png");
		panel10->BackgroundImage = Image::FromFile("Images/icons/orel_white.png");
		panel12->BackgroundImage = Image::FromFile("Images/icons/fish_white.png");
	}
	else {
		panel5->BackColor = Color::FromArgb(255, 255, 255);
		panel7->BackColor = Color::FromArgb(255, 255, 255);
		panel9->BackColor = Color::FromArgb(255, 255, 255);
		panel11->BackColor = Color::FromArgb(255, 255, 255);
		panel5->BackgroundImage = Image::FromFile("Images/ui_images/subject_button_leftbar.png");
		panel7->BackgroundImage = Image::FromFile("Images/ui_images/subject_button_leftbar.png");
		panel9->BackgroundImage = Image::FromFile("Images/ui_images/subject_button_leftbar.png");
		panel11->BackgroundImage = Image::FromFile("Images/ui_images/subject_button_leftbar.png");
		panel6->BackgroundImage = Image::FromFile("Images/icons/home_black.png");
		panel8->BackgroundImage = Image::FromFile("Images/icons/lapa_black.png");
		panel10->BackgroundImage = Image::FromFile("Images/icons/orel_black.png");
		panel12->BackgroundImage = Image::FromFile("Images/icons/fish_black.png");
	}
}

// База данных

void ZivotnieRB::MyForm::LoadAllData()
{
	ClearAllData(flowLayoutPanel1);
	ClearAllData(flowLayoutPanel4);
	ClearAllData(flowLayoutPanel5);
	ClearAllData(flowLayoutPanel6);

	OleDbDataReader^ dataReader = databaseConnection->ExecuteSelectQuery("SELECT * FROM [КраснаяКнига]", gcnew array<Object^> {});

	if (dataReader != nullptr)
	{
		try
		{
			while (dataReader->Read())
			{
				Int32^ id = Convert::ToInt32(dataReader["id"]);
				String ^ name = dataReader["Название"]->ToString(); 
				String^ description = dataReader["Описание"]->ToString();
				String^ category = dataReader["Категория"]->ToString();
				Int32^ categoryZnach = Convert::ToInt32(dataReader["КатегорияЗначимости"]);
				Int32^ views = Convert::ToInt32(dataReader["Просмотры"]);
				String^ photo = dataReader["Фотография"]->ToString();

				flowLayoutPanel1->Controls->Add(gcnew Item(id, name, description, category, categoryZnach, views, photo, toggle));

				if (category->Equals("Животное")) {
					flowLayoutPanel4->Controls->Add(gcnew Item(id, name, description, category, categoryZnach, views, photo, toggle));
				}

				if (category->Equals("Птица")) {
					flowLayoutPanel5->Controls->Add(gcnew Item(id, name, description, category, categoryZnach, views, photo, toggle));
				}

				if (category->Equals("Рыба")) {
					flowLayoutPanel6->Controls->Add(gcnew Item(id, name, description, category, categoryZnach, views, photo, toggle));
				}

			}
		}
		finally
		{
			if (dataReader != nullptr)
				dataReader->Close();
		}
	}
}

void ZivotnieRB::MyForm::LoadSearchData(String^ searchParametr)
{
	String^ query = "SELECT * FROM [КраснаяКнига] WHERE [Название] LIKE ?";
	array<Object^>^ parameters = gcnew array<Object^> { "%" + searchParametr + "%" };
	OleDbDataReader^ dataReader = databaseConnection->ExecuteSelectQuery(query, parameters);
	try
	{
		while (dataReader->Read())
		{
			flowLayoutPanel2->Controls->Add(gcnew Item(Convert::ToInt32(dataReader["id"]), dataReader["Название"]->ToString(), dataReader["Описание"]->ToString(), dataReader["Категория"]->ToString(), Convert::ToInt32(dataReader["КатегорияЗначимости"]), Convert::ToInt32(dataReader["Просмотры"]), dataReader["Фотография"]->ToString(), toggle));
		}
	}
	finally
	{
		if (dataReader != nullptr)
			dataReader->Close();
	}
}

void ZivotnieRB::MyForm::ClearAllData(FlowLayoutPanel^ panel)
{
	while (panel->Controls->Count > 0)
	{
		Control^ control = panel->Controls[0];
		panel->Controls->Remove(control);
		delete control;
	}
}

// Инициализация проекта

void ZivotnieRB::MyForm::initializeProject()
{
	toggle->Location = Point(26, 683);
	toggle->CheckedChanged += gcnew EventHandler(this, &MyForm::Toggle_CheckedChanged);
	panel1->Controls->Add(toggle);

	DateTime now = DateTime::Now;
	label5->Text = now.ToString("d MMMM yyyy", gcnew System::Globalization::CultureInfo("ru-RU"));
	label6->Text = now.ToString("HH:mm");
	label8->Text = now.ToString("d MMMM yyyy", gcnew System::Globalization::CultureInfo("ru-RU"));
	label7->Text = now.ToString("HH:mm");
	label16->Text = now.ToString("d MMMM yyyy", gcnew System::Globalization::CultureInfo("ru-RU"));
	label15->Text = now.ToString("HH:mm");
	label19->Text = now.ToString("d MMMM yyyy", gcnew System::Globalization::CultureInfo("ru-RU"));
	label18->Text = now.ToString("HH:mm");
	label22->Text = now.ToString("d MMMM yyyy", gcnew System::Globalization::CultureInfo("ru-RU"));
	label21->Text = now.ToString("HH:mm");

	timer->Interval = 1000;
	timer->Tick += gcnew EventHandler(this, &MyForm::timer_Tick);
	timer->Start();

	changeLeftBarSelected();
	LoadAllData();
}