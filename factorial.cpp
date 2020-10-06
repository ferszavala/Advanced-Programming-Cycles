/*Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! (suma de factoriales)*/
#include<iostream>

using namespace std;
int main()
{
    int suma=0,n,factorial=1;
    cout<<"Digite n: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        factorial *= i;
        suma += factorial;
    }
    cout<<"\nLa suma es "<<suma<<endl;
    return 0;
}