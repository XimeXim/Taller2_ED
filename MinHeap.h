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
    MinHeap();
    MinHeap(int capacidad);
    void insertar(const nodoHabilidad *nodo_habilidad);
    nodoHabilidad devolverRaiz();
    void heapifyOrden(int i);
    int eliminacion();
    void imprimir();
    ~MinHeap();
};



#endif //MINHEAP_H
