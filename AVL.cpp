//
// Created by Ximena on 24-05-2024.
//

#include "AVL.h"
using namespace std;


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
    return rotacionRR(nodoDesbalanceado);
}

nodoHabitacion* AVL::rotacionRL(nodoHabitacion* nodoDesbalanceado){

    nodoDesbalanceado->setHabDerecha(rotacionRR(nodoDesbalanceado->getHabDerecha()));
    return rotacionLL(nodoDesbalanceado);
}

bool AVL::buscarNodoRepetido(nodoHabitacion* nodo, float idNodo) {

    if (nodo == nullptr){
        return false;
    }
    else{
        if (nodo->getIdNodoSala() == idNodo){
            return true;
        }else{
            bool nodoIzq = buscarNodoRepetido(nodo->getHabIzquierda(), idNodo);
            bool nodoDer = buscarNodoRepetido(nodo->getHabDerecha(), idNodo);
            return nodoIzq || nodoDer;
        }
    }
}

float AVL::difPeligrosIguales(nodoHabitacion *nodoAEncontrar) {

    bool repetido = buscarNodoRepetido(nodoAEncontrar, nodoAEncontrar->getIdNodoSala());
    float peligroNodo = nodoAEncontrar->getIdNodoSala();
    float nuevoPeligroNodo;
    if (repetido){
        nuevoPeligroNodo = peligroNodo + 0.0001;
        return nuevoPeligroNodo;
    }
    return peligroNodo;
}

nodoHabitacion* AVL::insertarNodoAVL(nodoHabitacion* nodoAInsertar, class habitacion& sala, nodoHabitacion* habIzquierda, nodoHabitacion* habDerecha, int alturaNodo,
                          int factorBalance, float idNodoSala) {//revisar  y cambiar

    if (nodoAInsertar == nullptr){
        return new nodoHabitacion(sala, habIzquierda, habDerecha, alturaNodo, factorBalance, idNodoSala);
    }
    float peligroNodoAInsertar = difPeligrosIguales(nodoAInsertar);
    if (idNodoSala < peligroNodoAInsertar){
        nodoAInsertar->setHabIzquierda(insertarNodoAVL(nodoAInsertar->getHabIzquierda(), sala, habIzquierda, habDerecha, alturaNodo, factorBalance, idNodoSala));
    }
    else if (idNodoSala > peligroNodoAInsertar){
        nodoAInsertar->setHabDerecha(insertarNodoAVL(nodoAInsertar->getHabDerecha(), sala, habIzquierda, habDerecha, alturaNodo, factorBalance, idNodoSala));
    }
    else{
        return nodoAInsertar;
    }
    nodoAInsertar->setAlturaNodo(1 + max(this->alturaNodo(nodoAInsertar->getHabIzquierda()), this->alturaNodo(nodoAInsertar->getHabDerecha())));
    int facBalance = facBalanceNodo(nodoAInsertar);
    if(facBalance > 1 && idNodoSala < nodoAInsertar->getHabIzquierda()->getIdNodoSala()){
        return rotacionRR(nodoAInsertar);
    }
    if (facBalance < -1 && idNodoSala > nodoAInsertar->getHabDerecha()->getIdNodoSala()){
        return rotacionLL(nodoAInsertar);
    }
    if (facBalance > 1 && idNodoSala > nodoAInsertar->getHabIzquierda()->getIdNodoSala()){
        return rotacionLR(nodoAInsertar);
    }
    if (facBalance < -1 && idNodoSala < nodoAInsertar->getHabDerecha()->getIdNodoSala()){
        return rotacionRL(nodoAInsertar);
    }
    return nodoAInsertar;
}






