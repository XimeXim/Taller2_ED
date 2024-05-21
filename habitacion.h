//
// Created by Thomas on 21-05-2024.
//

#ifndef TALLER2_ED_HABITACION_H
#define TALLER2_ED_HABITACION_H


class habitacion {

private:

    //PARAMETROS DE HABITACION
    int cantEnemigos;
    int cantBolsasOro;
    int cantObjetos;
    bool salaBoss;
    bool tienda;

public:

    //DOCUMENTAR
    habitacion(int cantEnemigos, int cantBolsasOro, int cantObjetos, bool salaBoss, bool tienda);

    virtual ~habitacion();

    int getCantEnemigos() const;

    void setCantEnemigos(int cantEnemigos);

    int getCantBolsasOro() const;

    void setCantBolsasOro(int cantBolsasOro);

    int getCantObjetos() const;

    void setCantObjetos(int cantObjetos);

    bool isSalaBoss() const;

    void setSalaBoss(bool salaBoss);

    bool isTienda() const;

    void setTienda(bool tienda);


};


#endif //TALLER2_ED_HABITACION_H
