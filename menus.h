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


class menus {

private:
    MinHeap* minHeap;
    AVL* avl;
    std::vector<enemigo*> listaEnemigos;

public:

void menuPrincipal();

void menuJuego();

void menuHabitacion();

void menuCombate();

void menuHabilidades();

void habilidadesMinHeap(std::string nombre, std::string descripcion, std::string dano, std::string niv,
                      std::string elemento, std::string aoe);

    void habitacionesAVL(std::string enemigo1, std::string enemigo2, std::string enemigo3, std::string enemigo4,
                         std::string enemigo5, std::string cantObjetos, std::string cantBolsasOro, std::string peligro);

    void lecturaTXT(std::string nomArchivo);

bool stringToBool(std::string str);

    void arregloEnemigos(std::string nombre,std::string nivel, std::string oroDropeable,std::string hp,std::string atk,std::string ma,std::string spd,std::string su,std::string debilidad,std::string listaHabilidades);
};


#endif //TALLER2_ED_MENUS_H
