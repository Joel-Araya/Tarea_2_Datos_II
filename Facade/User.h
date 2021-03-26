//
// Created by joel on 25/3/21.
//

#ifndef TAREA_2_DATOS_II_USER_H
#define TAREA_2_DATOS_II_USER_H
#include "iostream"
#include "string"

using namespace std;

class User {
    private:
        string name;
        string password;
        int numID{};

    public:

        User(string _name, string password, int numID);
        ~User();

        string getName();
        void setName(string _name);

        string getPassword();
        void setPassword(string _password);

        int getNumID();
        void setNumID(int id);

        void showInformation();

};


#endif //TAREA_2_DATOS_II_USER_H
