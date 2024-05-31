#pragma once

using namespace System;
using namespace AlquilEasierModel;
using namespace System::Collections::Generic;


namespace AlquilEasierService {
	public ref class Service
	{
	private:
		//DB DEPARTAMENOS
		static List<Departamento^>^ DepaDB = gcnew List <Departamento^>();
		

	public:
		//CRUD DE DEPARTAMENTOS
		static int AddApartment(Departamento^ depa);
		static int ModifyApartment(Departamento^ depa);
		static int DeleteApartment(int depaID);
		static List<Departamento^>^ ConsultaDepa();
		static Departamento^ ConsultaDepaByID(int depaID);

		//CRUD DE USUARIOS
		static int AddUsuario(Usuario^ usuario);
		static List<Usuario^>^ QueryAllUsuarios();
		static Usuario^ ValidateUsuario(String^ username, String^ password);

		//CRUD DE DEUDAS
		static int AddDeuda(Deudas^ deuda);
		static int ModifyDeuda(Deudas^ deuda);
		static int DeleteDeuda(int deudaID);
		static List<Deudas^>^ ConsultaDeuda();
		
	};
}