/*Ejercicio 3. Crea un programa que imprima una X de estrellas en donde el usuario ingrese la altura.*/
#include<iostream>

using namespace std;
int main()
{
    int num;
    cout<<"Digite el valor de la altura: ";
    cin>>num;
    int y=(num-1);
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            if((i==j)||((i+j)==y))
            {
            cout<<"*";
            }
            else
            {
            cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
     
     
          