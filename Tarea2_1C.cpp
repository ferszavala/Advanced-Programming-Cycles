/*Ejercicio 1. Crea un programa que regrese el factor mas grande de un numero*/
#include<iostream>

using namespace std;
int main()
{
    int num, c=0;
    cout<<"Ingrese el numero del que desea obtener el factor más grande :";
    cin>>num;
    for (int i=1;i<num;i++)
    { 
        if (num%i == 0 && i>c)
        { 
        c=i; 
        }
    }
    cout<<"El factor más grande de "<<num<<" es "<<c<<endl;
    return 0;
}