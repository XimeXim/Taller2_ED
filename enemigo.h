#ifndef TALLER2_ED_ENEMIGO_H
#define TALLER2_ED_ENEMIGO_H
#include <string>
#include <iostream>
#include <vector>
#include "habilidades.h"


class enemigo {


private:

    //PARAMETROS DE ENEMIGO
    std::string nombre;
    int nivel;
    int oroSoltado;
    int puntosHabilidad;
    int vida;
    int feurza;
    int magia;
    int velocidad;
    int suerte;
    std::vector<habilidades*> skillsEnemigo;
    std::string debilidad;

public:

    //DOCUMENTAR
    enemigo(const std::string &nombre, int nivel, int oroSoltado, int puntosHabilidad, int vida, int feurza, int magia,
            int velocidad, int suerte, const std::vector<habilidades *> &skillsEnemigo, const std::string &debilidad);

    virtual ~enemigo();

    const std::string &getNombre() const;

    void setNombre(const std::string &nombre);

    int getNivel() const;

    void setNivel(int nivel);

    int getOroSoltado() const;

    void setOroSoltado(int oroSoltado);

    int getPuntosHabilidad() const;

    void setPuntosHabilidad(int puntosHabilidad);

    int getVida() const;

    void setVida(int vida);

    int getFeurza() const;

    void setFeurza(int feurza);

    int getMagia() const;

    void setMagia(int magia);

    int getVelocidad() const;

    void setVelocidad(int velocidad);

    int getSuerte() const;

    void setSuerte(int suerte);

    const std::vector<habilidades *> &getSkillsEnemigo() const;

    void setSkillsEnemigo(const std::vector<habilidades *> &skillsEnemigo);

    const std::string &getDebilidad() const;

    void setDebilidad(const std::string &debilidad);

};


#endif //TALLER2_ED_ENEMIGO_H
