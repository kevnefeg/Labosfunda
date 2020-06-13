#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main()
{
    int Nm, dato, nm1;
    int conta=0;
    bool ingresa = false;
    int intentos =5;
//menu de opciones
    cout<<"*****Bienvenido al juego del azar*****"<<endl;
    cout<<"*****1--Jugar*****"<<endl;
    cout<<"*****2--Abandonar juego*****"<<endl;
    cin>>nm1;

    //numero random 
    srand(time(NULL));
    dato = 1 + rand()%(100);

    switch (nm1)
    {
    case 1:
        do
//entrada del numero 
    {   
        cout<<endl;
        cout<<"-----Escoge un numero de 1-100-----";
        cout<<endl;
        cout<<"INGRESE UN NUMERO:     ";
        cin>>Nm;
        if (Nm == dato)
        {
            ingresa = true;
        }
        
        else if (Nm>dato)
        {
            cout<<"\n* *Digite un numero menor* *\n";
    intentos--;
     if (intentos >0 && ingresa ==false)
     {
         cout<<"\n* *Te quedan "<<intentos<<" Intentos* *\n";}
        
        
        }
        else if (Nm<dato)
        {
            cout<<"\n* *Digite un numero mayor* *\n";
    intentos--;
     if (intentos >0 && ingresa ==false)
     {
         cout<<"\n* *Te quedan "<<intentos<<" Intentos* *\n";}
     
        }
        
        conta++;
        
    } while (ingresa == false && conta < 5);
//maximo de intentos
    if (ingresa == false)
    {
        cout<<"\n**********Numero maximo de intentos**********\n";

        cout<<"\n**********El numero era "<<dato<<"**********\n"<<endl;
        cout<<"\n*****Gracias por jugar*****\n";
    }
//ganador
    else
    {
        cout<<"\nFELICIDADES HAS GANADO!!!\n";
    }
    
    cout<<endl;

        break;

//salida del menu    
    case 2:

    cout<<"\n*****Gracias por jugar*****\n";

    break;
     
    
    }
    system("pause");
    return 0;

}

