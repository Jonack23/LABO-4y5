#include <iostream>
using namespace std;

int main () {
    int rango=0;
    cout << "Determinacion de rango" << endl;
    cout << "Ingrese el rango: ";
    cin >> rango;

    if(rango >= 1 && rango <= 100){
        cout << "Dentro de rango" << endl;
    } else {
        cout << "Fuera de rango" << endl;
    }
    return 0;
}



