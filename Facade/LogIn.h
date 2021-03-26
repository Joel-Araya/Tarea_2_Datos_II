//
// Created by joel on 25/3/21.
//

#ifndef TAREA_2_DATOS_II_LOGIN_H
#define TAREA_2_DATOS_II_LOGIN_H

#include <string>
#include "User.h"

using namespace std;

class LogIn {
private:



public:
    LogIn();
    bool verify(int ID, string _password, User a[]);
    virtual ~LogIn();

    bool verify(int ID, string _password, User **a);
};


#endif //TAREA_2_DATOS_II_LOGIN_H
