//
// Created by Thomas on 20-05-2024.
//

#include "enemigo.h"

enemigo::enemigo(const std::string &nombre, int nivel, int oroSoltado, int puntosHabilidad, int vida, int feurza,
                 int magia, int velocidad, int suerte, const std::vector<habilidades *> &skillsEnemigo,
                 const std::string &debilidad) : nombre(nombre), nivel(nivel), oroSoltado(oroSoltado),
                                                 puntosHabilidad(puntosHabilidad), vida(vida), feurza(feurza),
                                                 magia(magia), velocidad(velocidad), suerte(suerte),
                                                 skillsEnemigo(skillsEnemigo), debilidad(debilidad) {}

enemigo::~enemigo() {

}

const std::string &enemigo::getNombre() const {
    return nombre;
}

void enemigo::setNombre(const std::string &nombre) {
    enemigo::nombre = nombre;
}

int enemigo::getNivel() const {
    return nivel;
}

void enemigo::setNivel(int nivel) {
    enemigo::nivel = nivel;
}

int enemigo::getOroSoltado() const {
    return oroSoltado;
}

void enemigo::setOroSoltado(int oroSoltado) {
    enemigo::oroSoltado = oroSoltado;
}

int enemigo::getPuntosHabilidad() const {
    return puntosHabilidad;
}

void enemigo::setPuntosHabilidad(int puntosHabilidad) {
    enemigo::puntosHabilidad = puntosHabilidad;
}

int enemigo::getVida() const {
    return vida;
}

void enemigo::setVida(int vida) {
    enemigo::vida = vida;
}

int enemigo::getFeurza() const {
    return feurza;
}

void enemigo::setFeurza(int feurza) {
    enemigo::feurza = feurza;
}

int enemigo::getMagia() const {
    return magia;
}

void enemigo::setMagia(int magia) {
    enemigo::magia = magia;
}

int enemigo::getVelocidad() const {
    return velocidad;
}

void enemigo::setVelocidad(int velocidad) {
    enemigo::velocidad = velocidad;
}

int enemigo::getSuerte() const {
    return suerte;
}

void enemigo::setSuerte(int suerte) {
    enemigo::suerte = suerte;
}

const std::vector<habilidades *> &enemigo::getSkillsEnemigo() const {
    return skillsEnemigo;
}

void enemigo::setSkillsEnemigo(const std::vector<habilidades *> &skillsEnemigo) {
    enemigo::skillsEnemigo = skillsEnemigo;
}

const std::string &enemigo::getDebilidad() const {
    return debilidad;
}

void enemigo::setDebilidad(const std::string &debilidad) {
    enemigo::debilidad = debilidad;
}
