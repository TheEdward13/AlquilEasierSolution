#include "pch.h"

#include "AlquilEasierService.h"


int AlquilEasierService::Service::addApartment(Departamento^ Departamento)
{
    DepaDB->Add(Departamento);
    return Departamento->Id;
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
