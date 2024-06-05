/**
 * Project Restaurant Sales Systen
 * @author Johan Baldeón
 */
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
            property double Dimensiones;
            property double Precio;
            property String^ Estado;
            property String^ Accidentes;
    };

    [Serializable]
        public ref class HabitacionMantenimiento : public Departamento {
        public:
            property bool estaLimpio;
    };

    void RegistrarDepa();
    void ModificarDatos();
    void ConsultarDatos();
    void SituacionAccidentes();

}

#endif //_DEPARTAMENTO_H