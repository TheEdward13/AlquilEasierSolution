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
	
	public:
		static String^ BIN_USUARIO_FILE_NAME = "usuarios.bin";

		//Operaciones para Login
		static int AddUsuario(Usuario^ usuario);
		static List<Usuario^>^ QueryAllUsuarios();

	};
}
