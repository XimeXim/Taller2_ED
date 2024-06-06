//
// Created by Thomas on 21-05-2024.
//

#include "Habitacion.h"

Habitacion::Habitacion(int enemigo1, int enemigo2, int enemigo3, int enemigo4, int enemigo5, int cantObjetos,
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

Habitacion::Habitacion(int enemigo1, int enemigo2, int enemigo3, int enemigo4, int enemigo5, int cantObjetos,
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
Habitacion::~Habitacion() {
}

int Habitacion::getEnemigo1() const {
    return enemigo1;
}

void Habitacion::setEnemigo1(int enemigo1) {
    Habitacion::enemigo1 = enemigo1;
}

int Habitacion::getEnemigo2() const {
    return enemigo2;
}

void Habitacion::setEnemigo2(int enemigo2) {
    Habitacion::enemigo2 = enemigo2;
}

int Habitacion::getEnemigo3() const {
    return enemigo3;
}

void Habitacion::setEnemigo3(int enemigo3) {
    Habitacion::enemigo3 = enemigo3;
}

int Habitacion::getEnemigo4() const {
    return enemigo4;
}

void Habitacion::setEnemigo4(int enemigo4) {
    Habitacion::enemigo4 = enemigo4;
}

int Habitacion::getEnemigo5() const {
    return enemigo5;
}

void Habitacion::setEnemigo5(int enemigo5) {
    Habitacion::enemigo5 = enemigo5;
}

int Habitacion::getPeligro() const {
    return peligro;
}

void Habitacion::setPeligro(int peligro) {
    Habitacion::peligro = peligro;
}

int Habitacion::getCantBolsasOro() const {
    return cantBolsasOro;
}

void Habitacion::setCantBolsasOro(int cantBolsasOro) {
    Habitacion::cantBolsasOro = cantBolsasOro;
}

int Habitacion::getCantObjetos() const {
    return cantObjetos;
}

void Habitacion::setCantObjetos(int cantObjetos) {
    Habitacion::cantObjetos = cantObjetos;
}

bool Habitacion::isSalaBoss() const {
    return salaBoss;
}

void Habitacion::setSalaBoss(bool salaBoss) {
    Habitacion::salaBoss = salaBoss;
}

bool Habitacion::isTienda() const {
    return tienda;
}

void Habitacion::setTienda(bool tienda) {
    Habitacion::tienda = tienda;
}












