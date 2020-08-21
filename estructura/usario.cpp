#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

int main()
{
    string username;
    string password;
    int st=0;
    int intentos=0;

    

    do
    {
        cout<<"\n Ingrese el nombre de usuario : ";
        cin>>username;

        cout<<"\n Ingrese la contrasenia : ";
        cin>>password;

        if (password!= "Contrasenia")
        { intentos++;   

           cout<<"\n ***** Contrasenia erronea ***** \n";
        }
        else st=1;
        
    } while (intentos<3 && st==0);
 

    if (st==1)
    {
        cout<<" \n *****  Bienvenido  ***** \n";
        cout<<" \n *****  Has ingresado correctamente  *****\n";
    }
    else
        {
            cout<<"\n cantidad maxima de intentos \n";
        }
     
     return 0;
}