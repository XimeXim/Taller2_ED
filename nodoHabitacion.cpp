//
// Created by Thomas on 21-05-2024.
//

#include "nodoHabitacion.h"


nodoHabitacion::nodoHabitacion(const habitacion &sala, nodoHabitacion *habIzquierda, nodoHabitacion *habDerecha) : sala(
        sala), habIzquierda(habIzquierda), habDerecha(habDerecha) {}

nodoHabitacion::~nodoHabitacion() {

}

const habitacion &nodoHabitacion::getSala() const {
    return sala;
}

void nodoHabitacion::setSala(const habitacion &sala) {
    nodoHabitacion::sala = sala;
}

nodoHabitacion *nodoHabitacion::getHabIzquierda() const {
    return habIzquierda;
}

void nodoHabitacion::setHabIzquierda(nodoHabitacion *habIzquierda) {
    nodoHabitacion::habIzquierda = habIzquierda;
}

nodoHabitacion *nodoHabitacion::getHabDerecha() const {
    return habDerecha;
}

void nodoHabitacion::setHabDerecha(nodoHabitacion *habDerecha) {
    nodoHabitacion::habDerecha = habDerecha;
}
