#include "SalesSystemGUIApp.h"

using namespace System;
using namespace SalesSystemGUIApp;

int Main(array<String^>^ args) {
	SalesSystemMainForm^ mainForm = gcnew SalesSystemMainForm();
	Application::Run(mainForm);
	return 0;
}
