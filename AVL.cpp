//
// Created by Ximena on 24-05-2024.
//

#include "AVL.h"

AVL::AVL(nodoHabitacion *habitacion) : habitacion(habitacion) {}

AVL::~AVL() {
}

nodoHabitacion *AVL::getHabitacion() const {
    return habitacion;
}

void AVL::setHabitacion(nodoHabitacion *habitacion) {
    AVL::habitacion = habitacion;
}

void AVL::insertarNodoAVL(nodoHabitacion *raiz) {
}

int AVL::alturaNodo(nodoHabitacion* nodo) {

    if (nodo == nullptr){
        return 0;
    }
    return nodo->getAlturaNodo();
}

int AVL::facBalanceNodo(nodoHabitacion *nodo) {

    if (nodo == nullptr){
        return 0;
    }
    return alturaNodo(nodo->getHabIzquierda()) - alturaNodo(nodo->getHabDerecha());
}




