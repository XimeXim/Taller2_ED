#ifndef TALLER2_ED_OBJETOS_H
#define TALLER2_ED_OBJETOS_H
#include <string>
#include <iostream>
#include <vector>


class Objetos {

private:

    //PARAMETROS DE OBJETO
    std::string nombre;
    std::string descripcion;
    std::string efectoSecundario;
    int coste;
    std::string estadistica;
    int valorMejora;

public:

    /**
     * constructor de la clase objeto
     * @param nombre nombre del objeto
     * @param descripcion descripcion del objeto
     * @param efectoSecundario efecto secundario del objeto
     * @param coste coste en oro del objeto
     * @param estadistica estadisticas del objeto
     * @param valorMejora mejoras que da el objeto
     */
    Objetos(const std::string &nombre, const std::string &descripcion, const std::string &efectoSecundario, int coste,
            const std::string &estadistica, int valorMejora);

    /**
     * Destructor de la clase objeto
     */
    ~Objetos();

    //METODOS GET'S & SET'S
    const std::string &getNombre() const;

    void setNombre(const std::string &nombre);

    const std::string &getDescripcion() const;

    void setDescripcion(const std::string &descripcion);

    const std::string &getEfectoSecundario() const;

    void setEfectoSecundario(const std::string &efectoSecundario);

    int getCoste() const;

    void setCoste(int coste);

    const std::string &getEstadistica() const;

    void setEstadistica(const std::string &estadistica);

    int getValorMejora() const;

    void setValorMejora(int valorMejora);
};


#endif //TALLER2_ED_OBJETOS_H
