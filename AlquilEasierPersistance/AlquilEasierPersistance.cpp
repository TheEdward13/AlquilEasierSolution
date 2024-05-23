#include "pch.h"

#include "AlquilEasierPersistance.h"

using namespace System::IO;
using namespace System::Xml::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;

void AlquilEasierPersistance::Persistance::PersistBinaryFile(String^ fileName, Object^ persistObject)
{
    FileStream^ file;
    BinaryFormatter^ formatter = gcnew BinaryFormatter();
    try {
        file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        formatter->Serialize(file, persistObject);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (file != nullptr) file->Close();
    }
}

Object^ AlquilEasierPersistance::Persistance::LoadBinaryFile(String^ fileName)
{
    FileStream^ file;
    Object^ result;
    BinaryFormatter^ formatter;
    try {
        if (File::Exists(fileName)) {
            file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
            formatter = gcnew BinaryFormatter();
            result = formatter->Deserialize(file);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (file != nullptr) file->Close();
    }
    return result;
}

int AlquilEasierPersistance::Persistance::AddUsuario(Usuario^ usuario)
{
    usuariosListDB->Add(usuario);
    PersistBinaryFile(BIN_USUARIO_FILE_NAME, usuariosListDB);
    return 1;
}

List<Usuario^>^ AlquilEasierPersistance::Persistance::QueryAllUsuarios()
{
    usuariosListDB = (List<Usuario^>^)LoadBinaryFile(BIN_USUARIO_FILE_NAME);
    if (usuariosListDB == nullptr)
        usuariosListDB = gcnew List<Usuario^>();
    return usuariosListDB;
}
