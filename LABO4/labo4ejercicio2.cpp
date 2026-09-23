// 2) solicitar el monto de una compra. Si supera $100 aplicar 10% decuento, 200 es el 20%.
#include <iostream>
using namespace std;
int main (){
    float compra= 0.0, descuento= 0.0, compratotal=0.0;
        cout << "compra con descuento " << endl;
        cout << " INgrese el valor de la compra " << endl;
        cin >> compra;
    if ( compra >= 100 && compra < 200){
        descuento = compra * 0.1;
        compratotal = compra - descuento;
        cout << " Su pago total con decuento es: " << compratotal;
    } else if (compra >= 200){
        descuento = compra * 0.2;
        compratotal = compra-descuento;
        cout << " Su pago total con decuento es: " << compratotal;
    } else {
        cout << " Su pago total es de: " << compra;
    }
    return 0;
}