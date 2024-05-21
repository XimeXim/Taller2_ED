//
// Created by Thomas on 21-05-2024.
//

#ifndef TALLER2_ED_NODOHABITACION_H
#define TALLER2_ED_NODOHABITACION_H
#include "habitacion.h"


class nodoHabitacion {

private:

    //PARAMETROS DE NODO HABITACION
    habitacion sala;
    nodoHabitacion* habIzquierda;
    nodoHabitacion* habDerecha;

public:

    //DOCUMENTAR
    nodoHabitacion(const habitacion &sala, nodoHabitacion *habIzquierda, nodoHabitacion *habDerecha);

    virtual ~nodoHabitacion();

    const habitacion &getSala() const;

    void setSala(const habitacion &sala);

    nodoHabitacion *getHabIzquierda() const;

    void setHabIzquierda(nodoHabitacion *habIzquierda);

    nodoHabitacion *getHabDerecha() const;

    void setHabDerecha(nodoHabitacion *habDerecha);
};


#endif //TALLER2_ED_NODOHABITACION_H
