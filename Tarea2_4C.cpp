/*Ejercicio 4. Crea un programa que imprima un patron de 0s y *s en donde el usuario ingrese la altura y 
la anchura con entrada impar*/
#include<iostream>

using namespace std;
int main()
{
    int altura, anchura;
    cout<<"Ingresa la altura del patron: ";
    cin>>altura;
    cout<<"Ingresa la anchura del patron: ";
    cin>>anchura;
    for(int i=0;i<altura;i++)
    {
        for(int j=0;j<anchura;j++)
        {
            if(i%2 == 0)
            {
                cout<<"*";
            }
            else
            {
                if(j%2==0)
                {
                    cout<<"O";
                }
                else
                {
                    cout<<"*";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}