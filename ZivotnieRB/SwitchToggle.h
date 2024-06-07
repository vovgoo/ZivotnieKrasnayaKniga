#pragma once

using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;

public ref class ImageToggle : public PictureBox {
public:
    ImageToggle() {
        this->Image = imageUnchecked;
        this->Size = imageUnchecked->Size;
        this->Click += gcnew EventHandler(this, &ImageToggle::ImageToggle_Click);
    }

    property bool Checked {
        bool get() {
            return isChecked;
        }
        void set(bool value) {
            isChecked = value;
            this->Image = isChecked ? imageChecked : imageUnchecked;
        }
    }

    event EventHandler^ CheckedChanged;

private:
    System::Drawing::Image^ imageUnchecked = System::Drawing::Image::FromFile("Images/ui_images/toggle_off.png");
    System::Drawing::Image^ imageChecked = System::Drawing::Image::FromFile("Images/ui_images/toggle_on.png");
    bool isChecked = false;

    void ImageToggle_Click(Object^ sender, EventArgs^ e) {
        Checked = !Checked;
        CheckedChanged(this, EventArgs::Empty);
    }
};