//
// Created by Marco on 3/25/2021.
//

#ifndef TAREA_EXTRACLASE_2_DIRECTOR_H
#define TAREA_EXTRACLASE_2_DIRECTOR_H
#include "Builder.h"


class Director {
private:
    Builder* builder;


public:
    void setBuilder(Builder* builder);
    void CasaSimple();
    void CasaCompleta();
    void CasaPersonalizada();
    void static RunExample();
};


#endif //TAREA_EXTRACLASE_2_DIRECTOR_H
