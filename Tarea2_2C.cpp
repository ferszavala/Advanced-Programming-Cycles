/*Ejercicio 2. Crea un programa que imprima un diamante vacio de estrellas donde el usuario ingrese la 
altura*/
#include <iostream>

using namespace std;
int main() 
{
    int num=0, a=0, c1=0, c2=0;
    cout<<"Introduzca la altura que desee para el diamante: ";
    cin>>num;
    a=(num/2); 
    c1=a; c2=a;

    if(num%2==0)
    {
      for(int i=0;i<=num;i++)
      {
        for(int j=0;j<=num;j++)
        {
          if(i==0||i==num)
          {
            if(j==a)
            {
              cout<<"*";
            }
            else
            {
              cout<<" ";
            }
          }
          else
          {
            if(j==c1)
            {
              cout<<"*";
            }
            else if(j==c2)
            {
              cout<<"*";
            }
            else{
              cout<<" ";
            }
          }
        }
        if(i<a)
        {
          c2=c2+1;
          c1=c1-1;
        }
        else
        {
          c2=c2-1;
          c1=c1+1;
        }
        cout<<endl;
      }
  }
  else
  {
    for(int i=0;i<num;i++)
    {
      for(int j=0;j<num;j++)
      {
        if(i==0||i==num)
        {
          if(j==a)
          {
            cout<<"*";
          }
          else
          {
            cout<<" ";
          }
        }
        else
        {
          if(j==c1)
          {
            cout<<"*";
          }
          else if(j==c2)
          {
            cout<<"*";
          }
          else
          {
            cout<<" ";
          }
        }
      }
      if(i<a){
        c1=c1+1;
        c2=c2-1;
      }
      else
      {
        c1=c1-1;
        c2=c2+1;
      }
       cout<<endl;
    }
  }
  return 0;
}
