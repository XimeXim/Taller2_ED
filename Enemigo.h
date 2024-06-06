#ifndef TALLER2_ED_ENEMIGO_H
#define TALLER2_ED_ENEMIGO_H
#include <string>
#include <iostream>
#include <vector>
#include "habilidades.h"


class Enemigo {


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
    std::string debilidad;
    std::vector<Habilidades*> skillsEnemigo;

public:

    /**
     * Constructor de la clase Enemigo
     * @param nombre nombre del Enemigo
     * @param nivel nivel del Enemigo
     * @param oroSoltado oro que suelta el Enemigo al ser derrotado
     * @param puntosHabilidad puntos de habilidad del Enemigo
     * @param vida vida del Enemigo
     * @param feurza fuerza que posee el Enemigo
     * @param magia magia que posee el Enemigo
     * @param velocidad velocidad del Enemigo
     * @param suerte suerte del Enemigo
     * @param debilidad debilidad del Enemigo
     * @param skillsEnemigo habilidades del Enemigo
     */
    Enemigo(const std::string &nombre, int nivel, int oroSoltado, int puntosHabilidad, int vida, int feurza, int magia,
            int velocidad, int suerte, const std::string &debilidad, const std::vector<Habilidades *> &skillsEnemigo);

    /**
     * Constructor de la clase Enemigo
     * @param nombre nombre nombre del Enemigo
     * @param nivel nivel nivel del Enemigo
     * @param oroSoltado oroSoltado oro que suelta el Enemigo al ser derrotado
     * @param vida vida del Enemigo
     * @param feurza fuerza que posee el Enemigo
     * @param magia magia del Enemigo
     * @param velocidad velocidad del Enemigo
     * @param suerte factor suerte del Enemigo
     * @param debilidad debilidad del Enemigo
     * @param skillsEnemigo lista con las habilidades del Enemigo
     */
    Enemigo(const std::string &nombre, int nivel, int oroSoltado, int vida, int feurza, int magia, int velocidad,
            int suerte, const std::string &debilidad, const std::vector<Habilidades *> &skillsEnemigo);

    /**
     * Destructor del Enemigo
     */
    ~Enemigo();

    /**
     * Metodo que añade los enemigos a un arreglo de enemigos
     * @param enemy el Enemigo
     */
    void addListaEnemigos(Enemigo enemy);

    //METODOS GET'S & SET'S
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

    const std::string &getDebilidad() const;

    void setDebilidad(const std::string &debilidad);

    const std::vector<Habilidades *> &getSkillsEnemigo() const;

    void setSkillsEnemigo(const std::vector<Habilidades *> &skillsEnemigo);

    void turnoATKEnemigo();
};


#endif //TALLER2_ED_ENEMIGO_H
