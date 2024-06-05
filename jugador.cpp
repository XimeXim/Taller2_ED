//
// Created by Thomas on 20-05-2024.
//

#include "jugador.h"
using namespace std;

jugador::jugador(const std::string &nombre, int nivel, int experiencia, int oro, int puntosSalud, int puntosHabilidad,
                 int fuerza, int magia, int velocidad, int suerte, const std::vector<objetos *> &mochila,
                 const std::vector<habilidades *> &skills, nodoHabitacion *habitacionActual,
                 const std::vector<float> &salasVisitadas) : nombre(nombre), nivel(nivel), experiencia(experiencia),
                                                             oro(oro), puntosSalud(puntosSalud),
                                                             puntosHabilidad(puntosHabilidad), fuerza(fuerza),
                                                             magia(magia), velocidad(velocidad), suerte(suerte),
                                                             mochila(mochila), skills(skills),
                                                             habitacionActual(habitacionActual),
                                                             salasVisitadas(salasVisitadas) {}

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

nodoHabitacion *jugador::getHabitacionActual() const {
    return habitacionActual;
}

void jugador::setHabitacionActual(nodoHabitacion *habitacionActual) {
    jugador::habitacionActual = habitacionActual;
}

bool jugador::elegirIzq(nodoHabitacion *habitacionActual) {

    if (habitacionActual->getHabIzquierda() != nullptr){
        setHabitacionActual(habitacionActual->getHabIzquierda());
        return true;
    }
    return false;
}

bool jugador::elegirDer(nodoHabitacion *habitacionActual) {

    if (habitacionActual->getHabDerecha() != nullptr){
        setHabitacionActual(habitacionActual->getHabDerecha());
        return true;
    }
    return false;
}

void jugador::salaVisitada() {

    float idSalaVisitada = this->getHabitacionActual()->getIdNodoSala();
    salasVisitadas.push_back(idSalaVisitada);
}

void jugador::verMapa() {

    nodoHabitacion* salaVisitada;
    int largo = salasVisitadas.size();
    int aux = 0;
    cout << "Las habitaciones visitadas son: "<< endl;
    while (aux < largo){
        cout << salasVisitadas[aux] << ", " << endl;
        aux++;
    }
}

bool jugador::subirNivel() {

    int experiencia = this->getExperiencia();
    int nivel = this->getNivel();
    int factorEXP = 5;
    int expRequerida = (nivel ^ 2) * factorEXP;
    int expRestante = experiencia - expRequerida;
    int vida = this->getPuntosSalud();
    if (experiencia >= expRequerida){
        nivel = nivel + 1;
        this->setExperiencia(expRestante);
        this->setPuntosSalud(vida + 10);
        return true;
    }
    return false;
}

void jugador::recuperarPH(nodoHabitacion* habitacionActual) {

    int puntosHab = this->getPuntosHabilidad();
    if (elegirDer(habitacionActual) || elegirIzq(habitacionActual)){
        puntosHab = puntosHab + 10;
        if (puntosHab > 50){
            puntosHab = 50;
        }
    }
}
















