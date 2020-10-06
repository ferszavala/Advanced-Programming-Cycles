//Escriba un programa que calcule el valor de 1+3+5+...+2n-1
#include<iostream>

using namespace std;

int main()
{
    int n, suma=0;
    cout<<"Digite n: "<<endl;
    cin>>n;

    for(int i=1;i<=2*n-1;i+=2) //suma de numeros impares, es por eso que llega hasta uno menos a 2*n y va sumando de 2 en 2
    {
        suma += i; 
    }
    cout<<"La suma es: "<<suma;
return 0;
}