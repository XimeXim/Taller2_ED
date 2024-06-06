//
// Created by Thomas on 21-05-2024.
//

#ifndef TALLER2_ED_NODOHABITACION_H
#define TALLER2_ED_NODOHABITACION_H
#include "habitacion.h"
#include "algorithm"



class nodoHabitacion {

private:

    //PARAMETROS DE NODO HABITACION
    habitacion sala;
    nodoHabitacion* habIzquierda;
    nodoHabitacion* habDerecha;
    int alturaNodo;
    int factorBalance;
    float idNodoSala;

public:

    //DOCUMENTAR
    /**
     * Constructor de el nodo habitacion
     * @param sala sala que almacena el nodo
     * @param habIzquierda habitacion a la izquierda
     * @param habDerecha habitacion a la derecha
     * @param alturaNodo altura del nodo
     * @param factorBalance factor balance del nodo
     * @param idNodoSala id de la sala
     */
    nodoHabitacion(const habitacion &sala, nodoHabitacion *habIzquierda, nodoHabitacion *habDerecha, int alturaNodo,
                   int factorBalance, float idNodoSala);

    /**
     * Constructor de la habitacion segun su habitacion
     * @param habitacion habotacion que almacena el nodo
     */
    nodoHabitacion(const habitacion &habitacion);

    /**
     * Destructor de la clase nodoHabitacion
     */
    ~nodoHabitacion();

    //METODOS GET'S & SET'S
    const habitacion &getSala() const;

    void setSala(const habitacion &sala);

    nodoHabitacion *getHabIzquierda() const;

    void setHabIzquierda(nodoHabitacion *habIzquierda);

    nodoHabitacion *getHabDerecha() const;

    void setHabDerecha(nodoHabitacion *habDerecha);

    int getAlturaNodo() const;

    void setAlturaNodo(int alturaNodo);

    int getFactorBalance() const;

    void setFactorBalance(int factorBalance);

    float getIdNodoSala() const;

    void setIdNodoSala(float idNodoSala);

    /**
     * Metodo que calcula la altura del nodo
     * @return la altura del nodo
     */
    int calcularAltNodo();

    /**
     * Metodo retorna la altura del nodo
     * @param nodo nodo del que retornará su altura
     * @return la altura del nodo
     */
    int altNodoHab(nodoHabitacion* nodo);

    /**
     * Metodo que asigna la id de la habitacion
     * @param peligroSala peligro de la sala
     * @return la id de la sala
     */
    float idNodoHabitacion(int peligroSala);




};


#endif //TALLER2_ED_NODOHABITACION_H
