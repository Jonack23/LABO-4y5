#include <iostream>
using namespace std;
int main() {
    int opcion;
    float saldo = 1000;
    float monto;

        cout << "1. Ingresar dinero" << endl;
        cout << "2. Retirar dinero" << endl;
        cout << "Elija una opcion ";
        cin >> opcion;

        switch (opcion )
        {
        case 1:{
            cout <<"ingrese el monto ";
            cin>> monto;
            saldo= monto + saldo;
            cout << "su saldo es " << saldo <<endl;
            break;
        }
        case 2:{
            cout <<"ingrese cuanto desea retirar";
            cin>> monto;
            if(monto <=1000){
            saldo = saldo - monto;
            cout << "su saldo es" << saldo << endl;}
            else{
                cout << "saldo insuficiente "<< endl;
            }
            break;
        }
        default:
        cout << "opcion invalida";
            break;
        }
        return 0;
}


       