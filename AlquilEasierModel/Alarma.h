/**
 * Project Untitled
 */

#pragma once

#ifndef _ALARMA_H
#define _ALARMA_H

using namespace System;
namespace AlquilEasierModel {
    public ref class Alarma {
    public:
        property int Id;
        property String^ Fecha;
        property String^ Hora;
        property bool Incendio;
        property bool Robo;

        void ConsultarAlarma();
    };
}

#endif //_ALARMA_H