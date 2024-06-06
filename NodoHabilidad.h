//
// Created by Thomas on 21-05-2024.
//

#ifndef TALLER2_ED_NODOHABILIDAD_H
#define TALLER2_ED_NODOHABILIDAD_H
#include "habilidades.h"

class NodoHabilidad {

private:

    //PARAMETROS DE NODO HABILIDAD
    Habilidades hability;
    Habilidades *skills;
    NodoHabilidad* skillIzquierda;
    NodoHabilidad* skillDerecha;

public:

    //DOCUMENTAR
    /**
     * Constructor del nodo habilidad
     * @param hability habilidad que almacena
     */
    NodoHabilidad(Habilidades hability);

    /**
     * Constructor del nodo habilidad junto con sus hijos
     * @param skills habilidad que almacena
     * @param skillIzquierda nodo a la izquierda
     * @param skillDerecha nodo a la derecha
     */
    NodoHabilidad(const Habilidades &skills, NodoHabilidad *skillIzquierda, NodoHabilidad *skillDerecha);

    NodoHabilidad(const Habilidades &hability);

    NodoHabilidad(Habilidades &skills, NodoHabilidad *skillIzquierda, NodoHabilidad *skillDerecha);
    /**
     * Destructor del NodoHabilidad;
     */
    virtual ~NodoHabilidad();

    //METODOS GET'S & SET'S
    const Habilidades &getSkills() const;

    void setSkills(Habilidades &skills);

    NodoHabilidad *getSkillIzquierda() const;

    void setSkillIzquierda(NodoHabilidad *skillIzquierda);

    NodoHabilidad *getSkillDerecha() const;

    void setSkillDerecha(NodoHabilidad *skillDerecha);

};


#endif //TALLER2_ED_NODOHABILIDAD_H
