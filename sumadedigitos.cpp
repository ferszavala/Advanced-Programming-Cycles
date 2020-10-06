//Reto 1. Suma de digitos de un numero

#include <iostream>

using namespace std;

int main() 
{
    int num, mod, suma = 0, save;
    cout << "Ingrese el numero del que desea calcular la suma de sus digitos: ";
    cin >> num;
    save=num; //funciona de variable auxiliar
    while(num != 0) 
    {
        mod = num % 10;
        num /= 10;
        suma += mod;
    }
    cout << "\nLa suma de los digitos es de: " <<save<<" es "<<suma<<endl;
    return 0;
}