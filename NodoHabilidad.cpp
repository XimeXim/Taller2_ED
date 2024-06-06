//
// Created by Thomas on 21-05-2024.
//

#include "NodoHabilidad.h"


NodoHabilidad::NodoHabilidad(class Habilidades &skills, NodoHabilidad *skillIzquierda, NodoHabilidad *skillDerecha)
        : skills(&skills), skillIzquierda(skillIzquierda), skillDerecha(skillDerecha) {}

NodoHabilidad::NodoHabilidad(Habilidades *habilidad) {
    this->hability = habilidad;
}

NodoHabilidad::~NodoHabilidad() = default;

const Habilidades &NodoHabilidad::getSkills() const {
    return *skills;
}

void NodoHabilidad::setSkills(class  Habilidades &skills) {
    this->skills = &skills;
}

NodoHabilidad *NodoHabilidad::getSkillIzquierda() const {
    return skillIzquierda;
}

void NodoHabilidad::setSkillIzquierda(NodoHabilidad *skillIzquierda) {
    NodoHabilidad::skillIzquierda = skillIzquierda;
}

NodoHabilidad *NodoHabilidad::getSkillDerecha() const {
    return skillDerecha;
}

void NodoHabilidad::setSkillDerecha(NodoHabilidad *skillDerecha) {
    NodoHabilidad::skillDerecha = skillDerecha;
}
