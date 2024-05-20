#ifndef TALLER2_ED_JUGADOR_H
#define TALLER2_ED_JUGADOR_H
#include <string>
#include <iostream>
#include <vector>

class jugador {


private:

    //DATOS DEL JUGADOR
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
    std::vector<std::string> mochila;
    std::vector<std::string> habilidades;

public:

    //DOCUMENTAR
    jugador(const std::string &nombre, int nivel, int experiencia, int oro, int puntosSalud, int puntosHabilidad,
            int fuerza, int magia, int velocidad, int suerte, const std::vector<std::string> &mochila,
            const std::vector<std::string> &habilidades);

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

    const std::vector<std::string> &getMochila() const;

    void setMochila(const std::vector<std::string> &mochila);

    const std::vector<std::string> &getHabilidades() const;

    void setHabilidades(const std::vector<std::string> &habilidades);


};


#endif //TALLER2_ED_JUGADOR_H
