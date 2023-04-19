#include "MyForm.h"
using namespace PredictionsOrb;
using namespace System::Windows::Forms;
#include <ctime>
#include <iostream>

// Application entry point
[STAThreadAttribute]
void main(array<String^>^ args) {
    srand(time(0));
    // Initial Application Parameters:
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    PredictionsOrb::MyForm form;
    Application::Run(% form);
}

System::Void PredictionsOrb::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    int RandNumb = 0;
    RandNumb = 1 + rand() % 100;

    label1->Text = "";

    if (RandNumb <= 12.5)
    {
        label1->Text = "Yes, definitely";
        label1->ForeColor = Color::Green;
    }
    else if (RandNumb > 12.5 && RandNumb <= 25)
    {
        label1->Text = "As I see it, yes";
        label1->ForeColor = Color::Green;
    }
    else if (RandNumb > 25 && RandNumb <= 37.5)
    {
        label1->Text = "Signs point to yes";
        label1->ForeColor = Color::Green;
    }
    else if (RandNumb > 37.5 && RandNumb <= 50)
    {
        label1->Text = "Very doubtful";
        label1->ForeColor = Color::Red;
    }
    else if (RandNumb > 50 && RandNumb <= 62.5)
    {
        label1->Text = "Better not";
        label1->ForeColor = Color::Red;
    }
    else if (RandNumb > 62.5 && RandNumb <= 75)
    {
        label1->Text = "God, no!";
        label1->ForeColor = Color::Red;
    }
    else if (RandNumb > 75 && RandNumb <= 87.5)
    {
        label1->Text = "Maybe..";
        label1->ForeColor = Color::Orange;
    }
    else
    {
        label1->Text = "You can try :)";
        label1->ForeColor = Color::Orange;
    }
}
