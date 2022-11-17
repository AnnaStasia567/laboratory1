#include "MyForm.h"
#include "MyForm5.h"
using namespace lab1z2;// Project name
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	lab1z2::MyForm5 form;
	Application::Run(% form);
}

