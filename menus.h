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
#include "objetos.h"


class menus {

private:
    MinHeap* minHeap;
    AVL* avl;
    enemigo* listaEnemigos;
    int largoEnemys=0;
    int largoObj=0;
    objetos* listaObjetos;

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
     * Menu dentro de la habitacion
     */
    void menuHabitacion();

    /**
     * Menu de combate del jugador
     */
    void menuCombate();

    /**
     * Menu que maneja las habilidades del jugador
     */
    void menuHabilidades();

    /**
     * Min heap que almacena las habilidades
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
     * @param enemigo1 enemigo numero 1 de la habitacion
     * @param enemigo2 enemigo numero 2 de la habitacion
     * @param enemigo3 enemigo numero 3 de la habitacion
     * @param enemigo4 enemigo numero 4 de la habitacion
     * @param enemigo5 enemigo numero 5 de la habitacion
     * @param cantObjetos objetos presentes en la habitacion
     * @param cantBolsasOro bolsas de oro presentes en la habitacion
     * @param peligro peligro de la habitacion
     */
    void habitacionesAVL(std::string enemigo1, std::string enemigo2, std::string enemigo3, std::string enemigo4,
                         std::string enemigo5, std::string cantObjetos, std::string cantBolsasOro, std::string peligro);

    /**
     * Lista de enemigos presentes en la habitacion
     * @param enemy enemigo de la habitacion
     */
    void addListaEnemigos(const enemigo &enemy);

    /**
     * Metodo que guarda datos de los objetos
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
     * Metodo que añade el objeto a la mochila del jugador
     * @param items objetos del jugador
     */
    void addListaItem(objetos items);

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
     * Metodo que guarda los datos del enemigo desde el txt
     * @param nombre nombre del enemigo
     * @param nivel nivel del enemigo
     * @param oroDropeable oro que suelta el enemigo al morir
     * @param hp vida del enemigo
     * @param atk valor de ataque del enemigo
     * @param ma valor de magia del enemigo
     * @param spd velocidad del enemigo
     * @param su suerte del enemigo
     * @param debilidad debilidad del enemigo
     * @param listaHabilidades habilidades del enemigo
     */
    void arregloEnemigos(std::string nombre,std::string nivel, std::string oroDropeable,std::string hp,std::string atk,std::string ma,std::string spd,std::string su,std::string debilidad,std::string listaHabilidades);
};


#endif //TALLER2_ED_MENUS_H
