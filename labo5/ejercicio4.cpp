#include <iostream>
#include <string.h>

using namespace std;
int main()
//programa que verifica si la cantidad de palabras es mayor a 10 o no y si la longitud es par o impar
{
    char palabra[20];
    int longitud=0;
    cout<<"Ingrese una palabra"<<endl;
    cin>>palabra;

    longitud=strlen(palabra);

    if(longitud>10){
        cout<<"La palabra es mayor a 10 caracteres"<<endl;
    }

    else if (longitud>=10){
        cout<<"La palabra contiene 10 caracteres"<<endl;
    }

    else  {
        cout<<"La palabra es menor a 10 caracteres"<<endl;
    }


     if(longitud%2==0){
        cout<<"El numero es par"<<endl;
    }

    else {
        cout<<"El numero es impar"<<endl;
    }

    


   
}