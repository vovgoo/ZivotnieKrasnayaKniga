#include "Spravka.h"

// Анимация кнопок

System::Void ZivotnieRB::Spravka::panel19_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	Panel^ panel = dynamic_cast<Panel^>(sender);
	if (panel == nullptr) {
		panel = dynamic_cast<Panel^>(((Control^)sender)->Parent);
	}
	if (panel != nullptr) {
		if (darkTheme) {
			panel->BackColor = panel->ClientRectangle.Contains(panel->PointToClient(Control::MousePosition)) ? Color::FromArgb(140, 140, 140) : Color::FromArgb(103, 103, 103);
		}
		else {
			panel->BackColor = panel->ClientRectangle.Contains(panel->PointToClient(Control::MousePosition)) ? Color::FromArgb(200, 200, 200) : Color::FromArgb(244, 244, 244);
		}
	}
	return System::Void();
}

System::Void ZivotnieRB::Spravka::panel19_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	Panel^ panel = dynamic_cast<Panel^>(sender);
	if (panel != nullptr && !panel->ClientRectangle.Contains(panel->PointToClient(Control::MousePosition))) {
		darkTheme ? panel->BackColor = Color::FromArgb(103, 103, 103) : panel->BackColor = Color::FromArgb(244, 244, 244);
	}
	return System::Void();
}

// Выход

System::Void ZivotnieRB::Spravka::panel19_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
	return System::Void();
}