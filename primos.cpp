//Reto 3. Suma de primos del 0 al 10000
#include<iostream>

using namespace std;

int main()
{
    int mod, cont, suma=0;
    for (int i=1;i<=10000;i++)
    {
        for (int j=1;j<=i;j++)
        {
            mod=i%j;
            if(mod==0)
            {
                cont++;
            }
        }
        if (cont<=2)
        {
            //cout<<"El numero "<<i<<" es primo"<<endl;
            suma += i;
        }  
        cont=0;
    }
    cout<<"La suma de los primos es: "<<suma+1<<endl;
    return 0;
}