//
// Created by Thomas on 21-05-2024.
//

#include "habitacion.h"

habitacion::habitacion(int enemigo1, int enemigo2, int enemigo3, int enemigo4, int enemigo5, int cantObjetos,
                       int cantBolsasOro, int peligro, bool salaBoss, bool tienda) : enemigo1(enemigo1),
                                                                                     enemigo2(enemigo2),
                                                                                     enemigo3(enemigo3),
                                                                                     enemigo4(enemigo4),
                                                                                     enemigo5(enemigo5),
                                                                                     cantObjetos(cantObjetos),
                                                                                     cantBolsasOro(cantBolsasOro),
                                                                                     peligro(peligro),
                                                                                     salaBoss(salaBoss),
                                                                                     tienda(tienda) {}

habitacion::habitacion(int enemigo1, int enemigo2, int enemigo3, int enemigo4, int enemigo5, int cantObjetos,
                       int cantBolsasOro, int peligro) {
    this->enemigo1=enemigo1;
    this->enemigo2=enemigo2;
    this->enemigo3=enemigo3;
    this->enemigo4=enemigo4;
    this->enemigo5=enemigo5;
    this->cantObjetos=cantObjetos;
    this->cantBolsasOro=cantBolsasOro;
    this->peligro=peligro;
}
habitacion::~habitacion() {
}

int habitacion::getEnemigo1() const {
    return enemigo1;
}

void habitacion::setEnemigo1(int enemigo1) {
    habitacion::enemigo1 = enemigo1;
}

int habitacion::getEnemigo2() const {
    return enemigo2;
}

void habitacion::setEnemigo2(int enemigo2) {
    habitacion::enemigo2 = enemigo2;
}

int habitacion::getEnemigo3() const {
    return enemigo3;
}

void habitacion::setEnemigo3(int enemigo3) {
    habitacion::enemigo3 = enemigo3;
}

int habitacion::getEnemigo4() const {
    return enemigo4;
}

void habitacion::setEnemigo4(int enemigo4) {
    habitacion::enemigo4 = enemigo4;
}

int habitacion::getEnemigo5() const {
    return enemigo5;
}

void habitacion::setEnemigo5(int enemigo5) {
    habitacion::enemigo5 = enemigo5;
}

int habitacion::getPeligro() const {
    return peligro;
}

void habitacion::setPeligro(int peligro) {
    habitacion::peligro = peligro;
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












