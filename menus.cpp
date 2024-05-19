//
// Created by Thomas on 18-05-2024.
//

#include "menus.h"
#include "iostream"
#include "limits"
using namespace std;

void menus::menuPrincipal() {

    int opcionMenuPrincipal = 0;
    while (opcionMenuPrincipal != 3){

        //AQUI DEBE IR LA LECTURA DE LOS 4 ARCHIVOS DE TEXTO
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

void menus::menuJuego() {

    int opcionMenuJuego = 0;
    while (opcionMenuJuego != 6){

        cout << "Menú:"<< endl;
        cout << "Ingrese su opción:"<< endl;
        cout << "1) Avanzar a la siquierda" << endl;
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
                break;

            case 4:
                break;

            case 5:
                break;

            case 6:
                cout << "Volviendo al Menú Principal" << endl;
                return;
        }
    }
}

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
