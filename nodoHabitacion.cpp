//
// Created by Thomas on 21-05-2024.
//

#include "nodoHabitacion.h"

nodoHabitacion::nodoHabitacion(const habitacion &sala, nodoHabitacion *habIzquierda, nodoHabitacion *habDerecha,
                               int alturaNodo, int factorBalance) : sala(sala), habIzquierda(habIzquierda),
                                                                    habDerecha(habDerecha), alturaNodo(alturaNodo),
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

int nodoHabitacion::getAlturaNodo() const {
    return alturaNodo;
}

void nodoHabitacion::setAlturaNodo(int profundidadNodo) {
    nodoHabitacion::alturaNodo = alturaNodo;
}

int nodoHabitacion::getFactorBalance() const {
    return factorBalance;
}

void nodoHabitacion::setFactorBalance(int factorBalance) {
    nodoHabitacion::factorBalance = factorBalance;
}

int nodoHabitacion::calcularAltNodo(){

    int alturaIzq = (habIzquierda == nullptr) ? 0 : habIzquierda->calcularAltNodo();
    int alturaDer = (habDerecha == nullptr) ? 0 : habDerecha->calcularAltNodo();
    alturaNodo = 1 + std::max(alturaIzq, alturaDer);
    return alturaNodo;
}












