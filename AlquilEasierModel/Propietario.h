/**
 * Project Untitled
 */

#pragma once
#include "Usuario.h"

#ifndef _PROPIETARIO_H
#define _PROPIETARIO_H

using namespace System;
namespace AlquilEasierModel {
    public ref class Propietario : public Usuario {
    public:

        void Registro();
        void ModificarDatos();
        void EstadoMantenimiento();
        void ControlServicios();
        void MensajesDeudas();
        void InformeQuejas();
        void SitucionAccidentes();

        Propietario(int id, String^ nombre, String^ apellido, String^ telefono,
            String^ correo, String^ dni) :
            Usuario(id, nombre, apellido, telefono, correo, dni) {}

    };
}

#endif //_PROPIETARIO_H