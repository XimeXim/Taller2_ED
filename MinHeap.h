//
// Created by Ximena on 24-05-2024.
//
#include <iostream>
#include "nodoHabilidad.h"
#ifndef MINHEAP_H
#define MINHEAP_H



class MinHeap {
private:
    nodoHabilidad* listaHabilidades;
    int size;
    int capacidad;

public:
    MinHeap();
    void insertar(nodoHabilidad* nodo_habilidad);
    nodoHabilidad devolverRaiz();
    void orden(int i);
    int eliminacion();
    void imprimir();
    ~MinHeap();
};



#endif //MINHEAP_H
