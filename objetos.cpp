//
// Created by Thomas on 20-05-2024.
//

#include "objetos.h"

objetos::objetos(const std::string &nombre, const std::string &descripcion, const std::string &efectoSecundario,
                 int coste, const std::string &estadistica, int valorMejora) : nombre(nombre), descripcion(descripcion),
                                                                               efectoSecundario(efectoSecundario),
                                                                               coste(coste), estadistica(estadistica),
                                                                               valorMejora(valorMejora) {}

objetos::~objetos() {

}

const std::string &objetos::getNombre() const {
    return nombre;
}

void objetos::setNombre(const std::string &nombre) {
    objetos::nombre = nombre;
}

const std::string &objetos::getDescripcion() const {
    return descripcion;
}

void objetos::setDescripcion(const std::string &descripcion) {
    objetos::descripcion = descripcion;
}

const std::string &objetos::getEfectoSecundario() const {
    return efectoSecundario;
}

void objetos::setEfectoSecundario(const std::string &efectoSecundario) {
    objetos::efectoSecundario = efectoSecundario;
}

int objetos::getCoste() const {
    return coste;
}

void objetos::setCoste(int coste) {
    objetos::coste = coste;
}

const std::string &objetos::getEstadistica() const {
    return estadistica;
}

void objetos::setEstadistica(const std::string &estadistica) {
    objetos::estadistica = estadistica;
}

int objetos::getValorMejora() const {
    return valorMejora;
}

void objetos::setValorMejora(int valorMejora) {
    objetos::valorMejora = valorMejora;
}
