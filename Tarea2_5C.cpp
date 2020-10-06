/*Ejercicio 5. Crea un programa que imprima una tabla de multiplicar donde el usuario digite el tamaño*/
#include<iostream>

using namespace std;
int main()
{
    int num;
    cout<<"Ingrese el tamaño de la tabla que desea: ";
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        cout<<i<<"* ";
        for(int j=1;j<=num;j++)
        {
            cout<<i*j<<" ";
        }
        cout<<endl;
    }
    return 0;
}