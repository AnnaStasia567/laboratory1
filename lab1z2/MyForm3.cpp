#include "MyForm.h"
#include "MyForm3.h"
using namespace lab1z2;// Project name
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	lab1z2::MyForm3 form;
	Application::Run(% form);
}

