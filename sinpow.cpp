/* Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos, sin usar la funcion 
pow*/

#include<iostream>

using namespace std;

int main()
{
    int x,y, elevacion = 1;
    cout<<"Digite el valor de x: ";
    cin>>x;
    cout<<"Digite el valor de y: ";
    cin>>y;

    for(int i=1;i<=y;i++)
    {
        elevacion *= x; //recorre hasta el valor de y para multiplicar y veces x que es x^y
    }

    cout<<"\n El resultado de la elevacion es; "<<elevacion;
    return 0;
}