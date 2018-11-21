#include <iostream>

using namespace std;

int main()
{
    cout << "Ejercicio de switch" << endl;
    int a, b, c, suma, multiplicacion;
    int opcion;

    cout << "Ingrese tres valores: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << "Ingrese una opcion: " << endl;
    cin >> opcion;

    switch(opcion){
        case 1:
            suma = a+b+c;
            cout << "El valor de la suma es: "<<suma << endl;
            break;
        case 2:
            multiplicacion = a*b*c
            cout << "El producto de lo tres valores es: "<< multiplicacion << endl;
            break;

        default:
            cout << "No hay resultados que mostrar ..." << endl;
            cout << "... ingrese un valor entre ..." << endl;
            cout << "1 y 2" << endl;
    }
    return 0;
}
