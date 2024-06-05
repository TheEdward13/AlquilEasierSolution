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

		static void PersistTextFile(String^ fileName, Object^ persistObject);
		static Object^ LoadTextFile(String^ fileName);

		// LISTAS PARA DB
		static List<Usuario^>^ usuariosListDB = gcnew List<Usuario^>();
		static List<HabitacionMantenimiento^>^ habitacionesLimpiasDB = gcnew List <HabitacionMantenimiento^>();
	
	public:
		static String^ BIN_USUARIO_FILE_NAME = "usuarios.bin";

		//Operaciones para Login
		static int AddUsuario(Usuario^ usuario);
		static List<Usuario^>^ QueryAllUsuarios();


		static String^ TXT_HABITACIONESLIMPIAS_FILE_NAME = "habitacionesLimpias.txt";
		static int AddHabitacionLimpia(HabitacionMantenimiento^ habitacionLimpia);
		static int UpdateHabitacionLimpia(HabitacionMantenimiento^ habitacionLimpia);
		static List<HabitacionMantenimiento^>^ ConsultarHabitacionesLimpias();

	};
}
