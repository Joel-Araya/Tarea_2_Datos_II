//
// Created by Marco on 3/25/2021.
//

#include "Builder.h"

Builder::Builder() {
    this->Reset();
}

void Builder::Reset() {
    this->casa = new Casa();
}

void Builder::GenerarPiscina() {
    this->casa->caracteristicas.push_back("Tiene piscina");
}

void Builder::GenerarSegundoPiso() {
    this->casa->caracteristicas.push_back("Tiene segundo piso");
}

void Builder::GenerarSotano(){
    this->casa->caracteristicas.push_back("Tiene sotano");
}

Casa* Builder::GetCasa() {
    Casa* casa1 = this->casa;
    this->Reset();
    return casa1;
}