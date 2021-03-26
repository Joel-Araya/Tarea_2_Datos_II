#include <iostream>
#include "Builder/Director.h"
#include "Facade/Facade.h"

using namespace std;

int main() {

    int aux;
    cout<<"Indique el patrón de diseño que desea utilizar\n (1) Builder - (2) Facade"<<endl;
    cin>>aux;

    if(aux == 1){
        Director::RunExample();

    } else if(aux==2){
        Facade facade = Facade();

    }
}
