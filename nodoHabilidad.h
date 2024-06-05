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
    nodoHabilidad(const class habilidades &hability);

    nodoHabilidad(class habilidades &skills, nodoHabilidad *skillIzquierda, nodoHabilidad *skillDerecha);

    virtual ~nodoHabilidad();

    class habilidades &getSkills() const;

    void setSkills(class habilidades &skills);

    nodoHabilidad *getSkillIzquierda() const;

    void setSkillIzquierda(nodoHabilidad *skillIzquierda);

    nodoHabilidad *getSkillDerecha() const;

    void setSkillDerecha(nodoHabilidad *skillDerecha);

};


#endif //TALLER2_ED_NODOHABILIDAD_H
