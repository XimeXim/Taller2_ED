//
// Created by Thomas on 20-05-2024.
//

#include "habilidades.h"

habilidades::habilidades(const std::string &nombre, const std::string &descripcion, int danio, int nivel,
                         const std::string &elemento, bool aoE) : nombre(nombre), descripcion(descripcion),
                                                                  danio(danio), nivel(nivel), elemento(elemento),
                                                                  AoE(aoE) {}

habilidades::~habilidades() {

}

const std::string &habilidades::getNombre() const {
    return nombre;
}

void habilidades::setNombre(const std::string &nombre) {
    habilidades::nombre = nombre;
}

const std::string &habilidades::getDescripcion() const {
    return descripcion;
}

void habilidades::setDescripcion(const std::string &descripcion) {
    habilidades::descripcion = descripcion;
}

int habilidades::getDanio() const {
    return danio;
}

void habilidades::setDanio(int danio) {
    habilidades::danio = danio;
}

int habilidades::getNivel() const {
    return nivel;
}

void habilidades::setNivel(int nivel) {
    habilidades::nivel = nivel;
}

const std::string &habilidades::getElemento() const {
    return elemento;
}

void habilidades::setElemento(const std::string &elemento) {
    habilidades::elemento = elemento;
}

bool habilidades::isAoE() const {
    return AoE;
}

void habilidades::setAoE(bool aoE) {
    AoE = aoE;
}
