//
// Created by Ximena on 24-05-2024.
//

#include "MinHeap.h"
#include <iostream>
using namespace std;

MinHeap::MinHeap() {
}
int habilidadPadre(int i)
{
    return(i - 1) / 2;
}

int habilidadIzq(int i)
{
    return (i * 2) + 1;
}

int habilidadDer(int i)
{
    return (i * 2) + 2;
}
MinHeap::MinHeap(int capacidad)
{
    this->tamano = 0;
    this->capacidad = capacidad;
    //this->min_heap_habilidad = new NodoHabilidad[capacidad];
}

NodoHabilidad MinHeap::devolverRaiz() {
    return min_heap_habilidad[0];
}

void MinHeap::insertar(const NodoHabilidad* nodo_habilidad) {

    if(tamano == capacidad) {
        cout<<"Habilidadeds han sido llenadas!"<< endl;
        return;
    }
    tamano++;
    int i = tamano - 1;
    min_heap_habilidad[i] = *(nodo_habilidad);
    while (i != 0 && min_heap_habilidad[habilidadPadre(i)].getSkills().getNivel() > min_heap_habilidad[i].getSkills().getNivel())
    {
        NodoHabilidad aux = min_heap_habilidad[i];
        min_heap_habilidad[i] = min_heap_habilidad[habilidadPadre(i)];
        min_heap_habilidad[habilidadPadre(i)] = aux;
        i = habilidadPadre(i);
    }
    heapifyOrden(0);
}


void MinHeap::heapifyOrden(int i) {
    int menor = i;
    int izquierdo = habilidadIzq(i);
    int derecho = habilidadDer(i);

    if(izquierdo < tamano && min_heap_habilidad[izquierdo].getSkills().getNivel() > min_heap_habilidad[menor].getSkills().getNivel()) {
        menor = izquierdo;
    }
    if (derecho < tamano && min_heap_habilidad[derecho].getSkills().getNivel() > min_heap_habilidad[menor].getSkills().getNivel()) {
        menor = derecho;
    }

    if (menor!=i) {
        NodoHabilidad aux = min_heap_habilidad[i];
        min_heap_habilidad[i]=min_heap_habilidad[menor];
        min_heap_habilidad[menor]=aux;
        heapifyOrden(menor);
    }
}

int MinHeap::eliminacion() {

    if (tamano <=0) {
        cout<<"Habilidades vacias..."<<endl;
        return 1;
    }

    if(tamano==1) {
        tamano--;
        return 0;
    }
    NodoHabilidad* raiz = &min_heap_habilidad[0];
    min_heap_habilidad[0] = min_heap_habilidad[tamano-1];
    tamano--;
    heapifyOrden(0);
    return 0;
}

void MinHeap::imprimir() {

    for (int i = 0; i < tamano; i++)
    {
        //aca deberia imprimir el listado de Habilidades obtenidas creo
    }
}

MinHeap::~MinHeap() {
}
