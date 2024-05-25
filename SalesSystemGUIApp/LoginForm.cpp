#include "LoginForm.h"
#include "SalesSystemGUIApp.h"

//De Roberto:
//Control del Login
System::Void SalesSystemGUIApp::LoginForm::btnOK_Click(System::Object^ sender, System::EventArgs^ e)
{

	String^ username = txtUsername->Text;
	String^ password = txtPassword->Text;

	Usuario^ usuario = Service::ValidateUsuario(username, password);

	if (usuario != nullptr) {

		SalesSystemMainForm::Usuario = usuario;
		MessageBox::Show("Bienvenido(a) " + usuario->Name + " " + usuario->LastName);

		if (usuario->GetType() == Propietario::typeid)

			((SalesSystemMainForm^)refSaleSystemGUIApp)->EnablePropietarioOptions();

		if (usuario->GetType() == Inquilino::typeid)

			((SalesSystemMainForm^)refSaleSystemGUIApp)->EnableInquilinoOptions();

		if (usuario->GetType() == Personal::typeid)

			((SalesSystemMainForm^)refSaleSystemGUIApp)->EnablePersonalOptions();

		this->Close();
	}
	else {

		MessageBox::Show("Usuario y/o contraseña incorrectos.");

	}

}

System::Void SalesSystemGUIApp::LoginForm::LoginForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{

	if (SalesSystemMainForm::Usuario == nullptr)
		Application::Exit();

}
