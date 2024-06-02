//
// Created by Thomas on 21-05-2024.
//

#ifndef TALLER2_ED_NODOHABILIDAD_H
#define TALLER2_ED_NODOHABILIDAD_H
#include "habilidades.h"

class nodoHabilidad {

private:

    //PARAMETROS DE NODO HABILIDAD
    habilidades skills;
    nodoHabilidad* skillIzquierda;
    nodoHabilidad* skillDerecha;

public:

    //DOCUMENTAR
    nodoHabilidad();
    nodoHabilidad(const habilidades &skills, nodoHabilidad *skillIzquierda, nodoHabilidad *skillDerecha);

    virtual ~nodoHabilidad();

    const habilidades &getSkills() const;

    void setSkills(const habilidades &skills);

    nodoHabilidad *getSkillIzquierda() const;

    void setSkillIzquierda(nodoHabilidad *skillIzquierda);

    nodoHabilidad *getSkillDerecha() const;

    void setSkillDerecha(nodoHabilidad *skillDerecha);

};


#endif //TALLER2_ED_NODOHABILIDAD_H
