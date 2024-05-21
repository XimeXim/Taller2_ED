cmake_minimum_required(VERSION 3.28)
project(Taller2_ED)

set(CMAKE_CXX_STANDARD 17)

add_executable(Taller2_ED main.cpp
        menus.cpp
        menus.h
        jugador.h
        jugador.cpp
        jugador.h
        enemigo.cpp
        enemigo.h
        objetos.cpp
        objetos.h
        habilidades.cpp
        habilidades.h
        habitacion.cpp
        habitacion.h
        nodoHabitacion.cpp
        nodoHabitacion.h
        nodoHabilidad.cpp
        nodoHabilidad.h
)
