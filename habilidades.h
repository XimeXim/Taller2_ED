#ifndef TALLER2_ED_HABILIDADES_H
#define TALLER2_ED_HABILIDADES_H
#include <string>
#include <iostream>
#include <vector>


class Habilidades {

private:

    //PARAMETROS DE HABILIDAD
    std::string nombre;
    std::string descripcion;
    int danio;
    int nivel;
    std::string elemento;
    bool AoE;

public:


    /**
     * Constructor de la clase Habilidades
     * @param nombre nombre de la habilidad
     * @param descripcion descripcion de la habilidad
     * @param danio daño que provoca la habilidad
     * @param nivel nivel en el que se aprende la habilidad
     * @param elemento elemento de la habilidad
     * @param ao_e efecto en area de la habilidad
     */
    Habilidades(const std::string &nombre, const std::string &descripcion, int danio, int nivel, std::string elemento,
                bool ao_e);

    /**
     * Constructor vacio de la clase Habilidades
     */
    Habilidades();

    /**
     * Destructor de la clase Habilidades
     */
    ~Habilidades();

    //METODOS GET'S & SET'S
    const std::string &getNombre() const;

    void setNombre(const std::string &nombre);

    const std::string &getDescripcion() const;

    void setDescripcion(const std::string &descripcion);

    int getDanio() const;

    void setDanio(int danio);

    int getNivel() const;

    void setNivel(int nivel);

    const std::string &getElemento() const;

    void setElemento(const std::string &elemento);

    bool isAoE() const;

    void setAoE(bool aoE);



};


#endif //TALLER2_ED_HABILIDADES_H
