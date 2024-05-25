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
		//Métodos para mantenimiento (CRUD)
		static int AddApartment(Departamento^);
		static int ModifyApartment(Departamento^);
		static List<Departamento^>^ ConsultaDepa();
		static Departamento^ ConsultaDepaByID(int depaID);
		static int DeleteApartment(int depaID);


		static int AddUsuario(Usuario^ usuario);
		static List<Usuario^>^ QueryAllUsuarios();
		static Usuario^ ValidateUsuario(String^ username, String^ password);

	};
}