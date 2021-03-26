//
// Created by joel on 25/3/21.
//

#include "Facade.h"
#include "string"
using namespace std;

Facade::Facade() {
    bool use = true;

    while (use){
        int auxInt;

        cout<<"(1) Ingresar --- (2) Salir"<<endl;

        cin>>auxInt;

        if (auxInt==1) {

            cout << "Ingrese su ID" << endl;
            int id;
            cin >> id;
            cout << "Ingrese su contraseña" << endl;
            string password;
            cin >> password;

            bool log = logIn.verify(id, password, users);

            if (log) {
                for (User i:users) {
                    if (password == i.getPassword() && id == i.getNumID()) {
                        user = &i;
                        break;
                    }
                }

                cout<<"(1) Mostrar Datos --- (2) Salir"<<endl;
                cin>>auxInt;

                if(auxInt==1){
                    user->showInformation();
                } else if(auxInt==2){
                    use= false;
                }

            } else {
                cout << "Usuario incorrecto" << endl;
            }

        } else if(auxInt==2){
            use= false;

        } else {
            cout<<"Ha introducido un valor incorrecto"<<endl;
        }
    }
}

Facade::~Facade() {

}
