//
// Created by Thomas on 20-05-2024.
//

#include "Jugador.h"
using namespace std;

Jugador::Jugador(const string &nombre, int nivel, int experiencia, int oro, int puntosSalud, int puntosHabilidad,
                 int fuerza, int magia, int velocidad, int suerte, int armaDmg, int habilidadDmg,
                 const vector<Objetos *> &mochila, const vector<Habilidades *> &skills,
                 NodoHabitacion *habitacionActual, const vector<float> &salasVisitadas) : nombre(nombre), nivel(nivel),
                                                                                          experiencia(experiencia),
                                                                                          oro(oro),
                                                                                          puntosSalud(puntosSalud),
                                                                                          puntosHabilidad(
                                                                                                  puntosHabilidad),
                                                                                          fuerza(fuerza), magia(magia),
                                                                                          velocidad(velocidad),
                                                                                          suerte(suerte),
                                                                                          armaDMG(armaDmg),
                                                                                          habilidadDMG(habilidadDmg),
                                                                                          mochila(mochila),
                                                                                          skills(skills),
                                                                                          habitacionActual(
                                                                                                  habitacionActual),
                                                                                          salasVisitadas(
                                                                                                  salasVisitadas) {}

Jugador::~Jugador() {
}

const std::string &Jugador::getNombre() const {
    return nombre;
}

void Jugador::setNombre(const std::string &nombre) {
    Jugador::nombre = nombre;
}

int Jugador::getNivel() const {
    return nivel;
}

void Jugador::setNivel(int nivel) {
    Jugador::nivel = nivel;
}

int Jugador::getExperiencia() const {
    return experiencia;
}

void Jugador::setExperiencia(int experiencia) {
    Jugador::experiencia = experiencia;
}

int Jugador::getOro() const {
    return oro;
}

void Jugador::setOro(int oro) {
    Jugador::oro = oro;
}

int Jugador::getPuntosSalud() const {
    return puntosSalud;
}

void Jugador::setPuntosSalud(int puntosSalud) {
    Jugador::puntosSalud = puntosSalud;
}

int Jugador::getPuntosHabilidad() const {
    return puntosHabilidad;
}

void Jugador::setPuntosHabilidad(int puntosHabilidad) {
    Jugador::puntosHabilidad = puntosHabilidad;
}

int Jugador::getFuerza() const {
    return fuerza;
}

void Jugador::setFuerza(int fuerza) {
    Jugador::fuerza = fuerza;
}

int Jugador::getMagia() const {
    return magia;
}

void Jugador::setMagia(int magia) {
    Jugador::magia = magia;
}

int Jugador::getVelocidad() const {
    return velocidad;
}

void Jugador::setVelocidad(int velocidad) {
    Jugador::velocidad = velocidad;
}

int Jugador::getSuerte() const {
    return suerte;
}

void Jugador::setSuerte(int suerte) {
    Jugador::suerte = suerte;
}

const std::vector<Objetos *> &Jugador::getMochila() const {
    return mochila;
}

void Jugador::setMochila(const std::vector<Objetos *> &mochila) {
    Jugador::mochila = mochila;
}

const std::vector<Habilidades *> &Jugador::getSkills() const {
    return skills;
}

void Jugador::setSkills(const std::vector<Habilidades *> &skills) {
    Jugador::skills = skills;
}

NodoHabitacion *Jugador::getHabitacionActual() const {
    return habitacionActual;
}

void Jugador::setHabitacionActual(NodoHabitacion *habitacionActual) {
    Jugador::habitacionActual = habitacionActual;
}

int Jugador::getArmaDmg() const {
    return armaDMG;
}

void Jugador::setArmaDmg(int armaDmg) {
    armaDMG = armaDmg;
}

const vector<float> &Jugador::getSalasVisitadas() const {
    return salasVisitadas;
}

void Jugador::setSalasVisitadas(const vector<float> &salasVisitadas) {
    Jugador::salasVisitadas = salasVisitadas;
}

int Jugador::getHabilidadDmg() const {
    return habilidadDMG;
}

void Jugador::setHabilidadDmg(int habilidadDmg) {
    habilidadDMG = habilidadDmg;
}

bool Jugador::elegirIzq(NodoHabitacion *habitacionActual) {

    if (habitacionActual->getHabIzquierda() != nullptr){
        setHabitacionActual(habitacionActual->getHabIzquierda());
        return true;
    }
    return false;
}

bool Jugador::elegirDer(NodoHabitacion *habitacionActual) {

    if (habitacionActual->getHabDerecha() != nullptr){
        setHabitacionActual(habitacionActual->getHabDerecha());
        return true;
    }
    return false;
}

void Jugador::salaVisitada(std::vector<float> salasVisitadas) {

    float idSalaVisitada = this->getHabitacionActual()->getIdNodoSala();
    salasVisitadas.push_back(idSalaVisitada);
}

void Jugador::verMapa(std::vector<float> salasVisitadas) {

    NodoHabitacion* salaVisitada;
    int largo = salasVisitadas.size();
    int aux = 0;
    cout << "Las habitaciones visitadas son: "<< endl;
    while (aux < largo){
        cout << salasVisitadas[aux] << ", " << endl;
        aux++;
    }
}

bool Jugador::subirNivel() {

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

void Jugador::recuperarPH(NodoHabitacion* habitacionActual) {

    int puntosHab = this->getPuntosHabilidad();
    if (elegirDer(habitacionActual) || elegirIzq(habitacionActual)){
        puntosHab = puntosHab + 10;
        if (puntosHab > 50){
            puntosHab = 50;
        }
    }
}

int Jugador::combatDMG() {

    int dmgArma = this->getArmaDmg();
    int STMA = this->getFuerza();
    float FD = 1.5;
    int combatDMG = dmgArma + (STMA * FD);
    if (critico(combatDMG)){
        combatDMG = combatDMG * 2;
    }
    return combatDMG;
}

int Jugador::skillDMG() {

    int dmgHabilidad = this->getHabilidadDmg();
    int STMA = this->getMagia();
    float FD = 1.5;
    int magicDMG = dmgHabilidad + (STMA * FD);
    return magicDMG;
}

bool Jugador::critico(int DMG) {

    srand(time(NULL));
    int critBase = 5;
    int suerte = this->getSuerte();
    float FC = 0.8;
    float probCritico = critBase + (suerte * FC);
    int randNum = rand() % 101;
    if (randNum <= probCritico){
        return true;
    }
    return false;
}































