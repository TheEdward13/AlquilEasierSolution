#include "pch.h"

#include "AlquilEasierPersistance.h"

using namespace System::IO;
using namespace System::Xml::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;

void AlquilEasierPersistance::Persistance::PersistTextFile(String^ fileName, Object^ persistObject)
{
    FileStream^ file;
    StreamWriter^ writer;
    file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
    writer = gcnew StreamWriter(file);
    if (persistObject->GetType() == List<HabitacionMantenimiento^>::typeid) {
        List<HabitacionMantenimiento^>^ habitacionesLimpias = (List<HabitacionMantenimiento^>^)persistObject;
        for (int i = 0; i < habitacionesLimpias->Count; i++) {
            HabitacionMantenimiento^ habitacionLimpia = habitacionesLimpias[i];
            writer->WriteLine(habitacionLimpia->Id + "," + habitacionLimpia->estaLimpio);
        }
    }
    if (writer != nullptr) writer->Close();
    if (file != nullptr) file->Close();
}

Object^ AlquilEasierPersistance::Persistance::LoadTextFile(String^ fileName)
{
    FileStream^ file;
    StreamReader^ reader;
    Object^ result;
    if (File::Exists(fileName)) {
        file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
        reader = gcnew StreamReader(file);
        int i = 1;
        if (fileName->Equals(TXT_HABITACIONESLIMPIAS_FILE_NAME)) {
            result = gcnew List<HabitacionMantenimiento^>();
            while (true) {
                String^ line = reader->ReadLine();
                if (line == nullptr) break;
                array<String^>^ record = line->Split(',');
                HabitacionMantenimiento^ habitacionLimpia = gcnew HabitacionMantenimiento();
                habitacionLimpia->Id = Convert::ToInt32(record[0]);
                habitacionLimpia->estaLimpio = Convert::ToBoolean(record[1]);
                ((List<HabitacionMantenimiento^>^)result)->Add(habitacionLimpia);
            }
        }

        if (reader != nullptr) reader->Close();
        if (file != nullptr) file->Close();
    }
    return result;
}

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

int AlquilEasierPersistance::Persistance::AddHabitacionLimpia(HabitacionMantenimiento^ habitacionLimpia)
{
    habitacionesLimpiasDB->Add(habitacionLimpia);
    PersistTextFile(TXT_HABITACIONESLIMPIAS_FILE_NAME, habitacionesLimpiasDB);
    return 1;
}

List<HabitacionMantenimiento^>^ AlquilEasierPersistance::Persistance::ConsultarHabitacionesLimpias()
{
    habitacionesLimpiasDB = (List<HabitacionMantenimiento^>^)LoadTextFile(TXT_HABITACIONESLIMPIAS_FILE_NAME);
    if (habitacionesLimpiasDB == nullptr)
        habitacionesLimpiasDB = gcnew List<HabitacionMantenimiento^>();
    return habitacionesLimpiasDB;
}

int AlquilEasierPersistance::Persistance::UpdateHabitacionLimpia(HabitacionMantenimiento^ habitacionLimpia)
{
    for (int i = 0; i < habitacionesLimpiasDB->Count; i++)
    {
        if (habitacionesLimpiasDB[i]->Id == habitacionLimpia->Id)
        {
            habitacionesLimpiasDB[i]->estaLimpio = habitacionLimpia->estaLimpio;
            PersistTextFile(TXT_HABITACIONESLIMPIAS_FILE_NAME, habitacionesLimpiasDB);
            return 1;
        }
    }
    return 0;
}
