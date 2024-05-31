//
// Created by Thomas on 21-05-2024.
//

#ifndef TALLER2_ED_HABITACION_H
#define TALLER2_ED_HABITACION_H


class habitacion {

private:

    //PARAMETROS DE HABITACION
    int enemigo1;
    int enemigo2;
    int enemigo3;
    int enemigo4;
    int enemigo5;
    int cantObjetos;
    int cantBolsasOro;
    int peligro;
    bool salaBoss;
    bool tienda;
    int idHabitacion;

public:

    //DOCUMENTAR
    habitacion(int enemigo1, int enemigo2, int enemigo3, int enemigo4, int enemigo5, int cantObjetos, int cantBolsasOro,
               int peligro, bool salaBoss, bool tienda, int idHabitacion);

    virtual ~habitacion();

    int getEnemigo1() const;

    void setEnemigo1(int enemigo1);

    int getEnemigo2() const;

    void setEnemigo2(int enemigo2);

    int getEnemigo3() const;

    void setEnemigo3(int enemigo3);

    int getEnemigo4() const;

    void setEnemigo4(int enemigo4);

    int getEnemigo5() const;

    void setEnemigo5(int enemigo5);

    int getPeligro() const;

    void setPeligro(int peligro);

    int getCantBolsasOro() const;

    void setCantBolsasOro(int cantBolsasOro);

    int getCantObjetos() const;

    void setCantObjetos(int cantObjetos);

    bool isSalaBoss() const;

    void setSalaBoss(bool salaBoss);

    bool isTienda() const;

    void setTienda(bool tienda);

    int getIdHabitacion() const;

    void setIdHabitacion(int idHabitacion);
};


#endif //TALLER2_ED_HABITACION_H
