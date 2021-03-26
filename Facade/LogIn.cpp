//
// Created by joel on 25/3/21.
//

#include "LogIn.h"
#include "User.h"



LogIn::~LogIn() {

}

LogIn::LogIn() {

}

bool LogIn::verify(int ID, string _password, User users[]) {

    for(int i=0; i<5; i++){
        if(users[i].getPassword()==_password && users[i].getNumID()==ID) {
            cout<<"Usuario ingresado correctamente"<<endl;
            return true;
        }
    }

    return false;
}
