/**
 * Project Untitled
 */

#pragma once
#include "Usuario.h"

#ifndef _PERSONAL_H
#define _PERSONAL_H

using namespace System;
namespace AlquilEasierModel {
    [Serializable]
        public ref class Personal : public Usuario {
        public:
            property String^ HorarioEntrada;
            property String^ HorarioSalida;

            void RegistrarPersonal();
            void ConsultarPersonal();
            void ConsultarEstadoDepa();
            void RegistrarEstadoDepa();

            Personal() {};
            Personal(int id, String^ nombre, String^ apellido, String^ telefono,
                String^ correo, String^ dni, String^ horarioEntrada, String^ horarioSalida) :
                Usuario(id, nombre, apellido, telefono, correo, dni) {
                HorarioEntrada = horarioEntrada;
                HorarioSalida = horarioSalida;
            }

    };
}

#endif //_PERSONAL_H