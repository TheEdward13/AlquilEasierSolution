#pragma once

using namespace System;
using namespace AlquilEasierModel;
using namespace System::Collections::Generic;

namespace AlquilEasierPersistance {
	public ref class Persistance
	{
	private:
		static void PersistBinaryFile(String^ fileName, Object^ persistObject);
		static Object^ LoadBinaryFile(String^ fileName);

		static List<Usuario^>^ usuariosListDB = gcnew List<Usuario^>();
		static List<Departamento^>^ depaListDB = gcnew List<Departamento^>();
		static List<Deudas^>^ deudaListDB = gcnew List<Deudas^>();
		static List<Floor^>^ floorListDB = gcnew List<Floor^>();

	public:
		//Archivos BIN
		static String^ BIN_USUARIO_FILE_NAME = "usuarios.bin";
		static String^ BIN_DEPARTAMENTO_FILE_NAME = "departamento.bin";
		static String^ BIN_DEUDA_FILE_NAME = "deuda.bin";
		static String^ BIN_DEP_FLOOR_FILE_NAME = "piso.bin";
		

		//Operaciones para Login
		static int AddUsuario(Usuario^ usuario);
		static List<Usuario^>^ QueryAllUsuarios();

		//Operaciones de departamento
		static int AddApartment(Departamento^ depa);
		static int ModifyApartment(Departamento^ depa);
		static List<Departamento^>^ ConsultaDepa();
		static Departamento^ ConsultaDepaByID(int depaID);
		static int DeleteApartment(int depaID);

		//Operaciones de deudas
		static int AddDeuda(Deudas^ deuda);
		static int ModifyDeuda(Deudas^ deuda);
		static int DeleteDeuda(int deudaID);
		static List<Deudas^>^ ConsultaDeuda();



	};
}

