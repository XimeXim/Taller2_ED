//
// Created by Thomas on 18-05-2024.
//

#include "menus.h"
#include "nodoHabilidad.h"
#include "nodoHabitacion.h"
#include "habitacion.h"

#include <vector>
#include <exception>

#include "iostream"
#include "fstream"
#include "limits"
#include "MinHeap.h"
using namespace std;

/*
 * Este metodo contiene el menu principal, el cual realiza los llamados a los metodos pertinentes
 * a las opciones ingresadas.
 */
void menus::menuPrincipal() {

    int opcionMenuPrincipal = 0;
    while (opcionMenuPrincipal != 3){

        //Se realiza la llamada al metodo de lectura del archivo para el archivo habitaciones.txt
        string txt1 ="Habitaciones.txt";
        lecturaTXT(txt1);


        cout << "Bienvenido al GOTY" << endl;
        cout << "Cuentame viajero..." << endl;
        cout << "¿Qué deseas hacer?:"<< endl;
        cout << "1) Comenzar partida" << endl;
        cout << "2) Descripción del juego" << endl;
        cout << "3) Salir" << endl;
        //Validacion de opciones menu principal
        while (!(cin >> opcionMenuPrincipal)) {
            cout << "Opción no valida. Por favor, intentelo de nuevo: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        switch (opcionMenuPrincipal){
            case 1:
                //AQUI SE DEBE HACER UNA FUNCION QUE PREGUNTE EL NOMBRE DEL PERSONAJE Y LO GUARDE
                    menuJuego();
                break;

            case 2:
                //DESCRIPCION DEL JUEGO (INSTRUCCIONES)
                break;

            case 3:
                cout << "Saliendo del juego" << endl;
                break;
        }
    }
}

/*
 * Este metodo contiene el submenu menu del juego donde se enlistan las opciones de tal manera que el
 * usuario pueda moverse e interactuar ya dentro del juego
 */
void menus::menuJuego() {

    //Se llaman los metodos de lectura para el resto de os archivos.
    string txt1 ="Items.txt";
    lecturaTXT(txt1);
    string txt2 ="Habilidades.txt";
    lecturaTXT(txt2);
    string txt3 ="Enemigos.txt";
    lecturaTXT(txt3);

    int opcionMenuJuego = 0;
    while (opcionMenuJuego != 6){

        cout << "Menú:"<< endl;
        cout << "Ingrese su opción:"<< endl;
        cout << "1) Avanzar a la izquierda" << endl;
        cout << "2) Avanzar a la derecha" << endl;
        cout << "3) Ver mapa" << endl;
        cout << "4) Inventario" << endl;
        cout << "5) Estadísticas" << endl;
        cout << "6) Salir del juego" << endl;

        //Validacion de opciones menu juego
        while (!(cin >> opcionMenuJuego)) {
            cout << "Opción no valida. Por favor, intentelo de nuevo: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        switch (opcionMenuJuego){
            case 1:
                menuHabitacion();
                break;

            case 2:
                menuHabitacion();
                break;

            case 3:
                personaje.verMapa();
                break;

            case 4:
                personaje.getMochila();
                break;

            case 5:

                break;

            case 6:
                cout << "Volviendo al Menú Principal" << endl;
                return;
        }
    }
}
/*
 *
 */
void menus::menuHabitacion() {

    int opcionMenuHabitacion = 0;
    //REVISAR SI CAMBIAR EL 5 EN FUNCION DE SI SE HACE UNA OPCION EXTRA O NO
    while (opcionMenuHabitacion != 5){

        cout << "Menú Habitación" << endl;
        cout << "Ingrese su opción:" << endl;
        cout << "1) Combatir" << endl;
        cout << "2) recoger tesoros" << endl;
        cout << "3) Inventario" << endl;
        cout << "4) Estadísticas" << endl;

        //ANALIZAR SI SE HACE UNA OPCION EXTRA PARA HUIR O SI LOS COMBATES SON OBLIGATORIOS

        //Validacion de opciones menu habitacion
        while (!(cin >> opcionMenuHabitacion)) {
            cout << "Opción no valida. Por favor, intentelo de nuevo: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        switch (opcionMenuHabitacion){
            case 1:
                menuCombate();
                break;

            case 2:
                break;

            case 3:
                break;

            case 4:
                break;

            case 5:
                cout << "Volviendo al menu anterior" << endl;
                return;
        }
    }
}

void menus::menuCombate() {

    int opcionMenuCombate = 0;
    while (opcionMenuCombate != 5){

        cout << "Menú Combate"<< endl;
        cout << "Ingrese su opción:" << endl;
        cout << "1) Ataque físico" << endl;
        cout << "2) Habilidades" << endl;
        cout << "3) Analizar enemigo" << endl;
        cout << "4) Utilizar objeto" << endl;
        cout << "5) Volver" << endl;

        //Validacion de opciones menu combate
        while (!(cin >> opcionMenuCombate)) {
            cout << "Opción no valida. Por favor, intentelo de nuevo: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        switch (opcionMenuCombate){
            case 1:
                break;

            case 2:
                menuHabilidades();
                break;

            case 3:
                break;

            case 4:
                break;

            case 5:
                cout << "5) Volviendo al menú anterior" << endl;
                return;
        }
    }
}

void menus::menuHabilidades() {

    int opcionMenuHabilidades = 0;
    while (opcionMenuHabilidades != 6){

        cout << "Menú Habilidades"<< endl;
        cout << "Ingrese su opción:" << endl;
        cout << "1) Magia de curación" << endl;
        cout << "2) Magia de fuego" << endl;
        cout << "3) Magia de hielo" << endl;
        cout << "4) Magia de viento" << endl;
        cout << "5) Magia de rayo" << endl;
        cout << "6) Menú anterior" << endl;

        //Validacion de opciones menu habilidades
        while (!(cin >> opcionMenuHabilidades)) {
            cout << "Opción no valida. Por favor, intentelo de nuevo: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        switch (opcionMenuHabilidades){
            case 1:
                break;

            case 2:
                break;

            case 3:
                break;

            case 4:
                break;

            case 5:
                break;

            case 6:
                cout << "5) Volviendo al menú anterior" << endl;
                return;
        }
    }
}

void menus::lecturaTXT(string nomArchivo) {

    fstream archivoTXT(nomArchivo);
    string linea = "";
    bool habilidades = false;

    // leeremos la primera linea del archivo para saber cuantos datos debemos considerar a guardar
    int cantDeDatos = 0;
    if(nomArchivo == "Items.txt") {
        cantDeDatos = 6;
    }else if(nomArchivo == "Habilidades.txt"){
        cantDeDatos = 6;
        habilidades = true;
    }else if (nomArchivo == "Habitaciones.txt") {
        cantDeDatos = 8;
    }else if(nomArchivo == "Enemigos.txt") {
        cantDeDatos = 10;
    }


    while(getline(archivoTXT, linea)) {
        string dato1 = "";
        string dato2 = "";
        string dato3 = "";
        string dato4 = "";
        string dato5 = "";
        string dato6 = "";
        string dato7 = "";
        string dato8 = "";
        string dato9 = "";
        string dato10 = "";

        stringstream stream(linea);
        if(cantDeDatos == 6 ) {
            getline(stream, dato1, ',');
            getline(stream, dato2, ',');
            getline(stream, dato3, ',');
            getline(stream, dato4, ',');
            getline(stream, dato5, ',');
            getline(stream, dato6, ',');
            if(habilidades) {
                // llamar metodo para almacenarlos en minheap
              //  habilidadesMinHeap(dato1,dato2,dato3,dato4,dato5,dato6);
            }else {
                llenarItems(dato1,dato2,dato3,dato4,dato5,dato6);
            }
        }else if(cantDeDatos==8) {
            getline(stream, dato1, ',');
            getline(stream, dato2, ',');
            getline(stream, dato3, ',');
            getline(stream, dato4, ',');
            getline(stream, dato5, ',');
            getline(stream, dato6, ',');
            getline(stream, dato7, ',');
            getline(stream, dato8, ',');
            // llamar metodo para almacenarlos en min o alv
            //habitacionesAVL(dato1,dato2, dato3, dato4, dato5, dato6, dato7, dato8);
        }else if (cantDeDatos == 10) {
            getline(stream, dato1, ',');
            getline(stream, dato2, ',');
            getline(stream, dato3, ',');
            getline(stream, dato4, ',');
            getline(stream, dato5, ',');
            getline(stream, dato6, ',');
            getline(stream, dato7, ',');
            getline(stream, dato8, ',');
            getline(stream, dato9, ',');
            getline(stream, dato10, ',');
            // llamar metodo para almacenarlos en min o alv
            //arregloEnemigos(dato1,dato2,dato3,dato4,dato5,dato6,dato7,dato8,dato9,dato10);
            //imprimirEnemigos(listaEnemigos);
        }
    }
}
bool menus::stringToBool(string str){
    return (str == "true" || str == "1");
}

void menus::arregloEnemigos(std::string nombre, std::string nivel, std::string oroDropeable, std::string hp,
    std::string atk, std::string ma, std::string spd, std::string su, std::string debilidad,
    std::string listaHabilidades) {

    try {
        int level = stoi(nivel);
        int oro = stoi(oroDropeable);
        int health = stoi(hp);
        int ataque = stoi(atk);
        int magic = stoi(ma);
        int speed = stoi(spd);
        int luck = stoi(su);
        std::vector<habilidades *> habilidadEnemy;
        if(listaHabilidades == "NINGUNA") {
            habilidadEnemy[0]= new habilidades();
        }

        auto* enemy = new enemigo(nombre,level,oro,health,ataque,magic,speed,luck,debilidad,habilidadEnemy);
        addListaEnemigos(enemy);

        for (int i = 0; i < largoEnemys; ++i) {
            std::cout << "Nombre: " << listaEnemigos[i]->getNombre() << ", Nivel: " << listaEnemigos[i]->getNivel() << std::endl;
        }

    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: El valor de coste o valorMejora no es un número válido: " << e.what() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Error: El valor de coste o valorMejora está fuera del rango permitido: " << e.what() << std::endl;
    }
}

void menus::habilidadesMinHeap(string nombre,string descripcion,string dano, string niv,string elemento,string aoe) {

    try {

        int danio = stoi(dano);
        int nivel = stoi(niv);
        bool AoE = stringToBool(aoe);

        auto* habilidad = new habilidades(nombre, descripcion, danio, nivel, elemento,AoE);
        auto* nodo = new nodoHabilidad(*habilidad);
        minHeap->insertar(nodo);

        for (int i = 0; i < largoEnemys; ++i) {
            std::cout << "Nombre: " << listaEnemigos[i]->getNombre() << ", Nivel: " << listaEnemigos[i]->getNivel() << std::endl;
        }

    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: El valor de coste o valorMejora no es un número válido: " << e.what() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Error: El valor de coste o valorMejora está fuera del rango permitido: " << e.what() << std::endl;
    }
}
void menus::habitacionesAVL(string enemigo1,string enemigo2, string enemigo3, string enemigo4, string enemigo5, string cantObjetos, string cantBolsasOro, string peligro) {

    try {
        int enemy1 = stoi(enemigo1);
        int enemy2 = stoi(enemigo2);
        int enemy3 = stoi(enemigo3);
        int enemy4 = stoi(enemigo4);
        int enemy5 = stoi(enemigo5);
        int items = stoi(cantObjetos);
        int bolsasOro = stoi(cantBolsasOro);
        int danger = stoi(peligro);

        auto habitaciones = new habitacion(enemy1,enemy2,enemy3,enemy4,enemy5,items,bolsasOro,danger);
        auto* nodo_habitacion = new nodoHabitacion(*habitaciones) ;
        //avl->insertarNodoAVL(nodo_habitacion,habitaciones,)

    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: El valor de coste o valorMejora no es un número válido: " << e.what() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Error: El valor de coste o valorMejora está fuera del rango permitido: " << e.what() << std::endl;
    }
}

void menus::addListaEnemigos(enemigo *enemy) {
    listaEnemigos[largoEnemys]= enemy;
    largoEnemys++;
}

void menus::llenarItems(string nombre, string descripcion, string efectoSec, string coste, string estadistica, string valorMejora) {
    try {
        int costos = std::stoi(coste);
        int valor = std::stoi(valorMejora);

        auto item = new objetos(nombre, descripcion, efectoSec, costos, estadistica, valor);
        addListaItem(*item);

        for (int i = 0; i < largoObj; ++i) {
            std::cout << "Nombre: " << listaObjetos[i]->getNombre() << ", Nivel: " << listaObjetos[i]->getDescripcion() << std::endl;
        }

    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: El valor de coste o valorMejora no es un número válido: " << e.what() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Error: El valor de coste o valorMejora está fuera del rango permitido: " << e.what() << std::endl;
    }
}





void menus::addListaItem(objetos items) {
    listaObjetos[largoObj]= &items;
    largoObj++;
}
void menus:: imprimirEnemigos(std::vector<enemigo*> lista) const {
    for (int i = 0; i < largoEnemys; ++i) {
        std::cout << "Nombre: " << listaEnemigos[i]->getNombre() << ", Nivel: " << listaEnemigos[i]->getNivel() << std::endl;
    }
}
void menus:: imprimirObjetos(std::vector<objetos*> lista) const {
    for (int i = 0; i < largoObj; ++i) {
        std::cout << "Nombre: " << listaObjetos[i]->getNombre() << ", Descripcion: " << listaObjetos[i]->getDescripcion() << std::endl;
    }
}



