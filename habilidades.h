#ifndef TALLER2_ED_HABILIDADES_H
#define TALLER2_ED_HABILIDADES_H
#include <string>
#include <iostream>
#include <vector>


class habilidades {

private:

    //PARAMETROS DE HABILIDAD
    std::string nombre;
    std::string descripcion;
    int danio;
    int nivel;
    std::string elemento;
    bool AoE;

public:

    //DOCUMENTAR
    habilidades(const std::string & string, const std::string & descripcion, int danio, int nivel, bool ao_e);

    virtual ~habilidades();

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
