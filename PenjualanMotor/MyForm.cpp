#include "MyForm.h"
#include <Windows.h>
#include <msclr/marshal.h>

using namespace System;
using namespace System::Windows::Forms;
ref class LoadingForm : public Form
{
public:
    LoadingForm()
    {
        this->Text = "Tunggu Sebentar Yaa";
        this->StartPosition = FormStartPosition::CenterScreen;

        Label^ label = gcnew Label();
        label->Text = "Loading...";
        label->AutoSize = true;
        label->Location = System::Drawing::Point::Point((this->Width - label->Width) / 2, (this->Height - label->Height) / 2);

        this->Controls->Add(label);
    }
};
[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
    LoadingForm^ loadingForm = gcnew LoadingForm();
    loadingForm->Show();
    for (int i = 0; i < 1000000000; i++) {
        // Do some dummy processing
    }
    loadingForm->Close();
	PenjualanMotor::MyForm form;
	Application::Run(% form);
}


