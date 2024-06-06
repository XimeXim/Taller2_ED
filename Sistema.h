//
// Created by Thomas on 18-05-2024.
//

#ifndef TALLER2_ED_SISTEMA_H
#define TALLER2_ED_SISTEMA_H
#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>

#include "AVL.h"
#include "MinHeap.h"
#include "Enemigo.h"
#include "Objetos.h"


class Sistema {

private:
    MinHeap* minHeap;
    AVL* avl;
    Enemigo* listaEnemigos;
    int largoEnemys=0;
    int largoObj=0;
    Objetos* listaObjetos;

public:

    /**
     * Menu principal
     */
    void menuPrincipal();

    /**
     * Menu dentro del juego
     */
    void menuJuego();

    /**
     * Menu dentro de la Habitacion
     */
    void menuHabitacion();

    /**
     * Menu de combate del Jugador
     */
    void menuCombate();

    /**
     * Menu que maneja las Habilidades del Jugador
     */
    void menuHabilidades();

    /**
     * Min heap que almacena las Habilidades
     * @param nombre nombre de la habilidad
     * @param descripcion descripcion de la habilidad
     * @param dano daño de la habilidad
     * @param niv nivel en que se aprende dicha habilidad
     * @param elemento elemento de la habilidad
     */
    void habilidadesMinHeap(std::string nombre, std::string descripcion, std::string dano, std::string niv,
                            std::string elemento, std::string aoe);

    /**
     * Dungeon con estructura de un arbol AVL
     * @param enemigo1 Enemigo numero 1 de la Habitacion
     * @param enemigo2 Enemigo numero 2 de la Habitacion
     * @param enemigo3 Enemigo numero 3 de la Habitacion
     * @param enemigo4 Enemigo numero 4 de la Habitacion
     * @param enemigo5 Enemigo numero 5 de la Habitacion
     * @param cantObjetos Objetos presentes en la Habitacion
     * @param cantBolsasOro bolsas de oro presentes en la Habitacion
     * @param peligro peligro de la Habitacion
     */
    void habitacionesAVL(std::string enemigo1, std::string enemigo2, std::string enemigo3, std::string enemigo4,
                         std::string enemigo5, std::string cantObjetos, std::string cantBolsasOro, std::string peligro);

    /**
     * Lista de enemigos presentes en la Habitacion
     * @param enemy Enemigo de la Habitacion
     */
    void addListaEnemigos(const Enemigo &enemy);

    /**
     * Metodo que guarda datos de los Objetos
     * @param nombre nombre del objeto
     * @param descripcion descripcion del objeto
     * @param efectoSec efecto secundario del objeto
     * @param coste coste de oro del objeto
     * @param estadistica estadisticas del objeto
     * @param valorMejora estadisticas potenciadas por el objeto
     */
    void llenarItems(std::string nombre, std::string descripcion, std::string efectoSec, std::string coste,
                     std::string estadistica, std::string valorMejora);

    /**
     * Metodo que añade el objeto a la mochila del Jugador
     * @param items Objetos del Jugador
     */
    void addListaItem(Objetos items);

    /**
     * Metodo que realiza la lectura de los archivos txt
     * @param nomArchivo nombre del archivo .txt
     */
    void lecturaTXT(std::string nomArchivo);

    /**
     * Metodo que transforma un string a booleando
     * @param str string a transformar
     * @return true si lo transforma o false si no
     */
    bool stringToBool(std::string str);

    /**
     * Metodo que guarda los datos del Enemigo desde el txt
     * @param nombre nombre del Enemigo
     * @param nivel nivel del Enemigo
     * @param oroDropeable oro que suelta el Enemigo al morir
     * @param hp vida del Enemigo
     * @param atk valor de ataque del Enemigo
     * @param ma valor de magia del Enemigo
     * @param spd velocidad del Enemigo
     * @param su suerte del Enemigo
     * @param debilidad debilidad del Enemigo
     * @param listaHabilidades Habilidades del Enemigo
     */
    void arregloEnemigos(std::string nombre,std::string nivel, std::string oroDropeable,std::string hp,std::string atk,std::string ma,std::string spd,std::string su,std::string debilidad,std::string listaHabilidades);
};


#endif //TALLER2_ED_SISTEMA_H
