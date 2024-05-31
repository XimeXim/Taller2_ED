//
// Created by Thomas on 21-05-2024.
//

#include "nodoHabitacion.h"

nodoHabitacion::nodoHabitacion(const habitacion &sala, nodoHabitacion *habIzquierda, nodoHabitacion *habDerecha,
                               int factorBalance) : sala(sala), habIzquierda(habIzquierda), habDerecha(habDerecha),
                                                    factorBalance(factorBalance) {}

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

int nodoHabitacion::getFactorBalance() const {
    return factorBalance;
}

void nodoHabitacion::setFactorBalance(int factorBalance) {
    nodoHabitacion::factorBalance = factorBalance;
}




