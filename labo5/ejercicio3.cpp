#include <iostream>

using namespace std;
int main()
// Programa en c++ que verifica si un número es positivo, negativo o cero.
{
    float numero;
    cout<<"Ingrese un numero: "<<endl;
    cin>>numero;

    if(numero>0){
        cout<<"El numero es positivo";
    }else if(numero<0){
        cout<<"El numero es negativo";
    }else{
        cout<<"El numero es 0";
    }
}