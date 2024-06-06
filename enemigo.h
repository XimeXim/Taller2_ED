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
    std::string debilidad;
    std::vector<habilidades*> skillsEnemigo;

public:

    /**
     * Constructor de la clase enemigo
     * @param nombre nombre del enemigo
     * @param nivel nivel del enemigo
     * @param oroSoltado oro que suelta el enemigo al ser derrotado
     * @param puntosHabilidad puntos de habilidad del enemigo
     * @param vida vida del enemigo
     * @param feurza fuerza que posee el enemigo
     * @param magia magia que posee el enemigo
     * @param velocidad velocidad del enemigo
     * @param suerte suerte del enemigo
     * @param debilidad debilidad del enemigo
     * @param skillsEnemigo habilidades del enemigo
     */
    enemigo(const std::string &nombre, int nivel, int oroSoltado, int puntosHabilidad, int vida, int feurza, int magia,
            int velocidad, int suerte, const std::string &debilidad, const std::vector<habilidades *> &skillsEnemigo);

    /**
     * Constructor de la clase enemigo
     * @param nombre nombre nombre del enemigo
     * @param nivel nivel nivel del enemigo
     * @param oroSoltado oroSoltado oro que suelta el enemigo al ser derrotado
     * @param vida vida del enemigo
     * @param feurza fuerza que posee el enemigo
     * @param magia magia del enemigo
     * @param velocidad velocidad del enemigo
     * @param suerte factor suerte del enemigo
     * @param debilidad debilidad del enemigo
     * @param skillsEnemigo lista con las habilidades del enemigo
     */
    enemigo(const std::string &nombre, int nivel, int oroSoltado, int vida, int feurza, int magia, int velocidad,
            int suerte, const std::string &debilidad, const std::vector<habilidades *> &skillsEnemigo);

    /**
     * Destructor del enemigo
     */
    ~enemigo();

    /**
     * Metodo que añade los enemigos a un arreglo de enemigos
     * @param enemy el enemigo
     */
    void addListaEnemigos(enemigo enemy);

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

    const std::vector<habilidades *> &getSkillsEnemigo() const;

    void setSkillsEnemigo(const std::vector<habilidades *> &skillsEnemigo);
};


#endif //TALLER2_ED_ENEMIGO_H
