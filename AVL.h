//
// Created by Ximena on 24-05-2024.
//
#include <iostream>
#include "nodoHabitacion.h"
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

    //DOCUMENTAR
    void insertarNodoAVL(nodoHabitacion* raiz);

    int alturaNodo(nodoHabitacion* nodo);

    int facBalanceNodo(nodoHabitacion* nodo);

};



#endif //AVL_H
