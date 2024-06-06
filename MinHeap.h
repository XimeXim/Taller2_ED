//
// Created by Ximena on 24-05-2024.
//
#include <iostream>
#include "nodoHabilidad.h"
#ifndef MINHEAP_H
#define MINHEAP_H



class MinHeap {
private:
    nodoHabilidad* min_heap_habilidad;
    int capacidad;
    int tamano;

public:

    /**
     * Constructor del minHeap
     */
    MinHeap();

    /**
     * Constructor del minHeap segun su capacidad
     * @param capacidad capacidad del min heap
     */
    MinHeap(int capacidad);

    /**
     * Metodo que inserta las habilidades en el min heap
     * @param nodo_habilidad nodo que almacena una habilidad
     */
    void insertar(const nodoHabilidad *nodo_habilidad);

    /**
     * Metodo que devuelve la raiz
     * @return la raiz
     */
    nodoHabilidad devolverRaiz();

    /**
     * metodo que ordena el arbol como min heap
     * @param i numero a comparar con sus hijos para realizar el orden
     */
    void heapifyOrden(int i);

    /**
     * Metodo que elimina las habilidades del arbol min heap
     * @return 0 si se eliminó correctamente o un 1 si no
     */
    int eliminacion();

    /**
     * Metodo que imprime el arbol
     */
    void imprimir();

    /**
     * Destructor del arbol
     */
    ~MinHeap();
};



#endif //MINHEAP_H
