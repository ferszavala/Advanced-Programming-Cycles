//Reto 2. Regresa los numeros del 1 al 10000 que son divisibles entre la  suma de sus digitos
#include<iostream>

using namespace std;

int main()
{
    int unidades, decenas, centenas, millares, millares2, suma, save;
    for(int i=1;i<=10000;i++)
    {
        save=i;
        unidades=save%10; save=save/10; //va diviendo el numero en cifras
        decenas=save%10; save=save/10;
        centenas=save%10; save=save/10;
        millares=save%10; save=save/10;
        millares2=save%10; //este ya no lo divide entre 10 porque ya llego al limite de cifras
        suma = unidades+decenas+centenas+millares;
        suma = unidades+decenas+centenas+millares+millares2;
        if(i%suma==0)
        {
            cout<<i<<endl; //imprime los numeros que si son divisibles entre la suma de sus digitos
        }
    }
    return 0;
}