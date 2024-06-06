//
// Created by Thomas on 21-05-2024.
//

#ifndef TALLER2_ED_NODOHABITACION_H
#define TALLER2_ED_NODOHABITACION_H
#include "Habitacion.h"
#include "algorithm"



class NodoHabitacion {

private:

    //PARAMETROS DE NODO HABITACION
    Habitacion sala;
    NodoHabitacion* habIzquierda;
    NodoHabitacion* habDerecha;
    int alturaNodo;
    int factorBalance;
    float idNodoSala;

public:

    //DOCUMENTAR
    /**
     * Constructor de el nodo Habitacion
     * @param sala sala que almacena el nodo
     * @param habIzquierda Habitacion a la izquierda
     * @param habDerecha Habitacion a la derecha
     * @param alturaNodo altura del nodo
     * @param factorBalance factor balance del nodo
     * @param idNodoSala id de la sala
     */
    NodoHabitacion(const Habitacion &sala, NodoHabitacion *habIzquierda, NodoHabitacion *habDerecha, int alturaNodo,
                   int factorBalance, float idNodoSala);

    /**
     * Constructor de la Habitacion segun su Habitacion
     * @param habitacion habotacion que almacena el nodo
     */
    NodoHabitacion(const Habitacion &habitacion);

    /**
     * Destructor de la clase NodoHabitacion
     */
    ~NodoHabitacion();

    //METODOS GET'S & SET'S
    const Habitacion &getSala() const;

    void setSala(const Habitacion &sala);

    NodoHabitacion *getHabIzquierda() const;

    void setHabIzquierda(NodoHabitacion *habIzquierda);

    NodoHabitacion *getHabDerecha() const;

    void setHabDerecha(NodoHabitacion *habDerecha);

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
    int altNodoHab(NodoHabitacion* nodo);

    /**
     * Metodo que asigna la id de la Habitacion
     * @param peligroSala peligro de la sala
     * @return la id de la sala
     */
    float idNodoHabitacion(int peligroSala);




};


#endif //TALLER2_ED_NODOHABITACION_H
