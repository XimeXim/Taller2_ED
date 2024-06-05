#ifndef TALLER2_ED_JUGADOR_H
#define TALLER2_ED_JUGADOR_H
#include <string>
#include <iostream>
#include <vector>
#include "objetos.h"
#include "habilidades.h"
#include "habitacion.h"
#include "nodoHabitacion.h"

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
    std::vector<objetos*> mochila;
    std::vector<habilidades*> skills;
    nodoHabitacion* habitacionActual;
    std::vector<float> salasVisitadas;

public:

    //DOCUMENTAR
    jugador(const std::string &nombre, int nivel, int experiencia, int oro, int puntosSalud, int puntosHabilidad,
            int fuerza, int magia, int velocidad, int suerte, const std::vector<objetos *> &mochila,
            const std::vector<habilidades *> &skills, nodoHabitacion *habitacionActual,
            const std::vector<float> &salasVisitadas);

    virtual ~jugador();

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

    nodoHabitacion *getHabitacionActual() const;

    void setHabitacionActual(nodoHabitacion *habitacionActual);

    bool elegirIzq(nodoHabitacion* habitacionActual);

    bool elegirDer(nodoHabitacion* habitacionActual);

    void salaVisitada();

    void verMapa();

    bool subirNivel();

    void recuperarPH(nodoHabitacion* habitacionActual);







};


#endif //TALLER2_ED_JUGADOR_H
