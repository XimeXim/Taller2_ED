//
// Created by Thomas on 20-05-2024.
//

#include "Enemigo.h"

Enemigo::Enemigo(const std::string &nombre, int nivel, int oroSoltado, int puntosHabilidad, int vida, int feurza,
                 int magia, int velocidad, int suerte, const std::string &debilidad,
                 const std::vector<Habilidades *> &skillsEnemigo) : nombre(nombre), nivel(nivel),
                                                                    oroSoltado(oroSoltado),
                                                                    puntosHabilidad(puntosHabilidad), vida(vida),
                                                                    feurza(feurza), magia(magia), velocidad(velocidad),
                                                                    suerte(suerte), debilidad(debilidad),
                                                                    skillsEnemigo(skillsEnemigo) {}

Enemigo::Enemigo(const std::string &nombre, int nivel, int oroSoltado, int vida, int feurza,
                 int magia, int velocidad, int suerte, const std::string &debilidad,
                 const std::vector<Habilidades *> &skillsEnemigo) : nombre(nombre), nivel(nivel),
                                                                    oroSoltado(oroSoltado), vida(vida),
                                                                    feurza(feurza), magia(magia), velocidad(velocidad),
                                                                    suerte(suerte), debilidad(debilidad),
                                                                    skillsEnemigo(skillsEnemigo) {}

Enemigo::~Enemigo() {
}

const std::string &Enemigo::getNombre() const {
    return nombre;
}

void Enemigo::setNombre(const std::string &nombre) {
    Enemigo::nombre = nombre;
}

int Enemigo::getNivel() const {
    return nivel;
}

void Enemigo::setNivel(int nivel) {
    Enemigo::nivel = nivel;
}

int Enemigo::getOroSoltado() const {
    return oroSoltado;
}

void Enemigo::setOroSoltado(int oroSoltado) {
    Enemigo::oroSoltado = oroSoltado;
}

int Enemigo::getPuntosHabilidad() const {
    return puntosHabilidad;
}

void Enemigo::setPuntosHabilidad(int puntosHabilidad) {
    Enemigo::puntosHabilidad = puntosHabilidad;
}

int Enemigo::getVida() const {
    return vida;
}

void Enemigo::setVida(int vida) {
    Enemigo::vida = vida;
}

int Enemigo::getFeurza() const {
    return feurza;
}

void Enemigo::setFeurza(int feurza) {
    Enemigo::feurza = feurza;
}

int Enemigo::getMagia() const {
    return magia;
}

void Enemigo::setMagia(int magia) {
    Enemigo::magia = magia;
}

int Enemigo::getVelocidad() const {
    return velocidad;
}

void Enemigo::setVelocidad(int velocidad) {
    Enemigo::velocidad = velocidad;
}

int Enemigo::getSuerte() const {
    return suerte;
}

void Enemigo::setSuerte(int suerte) {
    Enemigo::suerte = suerte;
}

const std::vector<Habilidades *> &Enemigo::getSkillsEnemigo() const {
    return skillsEnemigo;
}

void Enemigo::setSkillsEnemigo(const std::vector<Habilidades *> &skillsEnemigo) {
    Enemigo::skillsEnemigo = skillsEnemigo;
}

void Enemigo::turnoATKEnemigo() {
//Enemigo ataca y se le resta al Jugador segun habilidad
}

const std::string &Enemigo::getDebilidad() const {
    return debilidad;
}

void Enemigo::setDebilidad(const std::string &debilidad) {
    Enemigo::debilidad = debilidad;
}


