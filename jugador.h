#ifndef TALLER2_ED_JUGADOR_H
#define TALLER2_ED_JUGADOR_H
#include <string>
#include <iostream>
#include <vector>
#include "Objetos.h"
#include "Habilidades.h"
#include "Habitacion.h"
#include "NodoHabitacion.h"
#include "cstdlib"

class Jugador {

private:

    //PARAMETROS DEL JUGADOR
    std::string nombre;
    int nivel;
    int experiencia;
    int oro;
    int puntosSalud;
    int puntosHabilidad;
    int fuerza;
    int magia;
    int velocidad;
    int suerte;
    int armaDMG;
    int habilidadDMG;
    std::vector<Objetos*> mochila;
    std::vector<Habilidades*> skills;
    NodoHabitacion* habitacionActual;
    std::vector<float> salasVisitadas;

public:

    /**
     * Constructor del Jugador
     * @param nombre nombre del Jugador
     * @param nivel nivel del Jugador
     * @param experiencia experiencia del Jugador
     * @param oro oro del Jugador
     * @param puntosSalud HP del Jugador
     * @param puntosHabilidad puntos de habilidad del Jugador
     * @param fuerza fuerza del Jugador
     * @param magia magia del Jugador
     * @param velocidad velocidad del Jugador
     * @param suerte suerte
     * @param armaDmg daño de arma del Jugador
     * @param habilidadDmg daño de habilidad del Jugador
     * @param mochila Objetos del Jugador
     * @param skills Habilidades del Jugador
     * @param habitacionActual Habitacion en la que se encuentra el Jugador
     * @param salasVisitadas
     */
    Jugador(const std::string &nombre, int nivel, int experiencia, int oro, int puntosSalud, int puntosHabilidad,
            int fuerza, int magia, int velocidad, int suerte, int armaDmg, int habilidadDmg,
            const std::vector<Objetos *> &mochila, const std::vector<Habilidades *> &skills,
            NodoHabitacion *habitacionActual, const std::vector<float> &salasVisitadas);

    Jugador();

    /**
     * Destructor del Jugador
     */
    ~Jugador();

    //METODOS GET'S & SET'S
    const std::string &getNombre() const;

    void setNombre(const std::string &nombre);

    int getNivel() const;

    void setNivel(int nivel);

    int getExperiencia() const;

    void setExperiencia(int experiencia);

    int getOro() const;

    void setOro(int oro);

    int getPuntosSalud() const;

    void setPuntosSalud(int puntosSalud);

    int getPuntosHabilidad() const;

    void setPuntosHabilidad(int puntosHabilidad);

    int getFuerza() const;

    void setFuerza(int fuerza);

    int getMagia() const;

    void setMagia(int magia);

    int getVelocidad() const;

    void setVelocidad(int velocidad);

    int getSuerte() const;

    void setSuerte(int suerte);

    const std::vector<Objetos *> &getMochila() const;

    void setMochila(const std::vector<Objetos *> &mochila);

    const std::vector<Habilidades *> &getSkills() const;

    void setSkills(const std::vector<Habilidades *> &skills);

    int getArmaDmg() const;

    void setArmaDmg(int armaDmg);

    const std::vector<float> &getSalasVisitadas() const;

    void setSalasVisitadas(const std::vector<float> &salasVisitadas);

    NodoHabitacion *getHabitacionActual() const;

    int getHabilidadDmg() const;

    void setHabilidadDmg(int habilidadDmg);

    void setHabitacionActual(NodoHabitacion *habitacionActual);

    /**
     * Metodo que selecciona la Habitacion izquierda
     * @param habitacionActual Habitacion actual del Jugador
     * @return true si eligio izquierda, false si eligio derecha
     */
    bool elegirIzq(NodoHabitacion* habitacionActual);

    /**
     * Metodo que selecciona la Habitacion derecha
     * @param habitacionActual Habitacion actual del Jugador
     * @return true si eligio derecha, false si eligio izquierda
     */
    bool elegirDer(NodoHabitacion* habitacionActual);

    /**
     * Metodo que agrega el id de las sala visitadas por el Jugador
     * @param salasVisitadas salas ya visitadas
     */
    void salaVisitada();

    /**
     * Metodo que imprime un arreglo con las id de las salas visitadas con anterioridad
     * @param salasVisitadas salas ya visitadas
     */
    void verMapa();

    /**
     * Metodo que sube el nivel del Jugador
     * @return true si subio de nivel o false si no
     */
    bool subirNivel();

    /**
     * Metodo que recupera puntos de habilidad
     * @param habitacionActual Habitacion actual donde esta el Jugador
     */
    void recuperarPH(NodoHabitacion* habitacionActual);

    /**
     * Metodo que calcula el daño de combate fisico
     * @return el valor del daño fisico
     */
    int combatDMG();

    /**
     * Metodo que calcula el daño de combate magico
     * @return el valor del daño magico
     */
    int skillDMG();

    /**
     * Metodo que calcula si el ataque es critico o no
     * @param DMG daño fisico del Jugador
     * @return true si es un critico o false si no
     */
    bool critico(int DMG);




};


#endif //TALLER2_ED_JUGADOR_H
