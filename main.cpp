
/*
Ejercicio 5. Escriba un programa que pida dos números A y B e imprima en pantalla la división
A/B con redondeo.
Ej: si se ingresan 8 y 3 se debe imprimir:
8/3=3
Si se ingresan 7 y 3 se debe imprimir:
7/3=2
*/

#include <iostream>

using namespace std;

int main(){

    int numero_A;
    int numero_B;
    cout << "Ingrese el numero A: ";
    cin >> numero_A;
    cout << "Ingrese el numero B: ";
    cin >> numero_B;

    cout << numero_A << "/" << numero_B << "=" <<  numero_A % numero_B << endl;

    return 0;
}
