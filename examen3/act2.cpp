#include<iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
//funcion que llena el arreglo con las alturas
void alturalumno(int n, float x[  ]){
        int i;

    for (int i = 0; i < n; i++)
    {
         cout<<"*-*-*-Ingrese la altura del alumno "<<i+1<<" en cm = ";
        cin>>x[i];
    }

}
//funcion con el promedio 
float promedio(float x[ ])
{
    int i;
    float suma = 0;
    int n=25;
    float prom;
    int abajo=0;
    int arriba=0;
    for (i = 0; i < n; i++)
    {
        suma = suma + x[i];
       prom = suma / n;
    }

    cout<<"\n*-*-*- El promedio es = "<<fixed<<setprecision(2)<<prom<<"cm";
    cout<<endl;

//cuales estan arriba y abajo de la media    
    for (i = 0; i < n; i++)
  {
    
    if (x[i]>prom)
    {
        
        arriba++;

    }
    else 
    {
         abajo++;
       
    }
  }
     cout<<"\n*-*-*- Abajo de la media = "<<abajo;
     cout<<endl;
     cout<<"\n*-*-*- Arriba de la media = "<<arriba;
     cout<<endl;
    

}
int main()
{
    int n=25;
    float x[100];
    cout<<"\n *-*-*-Bienvenido al programa de altura-*-*-* \n"<<endl;

    alturalumno(n, x);

    promedio(x);

     
system("pause");

}
