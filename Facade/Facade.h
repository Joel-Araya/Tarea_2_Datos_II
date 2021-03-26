//
// Created by joel on 25/3/21.
//

#ifndef TAREA_2_DATOS_II_FACADE_H
#define TAREA_2_DATOS_II_FACADE_H


#include "User.h"
#include "LogIn.h"


class Facade {
private:
    User *user;
    //User user = User("NoName", "NoPassword", -1);
    LogIn logIn = LogIn();

    User users[5]= {User("Joel","cout",100),User("Marco","asdf",101),User("Pedro","hellouda",102),User("Juan","qwerty",103),User("Luis","xD12",104)};

public:
    Facade();
    virtual ~Facade();

};


#endif //TAREA_2_DATOS_II_FACADE_H
