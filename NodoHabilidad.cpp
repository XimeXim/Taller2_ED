//
// Created by Thomas on 21-05-2024.
//

#include "NodoHabilidad.h"

nodoHabilidad::nodoHabilidad(const class habilidades &hability): skills(nullptr), skillIzquierda(nullptr), skillDerecha(nullptr) {
    this->hability = hability;
}
nodoHabilidad::nodoHabilidad(class habilidades &skills, nodoHabilidad *skillIzquierda, nodoHabilidad *skillDerecha)
        : skills(&skills), skillIzquierda(skillIzquierda), skillDerecha(skillDerecha) {}

nodoHabilidad::~nodoHabilidad() = default;

class habilidades &nodoHabilidad::getSkills() const {
    return *skills;
}

void nodoHabilidad::setSkills(class  habilidades &skills) {
    this->skills = &skills;
}

nodoHabilidad *nodoHabilidad::getSkillIzquierda() const {
    return skillIzquierda;
}

void nodoHabilidad::setSkillIzquierda(nodoHabilidad *skillIzquierda) {
    nodoHabilidad::skillIzquierda = skillIzquierda;
}

nodoHabilidad *nodoHabilidad::getSkillDerecha() const {
    return skillDerecha;
}

void nodoHabilidad::setSkillDerecha(nodoHabilidad *skillDerecha) {
    nodoHabilidad::skillDerecha = skillDerecha;
}
