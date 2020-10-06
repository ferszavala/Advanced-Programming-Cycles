/*Realice un programa que calcule y muestre en la salida estándar la suma de los cuadrados de los 10
primeros enteros mayores a 0*/
#include<iostream>

using namespace std;

int main()
{
    int suma, cuadrado;
    for(int i=1; i<=10; i++)
    {
        cuadrado = i*i;
        suma += cuadrado; // es lo mismo que suma = suma+cuadrado;
    }

    cout<<"\n La suma de los cuadrados es: "<<suma;
    return 0;
}