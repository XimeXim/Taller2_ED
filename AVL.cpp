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

int AVL::alturaNodo(nodoHabitacion* nodo) {

    if (nodo == nullptr){
        return 0;
    }
    return nodo->calcularAltNodo();
}

int AVL::facBalanceNodo(nodoHabitacion *nodo) {

    if (nodo == nullptr){
        return 0;
    }
    return alturaNodo(nodo->getHabIzquierda()) - alturaNodo(nodo->getHabDerecha());
}

nodoHabitacion* AVL::rotacionRR(nodoHabitacion* nodoDesbalanceado) {

    nodoHabitacion* nuevaRaiz = nodoDesbalanceado->getHabIzquierda();
    nodoHabitacion* subArbolDer = nuevaRaiz->getHabDerecha();
    nuevaRaiz->setHabDerecha(nodoDesbalanceado);
    nodoDesbalanceado->setHabIzquierda(subArbolDer);
    int altNodoDesbalanceado = std::max(alturaNodo(nodoDesbalanceado->getHabIzquierda()), alturaNodo(nodoDesbalanceado->getHabDerecha())) + 1;
    int altNuevaRaiz = std::max(alturaNodo(nuevaRaiz->getHabIzquierda()), alturaNodo(nuevaRaiz->getHabDerecha())) + 1;
    nodoDesbalanceado->setAlturaNodo(altNodoDesbalanceado);
    nuevaRaiz->setAlturaNodo(altNuevaRaiz);
    return nuevaRaiz;
}

nodoHabitacion* AVL::rotacionLL(nodoHabitacion* nodoDesbalanceado) {

    nodoHabitacion* nuevaRaiz = nodoDesbalanceado->getHabDerecha();
    nodoHabitacion* subArbolIzq = nuevaRaiz->getHabIzquierda();
    nuevaRaiz->setHabIzquierda(nodoDesbalanceado);
    nodoDesbalanceado->setHabDerecha(subArbolIzq);
    int altNodoDesbalanceado = std::max(alturaNodo(nodoDesbalanceado->getHabIzquierda()), alturaNodo(nodoDesbalanceado->getHabDerecha())) + 1;
    int altNuevaRaiz = std::max(alturaNodo(nuevaRaiz->getHabIzquierda()), alturaNodo(nuevaRaiz->getHabDerecha())) + 1;
    nodoDesbalanceado->setAlturaNodo(altNodoDesbalanceado);
    nuevaRaiz->setAlturaNodo(altNuevaRaiz);
    return nuevaRaiz;
}

nodoHabitacion* AVL::rotacionLR(nodoHabitacion* nodoDesbalanceado){

    nodoDesbalanceado->setHabIzquierda(rotacionLL(nodoDesbalanceado->getHabIzquierda()));
    return rotacionLL(nodoDesbalanceado);
}

nodoHabitacion* AVL::rotacionRL(nodoHabitacion* nodoDesbalanceado){

    nodoDesbalanceado->setHabDerecha(rotacionRR(nodoDesbalanceado->getHabDerecha()));
    return rotacionRR(nodoDesbalanceado);
}

void AVL::insertarNodoAVL(nodoHabitacion *raiz) {


}






