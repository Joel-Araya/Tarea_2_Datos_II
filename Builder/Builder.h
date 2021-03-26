//
// Created by Marco on 3/25/2021.
//

#ifndef TAREA_EXTRACLASE_2_BUILDER_H
#define TAREA_EXTRACLASE_2_BUILDER_H
#include "Casa.h"


class Builder {
private:
    Casa* casa;
public:
    virtual void GenerarPiscina();
    virtual void GenerarSegundoPiso();
    virtual void GenerarSotano();
    Builder();
    void Reset();
    Casa* GetCasa();
};


#endif //TAREA_EXTRACLASE_2_BUILDER_H
