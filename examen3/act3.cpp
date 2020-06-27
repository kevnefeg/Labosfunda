#include<iostream>
using namespace std;
//recopilacion de notas
void notas(  float x[ ])
{
    for (int i = 0; i < 5; i++)
    {
         cout<<"*-*-*-Ingrese la nota numero "<<i+1<<" = ";
        cin>>x[i];
    }
    
}
//promediando notas por 20%
float prom ( float x[ ])
{
    float k = 0;
    float j = 0;

    for (int i = 0; i < 5; i++)
    {
        j= (x[i]*0.20);
        k+=j;
    }
    return k;
}

int main()
{
//cantidad de alumnos
    int n;
    float x[100];
    cout<<"\n*-*-*-Ingrese la cantidad de alumnos-*-*-*\n";
    cin>>n;

//promedio y pasar o no pasar 
    for (int i = 0; i < n; i++)
    {
         cout<<"\n*-*-*-Notas del estudiante "<<i+1<<endl;
         notas(x);
         cout<<endl;

         float prome=prom(x);
         cout<<"El promedio de las notas del alumno "<<i+1<<" = "<<prom(x)<<endl;

    if (prome>70)
   {
    cout<<"\n *-*-*-APROBASTE-*-*-* \n";
   }
    else
   {
    cout<<"\n *-*-*-DESAPROBASTE-*-*-* \n";
   }
    }
}