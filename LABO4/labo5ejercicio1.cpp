// AREAS de figuras geometricas //
#include <iostream>
using namespace std;

int main() {
    int opcion;
    float radio, lado, base, altura, area;

    cout << "1. Circulo" << endl;
    cout << "2. Cuadrado" << endl;
    cout << "3. Triangulo" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << " Ingrese el Radio ";
            cin >> radio;
            area = 3.1416 * radio * radio;
            cout << "El Area es: " << area << endl;
            break;
        case 2:
            cout << "Ingrese Lado ";
            cin >> lado;
            area = lado * lado;
            cout << " La Area es: " << area << endl;
            break;
        case 3:
            cout << "Ingrese la Base";
            cin >> base;
            cout << "Igrese la Altura: ";
            cin >> altura;
            area = (base * altura) / 2;
            cout << "El Area es: " << area << endl;
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
                return 0;
    }

    return 0;
}