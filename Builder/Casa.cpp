//
// Created by Marco on 3/25/2021.
//

#include "Casa.h"

void Casa::Mostrar() const {
    for(size_t i=0; i<caracteristicas.size(); i++){
        cout << caracteristicas[i] + "\n";
    }
    cout << "\n";
}