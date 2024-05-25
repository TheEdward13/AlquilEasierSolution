#include "pch.h"

#include "AlquilEasierService.h"

using namespace AlquilEasierPersistance;

int AlquilEasierService::Service::AddApartment(Departamento^ Departamento)
{
    DepaDB->Add(Departamento);
    return Departamento ->Id;
}

int AlquilEasierService::Service::ModifyApartment(Departamento^ Departamento)
{
    for (int i = 0; i < DepaDB->Count; i++) {
        if (DepaDB[i]->Id == Departamento->Id) {
            DepaDB[i] = Departamento;
            return Departamento->Id;
        }
    }
    return 0;
}

List<Departamento^>^ AlquilEasierService::Service::ConsultaDepa()
{
    return DepaDB;
}

Departamento^ AlquilEasierService::Service::ConsultaDepaByID(int depaID)
{
    for (int i = 0; i < DepaDB->Count; i++) {
        if (DepaDB[i]->Id == depaID) {
            return DepaDB[i];
        }
    }
    return nullptr;
}

int AlquilEasierService::Service::DeleteApartment(int depaID)
{
    for (int i = 0; i < DepaDB->Count; i++) {
        if (DepaDB[i]->Id == depaID) {
            DepaDB->RemoveAt(i);
            return depaID;
        }
    }
    return 0;
}

//De Roberto:
//Control del Login

//NOTA: SE PUEDE REUSAR FUNCIONES ADD Y QUERY PARA UN POSTERIOR CRUD/PERSISTENCIA
int AlquilEasierService::Service::AddUsuario(Usuario^ usuario)
{
    return Persistance::AddUsuario(usuario);
}

List<Usuario^>^ AlquilEasierService::Service::QueryAllUsuarios()
{
    return Persistance::QueryAllUsuarios();
}

Usuario^ AlquilEasierService::Service::ValidateUsuario(String^ username, String^ password)
{
    Usuario^ result = nullptr;
    List<Usuario^>^ ussuariosList = QueryAllUsuarios();
    for (int i = 0; i < ussuariosList->Count; i++) {
        Usuario^ usuario = ussuariosList[i];
        if (usuario->Username->Equals(username) && usuario->Password->Equals(password))
            result = usuario;
    }
    return result;
}