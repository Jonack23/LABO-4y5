#include <iostream>  //1) pide la edad de una persona y detenermina si es mayor o menor de edad.
using namespace std;
int main () {
    int edad =0;
    cout << " Determinar si eres mayor de edad" << endl;
    cout << "Ingresa tu edad" << endl;
    cin >> edad;

    if (edad >= 18 ){
        cout << " ERES MAYOR DE EDAD!!" << endl;
    } else
    {
        cout << " ERES MENOR DE EDAD" << endl;
    }
    return 0;
}