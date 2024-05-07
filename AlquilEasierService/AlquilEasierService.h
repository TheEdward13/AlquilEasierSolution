#pragma once

using namespace System;
using namespace AlquilEasierModel;
using namespace System::Collections::Generic;


namespace AlquilEasierService {
	public ref class Service
	{
		//DB DEPARTAMENOS
		List<Departamento^>^ DepaDB = gcnew List <Departamento^>();
		//Métodos para mantenimiento (CRUD)

		int addApartment(Departamento^);
		int ModifyApartment(Departamento^);
		List<Departamento^>^ ConsultaDepa();
		Departamento^ ConsultaDepaByID(int depaID);


	};
}
