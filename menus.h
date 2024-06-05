//
// Created by Thomas on 18-05-2024.
//

#ifndef TALLER2_ED_MENUS_H
#define TALLER2_ED_MENUS_H
#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>

#include "AVL.h"
#include "MinHeap.h"
#include "enemigo.h"
#include "jugador.h"
#include "objetos.h"


class menus {

private:
    MinHeap* minHeap;
    AVL* avl;
    jugador personaje;
    std::vector<enemigo*> listaEnemigos;
    int largoEnemys=0;
    int largoObj=0;
    std::vector<objetos*> listaObjetos;

public:

void menuPrincipal();

void menuJuego();

void menuHabitacion();

void menuCombate();

void menuHabilidades();

void habilidadesMinHeap(std::string nombre, std::string descripcion, std::string dano, std::string niv,
                      std::string elemento, std::string aoe);

    static void habitacionesAVL(std::string enemigo1, std::string enemigo2, std::string enemigo3, std::string enemigo4,
                                std::string enemigo5, std::string cantObjetos, std::string cantBolsasOro, std::string peligro);

    void addListaEnemigos(enemigo *enemy);

    void llenarItems(std::string nombre, std::string descripcion, std::string efectoSec, std::string coste,
                     std::string estadistica, std::string valorMejora);

    void addListaItem(objetos items);

    void imprimirEnemigos(std::vector<enemigo*>lista) const;

    void imprimirObjetos(std::vector<objetos *> lista) const;

    static int metodoValidacionStoi(std::string dato, int cambio);

    void lecturaTXT(std::string nomArchivo);

bool stringToBool(std::string str);

    void arregloEnemigos(std::string nombre,std::string nivel, std::string oroDropeable,std::string hp,std::string atk,std::string ma,std::string spd,std::string su,std::string debilidad,std::string listaHabilidades);
};


#endif //TALLER2_ED_MENUS_H
