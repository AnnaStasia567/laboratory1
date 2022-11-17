#include "MyForm.h"
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
#include "MyForm5.h"
using namespace lab1z2;// Project name
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	lab1z2::MyForm form;
	Application::Run(%form);
}
