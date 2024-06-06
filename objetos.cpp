//
// Created by Thomas on 20-05-2024.
//

#include "Objetos.h"

Objetos::Objetos(const std::string &nombre, const std::string &descripcion, const std::string &efectoSecundario,
                 int coste, const std::string &estadistica, int valorMejora) : nombre(nombre), descripcion(descripcion),
                                                                               efectoSecundario(efectoSecundario),
                                                                               coste(coste), estadistica(estadistica),
                                                                               valorMejora(valorMejora) {}

Objetos::~Objetos() {

}

const std::string &Objetos::getNombre() const {
    return nombre;
}

void Objetos::setNombre(const std::string &nombre) {
    Objetos::nombre = nombre;
}

const std::string &Objetos::getDescripcion() const {
    return descripcion;
}

void Objetos::setDescripcion(const std::string &descripcion) {
    Objetos::descripcion = descripcion;
}

const std::string &Objetos::getEfectoSecundario() const {
    return efectoSecundario;
}

void Objetos::setEfectoSecundario(const std::string &efectoSecundario) {
    Objetos::efectoSecundario = efectoSecundario;
}

int Objetos::getCoste() const {
    return coste;
}

void Objetos::setCoste(int coste) {
    Objetos::coste = coste;
}

const std::string &Objetos::getEstadistica() const {
    return estadistica;
}

void Objetos::setEstadistica(const std::string &estadistica) {
    Objetos::estadistica = estadistica;
}

int Objetos::getValorMejora() const {
    return valorMejora;
}

void Objetos::setValorMejora(int valorMejora) {
    Objetos::valorMejora = valorMejora;
}
