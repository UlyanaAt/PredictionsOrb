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
    int k = 0;
    double RandNumb = 0;
    RandNumb = (1 + rand() % 100);
    RandNumb = RandNumb / 100;

    label1->Text = "";

    while (RandNumb > 0)
    {
        RandNumb = RandNumb - 0.125;
        k += 1;
    }

    switch (k)
    {
        case 1:
            label1->Text = "Yes, definitely";
            label1->ForeColor = Color::Green;
            break;

        case 2:
            label1->Text = "As I see it, yes";
            label1->ForeColor = Color::Green;
            break;

        case 3:
            label1->Text = "Signs point to yes";
            label1->ForeColor = Color::Green;
            break;

        case 4:
            label1->Text = "Very doubtful";
            label1->ForeColor = Color::Red;
            break;

        case 5:
            label1->Text = "Better not";
            label1->ForeColor = Color::Red;
            break;

        case 6:
            label1->Text = "God, no!";
            label1->ForeColor = Color::Red;
            break;

        case 7:
            label1->Text = "Maybe..";
            label1->ForeColor = Color::Orange;
            break;

        case 8:
            label1->Text = "You can try :)";
            label1->ForeColor = Color::Orange;
            break;
    }

}
