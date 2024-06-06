#ifndef TALLER2_ED_JUGADOR_H
#define TALLER2_ED_JUGADOR_H
#include <string>
#include <iostream>
#include <vector>
#include "objetos.h"
#include "habilidades.h"
#include "habitacion.h"
#include "nodoHabitacion.h"
#include "cstdlib"

class jugador {

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
    std::vector<objetos*> mochila;
    std::vector<habilidades*> skills;
    nodoHabitacion* habitacionActual;
    std::vector<float> salasVisitadas;

public:

    /**
     * Constructor del jugador
     * @param nombre nombre del jugador
     * @param nivel nivel del jugador
     * @param experiencia experiencia del jugador
     * @param oro oro del jugador
     * @param puntosSalud HP del jugador
     * @param puntosHabilidad puntos de habilidad del jugador
     * @param fuerza fuerza del jugador
     * @param magia magia del jugador
     * @param velocidad velocidad del jugador
     * @param suerte suerte
     * @param armaDmg daño de arma del jugador
     * @param habilidadDmg daño de habilidad del jugador
     * @param mochila objetos del jugador
     * @param skills habilidades del jugador
     * @param habitacionActual habitacion en la que se encuentra el jugador
     * @param salasVisitadas
     */
    jugador(const std::string &nombre, int nivel, int experiencia, int oro, int puntosSalud, int puntosHabilidad,
            int fuerza, int magia, int velocidad, int suerte, int armaDmg, int habilidadDmg,
            const std::vector<objetos *> &mochila, const std::vector<habilidades *> &skills,
            nodoHabitacion *habitacionActual, const std::vector<float> &salasVisitadas);

    /**
     * Destructor del jugador
     */
    ~jugador();

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

    const std::vector<objetos *> &getMochila() const;

    void setMochila(const std::vector<objetos *> &mochila);

    const std::vector<habilidades *> &getSkills() const;

    void setSkills(const std::vector<habilidades *> &skills);

    int getArmaDmg() const;

    void setArmaDmg(int armaDmg);

    const std::vector<float> &getSalasVisitadas() const;

    void setSalasVisitadas(const std::vector<float> &salasVisitadas);

    nodoHabitacion *getHabitacionActual() const;

    int getHabilidadDmg() const;

    void setHabilidadDmg(int habilidadDmg);

    void setHabitacionActual(nodoHabitacion *habitacionActual);

    /**
     * Metodo que selecciona la habitacion izquierda
     * @param habitacionActual habitacion actual del jugador
     * @return true si eligio izquierda, false si eligio derecha
     */
    bool elegirIzq(nodoHabitacion* habitacionActual);

    /**
     * Metodo que selecciona la habitacion derecha
     * @param habitacionActual habitacion actual del jugador
     * @return true si eligio derecha, false si eligio izquierda
     */
    bool elegirDer(nodoHabitacion* habitacionActual);

    /**
     * Metodo que agrega el id de las sala visitadas por el jugador
     * @param salasVisitadas salas ya visitadas
     */
    void salaVisitada(std::vector<float> salasVisitadas);

    /**
     * Metodo que imprime un arreglo con las id de las salas visitadas con anterioridad
     * @param salasVisitadas salas ya visitadas
     */
    void verMapa(std::vector<float> salasVisitadas);

    /**
     * Metodo que sube el nivel del jugador
     * @return true si subio de nivel o false si no
     */
    bool subirNivel();

    /**
     * Metodo que recupera puntos de habilidad
     * @param habitacionActual habitacion actual donde esta el jugador
     */
    void recuperarPH(nodoHabitacion* habitacionActual);

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
     * @param DMG daño fisico del jugador
     * @return true si es un critico o false si no
     */
    bool critico(int DMG);









};


#endif //TALLER2_ED_JUGADOR_H
