#pragma once

#ifndef _DEPARTAMENTO_H
#define _DEPARTAMENTO_H

using namespace System;

namespace AlquilEasierModel {
    [Serializable]
    public ref class Departamento {
    public:
        property int Id;
        property int NumDepa;
        property int Piso;
        property double Dimensiones;
        property double Precio;
        property String^ Estado;
        property String^ Accidentes;
        property array<Byte>^ Photo;

        void RegistrarDepa();
        void ModificarDatos();
        void ConsultarDatos();
        void SituacionAccidentes();
    };
}

#endif //_DEPARTAMENTO_H