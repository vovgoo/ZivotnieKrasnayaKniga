#include "Item.h"

// Темная тема

void ZivotnieRB::Item::Toggle_CheckedChanged_Item(Object^ sender, EventArgs^ e)
{
	ChangeTheme();
}

void ZivotnieRB::Item::ChangeTheme()
{
	if (toggle != nullptr) {
		if (toggle->Checked) {
			label1->ForeColor = Color::White;
			label2->ForeColor = Color::White;
			label3->ForeColor = Color::White;
			label4->ForeColor = Color::White;
			panel1->BackColor = Color::FromArgb(29, 29, 29);
			panel1->BackgroundImage = Image::FromFile("Images/ui_images/subject_item_gray.png");
			panel3->BackgroundImage = Image::FromFile("Images/icons/views_white.png");
			panel4->BackgroundImage = Image::FromFile("Images/ui_images/subject_about_gray.png");
		}
		else {
			label1->ForeColor = Color::Black;
			label2->ForeColor = Color::Black;
			label3->ForeColor = Color::Black;
			label4->ForeColor = Color::Black;
			panel1->BackColor = Color::FromArgb(244, 244, 244);
			panel1->BackgroundImage = Image::FromFile("Images/ui_images/subject_item.png");
			panel3->BackgroundImage = Image::FromFile("Images/icons/views.png");
			panel4->BackgroundImage = Image::FromFile("Images/ui_images/subject_about.png");
		}
	}
}

// Анимация кнопки

System::Void ZivotnieRB::Item::label5_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	panel4->BackColor = Color::FromArgb(200, 200, 200);
    return System::Void();
}

System::Void ZivotnieRB::Item::label5_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	panel4->BackColor = Color::White;
	return System::Void();
}

// Переход по табконтролу

System::Void ZivotnieRB::Item::label5_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ query = "UPDATE [КраснаяКнига] SET [Просмотры] = [Просмотры] + 1 WHERE [id] = ?";
	array<Object^>^ parameters = gcnew array<Object^> { this->id };
	databaseConnection->ExecuteUpdateQuery(query, parameters);

	*this->views += 1;

	label3->Text = views->ToString();

	Label^ label1 = dynamic_cast<Label^>(sender);
	Panel^ panel1 = dynamic_cast<Panel^>(label1->Parent);
	Panel^ panel2 = dynamic_cast<Panel^>(panel1->Parent);
	UserControl^ userControl = dynamic_cast<UserControl^>(panel2->Parent);
	FlowLayoutPanel^ flowLayoutPanel = dynamic_cast<FlowLayoutPanel^>(userControl->Parent);
	TabPage^ tabpage = dynamic_cast<TabPage^>(flowLayoutPanel->Parent);
	TabControl^ tabcontrol = dynamic_cast<TabControl^>(tabpage->Parent);
	TabPage^ tabpage2 = dynamic_cast<TabPage^>(tabcontrol->Controls["tabPage2"]);
	FlowLayoutPanel^ flowLayoutPanel3 = dynamic_cast<FlowLayoutPanel^>(tabpage2->Controls["flowLayoutPanel3"]);
	Panel^ panelinner = dynamic_cast<Panel^>(flowLayoutPanel3->Controls["panel22"]);
	

	Label^ name = dynamic_cast<Label^>(flowLayoutPanel3->Controls["label11"]);
	Panel^ photo = dynamic_cast<Panel^>(flowLayoutPanel3->Controls["panel21"]);
	Label^ description = dynamic_cast<Label^>(flowLayoutPanel3->Controls["label12"]);
	Label^ views = dynamic_cast<Label^>(panelinner->Controls["label13"]);
	Label^ category = dynamic_cast<Label^>(panelinner->Controls["label14"]);

	name->Text = this->name;
	description->Text = this->description;
	views->Text = this->views->ToString();
	category->Text = categoryZnach->ToString() + " Категория национальной природоохранной значимости";

	try {
		photo->BackgroundImage = Image::FromFile("Images/animals/" + picture);
	}
	catch (Exception^) {
		photo->BackgroundImage = Image::FromFile("Images/animals/NotImage.jpg");
	}

	flowLayoutPanel3->VerticalScroll->Value = 0;

	tabcontrol->SelectedTab = tabpage2;

    return System::Void();
}

// Инициализация пользовательского элемента управления

void ZivotnieRB::Item::initializeItem()
{
	label4->Text = name;
	label2->Text = description;
	label1->Text = categoryZnach->ToString() + " Категория национальной природоохранной значимости";
	label3->Text = views->ToString();
	try {
		panel2->BackgroundImage = Image::FromFile("Images/animals/" + picture);
	}
	catch (Exception^) {
		panel2->BackgroundImage = Image::FromFile("Images/animals/NotImage.jpg");
	}
	this->toggle->CheckedChanged += gcnew EventHandler(this, &Item::Toggle_CheckedChanged_Item);
}
