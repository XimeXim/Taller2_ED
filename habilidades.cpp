//
// Created by Thomas on 20-05-2024.
//

#include "Habilidades.h"

Habilidades::Habilidades(const std::string &string, const std::string &descripcion, int danio, int nivel, std::string elemento, bool ao_e) {
    this->nombre=nombre;
    this->descripcion=descripcion;
    this->danio=danio;
    this->nivel=nivel;
    this->elemento=elemento;
    this->AoE=AoE;
}

Habilidades::Habilidades() {
    this->nombre="";
    this->descripcion="";
    this->danio=0;
    this->nivel=0;
    this->elemento="";
    this->AoE=AoE;
}

Habilidades::~Habilidades() {
}


const std::string &Habilidades::getNombre() const {
    return nombre;
}

void Habilidades::setNombre(const std::string &nombre) {
    Habilidades::nombre = nombre;
}

const std::string &Habilidades::getDescripcion() const {
    return descripcion;
}

void Habilidades::setDescripcion(const std::string &descripcion) {
    Habilidades::descripcion = descripcion;
}

int Habilidades::getDanio() const {
    return danio;
}

void Habilidades::setDanio(int danio) {
    Habilidades::danio = danio;
}

int Habilidades::getNivel() const {
    return nivel;
}

void Habilidades::setNivel(int nivel) {
    Habilidades::nivel = nivel;
}

const std::string &Habilidades::getElemento() const {
    return elemento;
}

void Habilidades::setElemento(const std::string &elemento) {
    Habilidades::elemento = elemento;
}

bool Habilidades::isAoE() const {
    return AoE;
}

void Habilidades::setAoE(bool aoE) {
    AoE = aoE;
}
