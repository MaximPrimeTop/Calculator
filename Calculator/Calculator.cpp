#include "Calculator.h";

using namespace System;
using namespace System::Windows::Forms;
using namespace calculator;

int main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew(Calculator));
	return 0;
}
