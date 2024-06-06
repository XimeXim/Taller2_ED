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

public:

    //DOCUMENTAR
    /**
     * Constructor 1 de la habitacion
     * @param enemigo1 enemigo 1 de la habitacion
     * @param enemigo2 enemigo 2 de la habitacion
     * @param enemigo3 enemigo 3 de la habitacion
     * @param enemigo4 enemigo 4 de la habitacion
     * @param enemigo5 enemigo 5 de la habitacion
     * @param cantObjetos cantidad de objetos presentes en la habotacion
     * @param cantBolsasOro cantidad de bolsas de oro de la habitacion
     * @param peligro peligro de la habitacion
     * @param salaBoss si la habotacion es la sala del boss
     * @param tienda si la habitacion es una tienda
     */
    habitacion(int enemigo1, int enemigo2, int enemigo3, int enemigo4, int enemigo5, int cantObjetos, int cantBolsasOro,
               int peligro, bool salaBoss, bool tienda);

    /**
     * Constructor 2 de la habotacion
     * @param enemigo1 enemigo 1 de la habitacion
     * @param enemigo2 enemigo 2 de la habitacion
     * @param enemigo3 enemigo 3 de la habitacion
     * @param enemigo4 enemigo 4 de la habitacion
     * @param enemigo5 enemigo 5 de la habitacion
     * @param cantObjetos cantidad de objetos presentes en la habotacion
     * @param cantBolsasOro cantidad de bolsas de oro de la habitacion
     * @param peligro peligro de la habitacion
     */
    habitacion(int enemigo1, int enemigo2, int enemigo3, int enemigo4, int enemigo5, int cantObjetos, int cantBolsasOro,
               int peligro);

    /**
     * Destructor de la habitacion
     */
    ~habitacion();

    //METODOS GET'S & SET'S
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
};


#endif //TALLER2_ED_HABITACION_H
