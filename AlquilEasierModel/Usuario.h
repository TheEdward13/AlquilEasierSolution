/**
 * Project Untitled
 */

#pragma once

#ifndef _USUARIO_H
#define _USUARIO_H

using namespace System;
namespace AlquilEasierModel {
    public ref class Usuario {
    public:
        property int Id;
        property String^ Nombre;
        property String^ Apellido;
        property String^ Telefono;
        property String^ Correo;
        property String^ DNI;

        void registrarUsuario();

        bool verificarCredenciales();

        void modificarUsuario();

        void eliminarUsuario();

        Usuario();
        Usuario(int Id, String^ Nombre, String^ Apellido, String^ Telefono,
            String^ Correo, String^ DNI);
    };

}
#endif //_USUARIO_H