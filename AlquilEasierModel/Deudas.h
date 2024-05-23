/**
 * Project Untitled
 */

#pragma once

#ifndef _DEUDAS_H
#define _DEUDAS_H

using namespace System;
namespace AlquilEasierModel {
    public ref class Deudas {
    public:
        property int Id;
        property Double Agua;
        property Double Luz;
        property Double Internet;
        property Double Alquiler;
        property String^ Fecha;

        void RegistrarDeuda();
        void ConsultarDeuda();
        void ConsultarEstado();
    };
}

#endif //_DEUDAS_H