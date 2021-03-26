//
// Created by joel on 25/3/21.
//

#include "User.h"

string User::getName() {
    return name;
}

void User::setName(string _name) {
    name = _name;
}

string User::getPassword(){
    return password;
}
void User::setPassword(string _password){
    password = _password;
}

int User::getNumID(){
    return numID;
}
void User::setNumID(int id){
    numID = id;
}

User::User(string _name, string _password, int _numID) {
    setName(_name);
    setPassword(_password);
    setNumID(_numID);
}

User::~User() {

}

void User::showInformation() {
    cout<<"Nombre: "<<name<<endl;
    cout<<"Contraseña: "<<password<<endl;
    cout<<"Nùmero de ID: "<<numID<<endl;
}
