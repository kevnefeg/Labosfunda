#include <iostream>
#include <string.h>

using namespace std;
int main()
//programa que determina si inician y termian con la misma letra
{
    
    char palabra[20];
    cout<<"Inserte una palabra "<<endl; 
    cin>>palabra;
    int Nm = strlen(palabra);
    
    if (palabra[0]==palabra[Nm-1])
    {
        cout<<"Inicia y termina con la misma letra";
    }

    else  
    {
        cout<<"Inicia pero no termina con la misma letra";
    }
    
    
    

    
}