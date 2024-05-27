#include "pch.h"
#include "AlquilEasierService.h"

using namespace AlquilEasierPersistance;

//CRUD DE DEPARTAMENTOS - EDWARD
int AlquilEasierService::Service::AddApartment(Departamento^ depa)
{
    Persistance::AddApartment(depa);
    return depa->Id;
}
int AlquilEasierService::Service::ModifyApartment(Departamento^ depa)
{
    /*for (int i = 0; i < DepaDB->Count; i++) {
        if (DepaDB[i]->Id == depa->Id) {
            DepaDB[i] = depa;
            return depa->Id;
        }
    }
    return 0;
    */
    return Persistance::ModifyApartment(depa);
}
List<Departamento^>^ AlquilEasierService::Service::ConsultaDepa()
{
    //return DepaDB;
    return Persistance::ConsultaDepa();
}
Departamento^ AlquilEasierService::Service::ConsultaDepaByID(int depaID)
{
    /*for (int i = 0; i < DepaDB->Count; i++) {
        if (DepaDB[i]->Id == depaID) {
            return DepaDB[i];
        }
    }
    return nullptr;*/
    return Persistance::ConsultaDepaByID(depaID);
}
int AlquilEasierService::Service::DeleteApartment(int depaID)
{
    /*for (int i = 0; i < DepaDB->Count; i++) {
        if (DepaDB[i]->Id == depaID) {
            DepaDB->RemoveAt(i);
            return depaID;
        }
    }
    return 0;*/
    return Persistance::DeleteApartment(depaID);
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

int AlquilEasierService::Service::AddDeuda(Deudas^ deuda)
{
    Persistance::AddDeuda(deuda);
    return deuda->Id;
    //que retorne mes y a�o
}

int AlquilEasierService::Service::ModifyDeuda(Deudas^ deuda)
{
    return Persistance::ModifyDeuda(deuda);
}

int AlquilEasierService::Service::DeleteDeuda(int deudaID)
{
    return Persistance::DeleteDeuda(deudaID);
}

List<Deudas^>^ AlquilEasierService::Service::ConsultaDeuda()
{
    return Persistance::ConsultaDeuda();
}
