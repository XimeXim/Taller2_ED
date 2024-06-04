//
// Created by Thomas on 21-05-2024.
//

#ifndef TALLER2_ED_NODOHABITACION_H
#define TALLER2_ED_NODOHABITACION_H
#include "habitacion.h"
#include "algorithm"



class nodoHabitacion {

private:

    //PARAMETROS DE NODO HABITACION
    habitacion sala;
    nodoHabitacion* habIzquierda;
    nodoHabitacion* habDerecha;
    int alturaNodo;
    int factorBalance;
    float idNodoSala;

public:

    //DOCUMENTAR
    nodoHabitacion(const habitacion &sala, nodoHabitacion *habIzquierda, nodoHabitacion *habDerecha, int alturaNodo,
                   int factorBalance, float idNodoSala);

    nodoHabitacion(const habitacion &habitacion);

    virtual ~nodoHabitacion();

    const habitacion &getSala() const;

    void setSala(const habitacion &sala);

    nodoHabitacion *getHabIzquierda() const;

    void setHabIzquierda(nodoHabitacion *habIzquierda);

    nodoHabitacion *getHabDerecha() const;

    void setHabDerecha(nodoHabitacion *habDerecha);

    int getAlturaNodo() const;

    void setAlturaNodo(int alturaNodo);

    int getFactorBalance() const;

    void setFactorBalance(int factorBalance);

    float getIdNodoSala() const;

    void setIdNodoSala(float idNodoSala);

    //DOCUMENTAR
    int calcularAltNodo();

    int altNodoHab(nodoHabitacion* nodo);

    float idNodoHabitacion(int peligroSala);




};


#endif //TALLER2_ED_NODOHABITACION_H
