//
// Created by Marco on 3/25/2021.
//

#include "Director.h"

void Director::setBuilder(Builder *builder) {
    this->builder = builder;
}

void Director::CasaCompleta() {
    this->builder->GenerarSegundoPiso();
    this->builder->GenerarPiscina();
    this->builder->GenerarSotano();
}

void Director::CasaPersonalizada() {
    this->builder->GenerarSegundoPiso();
    this->builder->GenerarPiscina();
}

void Director::CasaSimple() {
    this->builder->GenerarSegundoPiso();
}

void Director::RunExample() {
    cout << "------------------------------------------------------------------\n";
    cout << "EJEMPLO DEL PATRON DE DISENO BUILDER EN LA CONSTRUCCION DE OBJETOS\n";
    cout << "------------------------------------------------------------------\n";
    Builder* builder = new Builder();
    Director* director = new Director();
    Casa* casa;

    director->setBuilder(builder);

    cout << "Casa simple: \n";
    director->CasaSimple();
    casa = builder->GetCasa();
    casa->Mostrar();
    delete casa;

    cout << "Casa Personalizada: \n";
    director->CasaPersonalizada();
    casa = builder->GetCasa();
    casa->Mostrar();
    delete casa;

    cout << "Casa Completa: \n";
    director->CasaCompleta();
    casa = builder->GetCasa();
    casa->Mostrar();
    delete casa;

    delete builder;
    delete director;
    cout << "------------------------------------------------------------------\n";
}