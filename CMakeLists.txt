cmake_minimum_required(VERSION 3.28)
project(Taller2_ED)

set(CMAKE_CXX_STANDARD 17)

add_executable(Taller2_ED main.cpp
        Sistema.cpp
        Sistema.h
        Jugador.h
        Jugador.cpp
        Jugador.h
        Enemigo.cpp
        Enemigo.h
        Objetos.cpp
        Objetos.h
        Habilidades.cpp
        Habilidades.h
        Habitacion.cpp
        Habitacion.h
        NodoHabitacion.cpp
        NodoHabitacion.h
        NodoHabilidad.cpp
        NodoHabilidad.h
        AVL.cpp
        AVL.h
        MinHeap.cpp
        MinHeap.h
)
