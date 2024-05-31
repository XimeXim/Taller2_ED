//
// Created by Ximena on 24-05-2024.
//
#include <iostream>
#include "nodoHabitacion.h"

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

    void insertarNodoAVL();


};



#endif //AVL_H
