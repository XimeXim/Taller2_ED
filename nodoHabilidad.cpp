//
// Created by Thomas on 21-05-2024.
//

#include "nodoHabilidad.h"

nodoHabilidad::nodoHabilidad(habilidades hability) {
    this->hability = hability;
}

nodoHabilidad::nodoHabilidad(const habilidades &skills, nodoHabilidad *skillIzquierda, nodoHabilidad *skillDerecha)
        : skills(skills), skillIzquierda(skillIzquierda), skillDerecha(skillDerecha) {}

nodoHabilidad::~nodoHabilidad() {

}

const habilidades &nodoHabilidad::getSkills() const {
    return skills;
}

void nodoHabilidad::setSkills(const habilidades &skills) {
    nodoHabilidad::skills = skills;
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
