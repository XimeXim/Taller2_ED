//
// Created by Ximena on 24-05-2024.
//
#include <iostream>
#include "nodoHabitacion.h"
#include "habitacion.h"
#include "algorithm"


#ifndef AVL_H
#define AVL_H

class AVL {

private:

    nodoHabitacion* habitacion;

public:

    explicit AVL(nodoHabitacion *habitacion);

    virtual ~AVL();

    nodoHabitacion *getHabitacion() const;

    void setHabitacion(nodoHabitacion *habitacion);

    //DOCUMENTAR_TODO_HACIA_ABAJO
    int alturaNodo(nodoHabitacion* nodo);

    int calcularAltNodo(nodoHabitacion* nodo);

    int facBalanceNodo(nodoHabitacion* nodo);

    nodoHabitacion* rotacionRR(nodoHabitacion* nodoDesbalanceado);

    nodoHabitacion* rotacionLL(nodoHabitacion* nodoDesbalanceado);

    nodoHabitacion* rotacionLR(nodoHabitacion* nodoDesbalanceado);

    nodoHabitacion* rotacionRL(nodoHabitacion* nodoDesbalanceado);

    bool buscarNodoRepetido(nodoHabitacion* nodo, float idNodo);

    float difPeligrosIguales (nodoHabitacion* nodo);

    nodoHabitacion* insertarNodoAVL(nodoHabitacion* nodoAInsertar, class habitacion &sala, nodoHabitacion *habIzquierda, nodoHabitacion *habDerecha, int alturaNodo,
                         int factorBalance, float idNodoSala);


};



#endif //AVL_H
