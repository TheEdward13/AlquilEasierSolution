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
		//Métodos para mantenimiento (CRUD)

	public:
		static int AddApartment(Departamento^);
		static int ModifyApartment(Departamento^);
		static List<Departamento^>^ ConsultaDepa();
		static Departamento^ ConsultaDepaByID(int depaID);
		
		//Operaciones para Login
		static int AddUsuario(Usuario^ usuario);
		static List<Usuario^>^ QueryAllUsuarios();
		static Usuario^ ValidateUsuario(String^ username, String^ password);

	};
}
