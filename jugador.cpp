//
// Created by Thomas on 20-05-2024.
//

#include "jugador.h"

jugador::jugador(const std::string &nombre, int nivel, int experiencia, int oro, int puntosSalud, int puntosHabilidad,
                 int fuerza, int magia, int velocidad, int suerte, const std::vector<objetos *> &mochila,
                 const std::vector<habilidades *> &skills, habitacion *habitacionActual) : nombre(nombre), nivel(nivel),
                                                                                           experiencia(experiencia),
                                                                                           oro(oro),
                                                                                           puntosSalud(puntosSalud),
                                                                                           puntosHabilidad(
                                                                                                   puntosHabilidad),
                                                                                           fuerza(fuerza), magia(magia),
                                                                                           velocidad(velocidad),
                                                                                           suerte(suerte),
                                                                                           mochila(mochila),
                                                                                           skills(skills),
                                                                                           habitacionActual(
                                                                                                   habitacionActual) {}

jugador::~jugador() {

}

const std::string &jugador::getNombre() const {
    return nombre;
}

void jugador::setNombre(const std::string &nombre) {
    jugador::nombre = nombre;
}

int jugador::getNivel() const {
    return nivel;
}

void jugador::setNivel(int nivel) {
    jugador::nivel = nivel;
}

int jugador::getExperiencia() const {
    return experiencia;
}

void jugador::setExperiencia(int experiencia) {
    jugador::experiencia = experiencia;
}

int jugador::getOro() const {
    return oro;
}

void jugador::setOro(int oro) {
    jugador::oro = oro;
}

int jugador::getPuntosSalud() const {
    return puntosSalud;
}

void jugador::setPuntosSalud(int puntosSalud) {
    jugador::puntosSalud = puntosSalud;
}

int jugador::getPuntosHabilidad() const {
    return puntosHabilidad;
}

void jugador::setPuntosHabilidad(int puntosHabilidad) {
    jugador::puntosHabilidad = puntosHabilidad;
}

int jugador::getFuerza() const {
    return fuerza;
}

void jugador::setFuerza(int fuerza) {
    jugador::fuerza = fuerza;
}

int jugador::getMagia() const {
    return magia;
}

void jugador::setMagia(int magia) {
    jugador::magia = magia;
}

int jugador::getVelocidad() const {
    return velocidad;
}

void jugador::setVelocidad(int velocidad) {
    jugador::velocidad = velocidad;
}

int jugador::getSuerte() const {
    return suerte;
}

void jugador::setSuerte(int suerte) {
    jugador::suerte = suerte;
}

const std::vector<objetos *> &jugador::getMochila() const {
    return mochila;
}

void jugador::setMochila(const std::vector<objetos *> &mochila) {
    jugador::mochila = mochila;
}

const std::vector<habilidades *> &jugador::getSkills() const {
    return skills;
}

void jugador::setSkills(const std::vector<habilidades *> &skills) {
    jugador::skills = skills;
}

habitacion *jugador::getHabitacionActual() const {
    return habitacionActual;
}

void jugador::setHabitacionActual(habitacion *habitacionActual) {
    jugador::habitacionActual = habitacionActual;
}






