//
// Created by Ximena on 24-05-2024.
//
#include <iostream>
#include "NodoHabitacion.h"
#include "Habitacion.h"
#include "algorithm"


#ifndef AVL_H
#define AVL_H

class AVL {

private:

    NodoHabitacion* habitacion;

public:

    /**
     * Constructor de la clase AVL
     * @param habitacion nodo Habitacion dentro del AVL
     */
    explicit AVL(NodoHabitacion *habitacion);

    /**
     * Destructor de la clase AVL
     */
    ~AVL();

    //METODOS GET'S & SET'S
    NodoHabitacion *getHabitacion() const;

    void setHabitacion(NodoHabitacion *habitacion);

    /**
     * Metodo que retorna la altura del nodo
     * @param nodo el nodo
     * @return la altura
     */
    int alturaNodo(NodoHabitacion* nodo);

    /**
     * Metodo que calcula la altura del nodo
     * @param nodo el nodo
     * @return la altura calculada
     */
    int calcularAltNodo(NodoHabitacion* nodo);

    /**
     * Metodo que calcula el factor de balance de los nodos
     * @param nodo el nodo
     * @return el factor de balance del nodo
     */
    int facBalanceNodo(NodoHabitacion* nodo);

    /**
     * Metodo rotacion RR
     * @param nodoDesbalanceado el nodo que presenta el desbalance
     * @return el nodo ya balanceado
     */
    NodoHabitacion* rotacionRR(NodoHabitacion* nodoDesbalanceado);

    /**
     * Metodo rotacion LL
     * @param nodoDesbalanceado el nodo que presenta el desbalance
     * @return el nodo ya balanceado
     */
    NodoHabitacion* rotacionLL(NodoHabitacion* nodoDesbalanceado);

    /**
     * Metodo rotacion LR
     * @param nodoDesbalanceado el nodo que presenta el desbalance
     * @return el nodo ya balanceado
     */
    NodoHabitacion* rotacionLR(NodoHabitacion* nodoDesbalanceado);

    /**
     * Metodo rotacion RL
     * @param nodoDesbalanceado el nodo que presenta el desbalance
     * @return el nodo ya balanceado
     */
    NodoHabitacion* rotacionRL(NodoHabitacion* nodoDesbalanceado);

    /**
     * Metodo que busca si hay un nodo con la misma id dentro del arbol
     * @param nodo el nodo buscado
     * @param idNodo la id del nodo buscado
     * @return true si hay un nodo repetido o false si no
     */
    bool buscarNodoRepetido(NodoHabitacion* nodo, float idNodo);

    /**
     * Metodo que asigna pequeñas diferencias a las ids para que no se repitan
     * @param nodo el nodo
     * @return la id con pequeños cambios
     */
    float difPeligrosIguales (NodoHabitacion* nodo);

    /**
     * Metodo que inserta los nodos dentro del arbol AVL
     * @param nodoAInsertar el nodo que será insertado
     * @return el nodo insertado
     */
    NodoHabitacion* insertarNodoAVL(NodoHabitacion* nodoAInsertar);


};



#endif //AVL_H
