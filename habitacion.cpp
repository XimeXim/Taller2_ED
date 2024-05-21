//
// Created by Thomas on 21-05-2024.
//

#include "habitacion.h"

habitacion::habitacion(int cantEnemigos, int cantBolsasOro, int cantObjetos, bool salaBoss, bool tienda) : cantEnemigos(
        cantEnemigos), cantBolsasOro(cantBolsasOro), cantObjetos(cantObjetos), salaBoss(salaBoss), tienda(tienda) {}

habitacion::~habitacion() {

}

int habitacion::getCantEnemigos() const {
    return cantEnemigos;
}

void habitacion::setCantEnemigos(int cantEnemigos) {
    habitacion::cantEnemigos = cantEnemigos;
}

int habitacion::getCantBolsasOro() const {
    return cantBolsasOro;
}

void habitacion::setCantBolsasOro(int cantBolsasOro) {
    habitacion::cantBolsasOro = cantBolsasOro;
}

int habitacion::getCantObjetos() const {
    return cantObjetos;
}

void habitacion::setCantObjetos(int cantObjetos) {
    habitacion::cantObjetos = cantObjetos;
}

bool habitacion::isSalaBoss() const {
    return salaBoss;
}

void habitacion::setSalaBoss(bool salaBoss) {
    habitacion::salaBoss = salaBoss;
}

bool habitacion::isTienda() const {
    return tienda;
}

void habitacion::setTienda(bool tienda) {
    habitacion::tienda = tienda;
}
