//
// Created by Thomas on 21-05-2024.
//

#include "NodoHabitacion.h"

NodoHabitacion::NodoHabitacion(const Habitacion &sala, NodoHabitacion *habIzquierda, NodoHabitacion *habDerecha,
                               int alturaNodo, int factorBalance, float idNodoSala) : sala(sala),
                                                                                      habIzquierda(habIzquierda),
                                                                                      habDerecha(habDerecha),
                                                                                      alturaNodo(alturaNodo),
                                                                                      factorBalance(factorBalance),
                                                                                      idNodoSala(idNodoSala) {}

NodoHabitacion::NodoHabitacion(const Habitacion &habitacion): sala(habitacion) {
    this->sala = habitacion;
}

NodoHabitacion::~NodoHabitacion() {
}

const Habitacion &NodoHabitacion::getSala() const {
    return sala;
}

void NodoHabitacion::setSala(const Habitacion &sala) {
    NodoHabitacion::sala = sala;
}

NodoHabitacion *NodoHabitacion::getHabIzquierda() const {
    return habIzquierda;
}

void NodoHabitacion::setHabIzquierda(NodoHabitacion *habIzquierda) {
    NodoHabitacion::habIzquierda = habIzquierda;
}

NodoHabitacion *NodoHabitacion::getHabDerecha() const {
    return habDerecha;
}

void NodoHabitacion::setHabDerecha(NodoHabitacion *habDerecha) {
    NodoHabitacion::habDerecha = habDerecha;
}

int NodoHabitacion::getAlturaNodo() const {
    return alturaNodo;
}

void NodoHabitacion::setAlturaNodo(int profundidadNodo) {
    NodoHabitacion::alturaNodo = alturaNodo;
}

int NodoHabitacion::getFactorBalance() const {
    return factorBalance;
}

void NodoHabitacion::setFactorBalance(int factorBalance) {
    NodoHabitacion::factorBalance = factorBalance;
}

float NodoHabitacion::getIdNodoSala() const {
    return idNodoSala;
}

void NodoHabitacion::setIdNodoSala(float idNodoSala) {
    NodoHabitacion::idNodoSala = idNodoSala;
}

int NodoHabitacion::calcularAltNodo(){

    int alturaIzq = (habIzquierda == nullptr) ? 0 : habIzquierda->calcularAltNodo();
    int alturaDer = (habDerecha == nullptr) ? 0 : habDerecha->calcularAltNodo();
    alturaNodo = 1 + std::max(alturaIzq, alturaDer);
    return alturaNodo;
}

int NodoHabitacion::altNodoHab(NodoHabitacion *nodo) {

    if (nodo == nullptr){
        return 0;
    }
    return nodo->getAlturaNodo();
}

float NodoHabitacion::idNodoHabitacion(int peligroSala) {

    peligroSala = this->getSala().getPeligro();
    this->setIdNodoSala(peligroSala);
    return this->getIdNodoSala();
}


















