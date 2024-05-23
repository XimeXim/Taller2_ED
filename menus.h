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


class menus {

public:

void menuPrincipal();

void menuJuego();

void menuHabitacion();

void menuCombate();

void menuHabilidades();

void habilidadesMinHeap(std::string nombre, std::string descripcion, std::string dano, std::string niv,
                      std::string elemento, std::string aoe);
void lecturaTXT(std::string nomArchivo);

};


#endif //TALLER2_ED_MENUS_H
