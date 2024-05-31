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


