//
// Created by Thomas on 21-05-2024.
//

#ifndef TALLER2_ED_NODOHABILIDAD_H
#define TALLER2_ED_NODOHABILIDAD_H
#include "habilidades.h"

class nodoHabilidad {

private:

    //PARAMETROS DE NODO HABILIDAD
    habilidades hability;
    habilidades *skills;
    nodoHabilidad* skillIzquierda;
    nodoHabilidad* skillDerecha;

public:

    //DOCUMENTAR
    /**
     * Constructor del nodo habilidad
     * @param hability habilidad que almacena
     */
    nodoHabilidad(habilidades hability);

    /**
     * Constructor del nodo habilidad junto con sus hijos
     * @param skills habilidad que almacena
     * @param skillIzquierda nodo a la izquierda
     * @param skillDerecha nodo a la derecha
     */
    nodoHabilidad(const habilidades &skills, nodoHabilidad *skillIzquierda, nodoHabilidad *skillDerecha);

    /**
     * Destructor del nodoHabilidad;
     */
    virtual ~nodoHabilidad();

    //METODOS GET'S & SET'S
    const habilidades &getSkills() const;

    void setSkills(const habilidades &skills);

    nodoHabilidad *getSkillIzquierda() const;

    void setSkillIzquierda(nodoHabilidad *skillIzquierda);

    nodoHabilidad *getSkillDerecha() const;

    void setSkillDerecha(nodoHabilidad *skillDerecha);

};


#endif //TALLER2_ED_NODOHABILIDAD_H
