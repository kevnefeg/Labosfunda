#include <iostream>

using namespace std;
//analisis del year
    bool bisiesto(int year)
{    
    if (year%400 != 0)
    {
        return false;
    }
    else if (year%100 != 0) 
    {    
        return false;
    }    
    else if (year%4 !=  0)
    {   
        return false;
    }
    return true;

}

int main()
{
    int year;
//ingreso del year analizado
    cout<<endl;
    cout<<"*****Ingrese el ano   :";
    cin>>year; 
//opciones segun el analizis del year
    if (bisiesto(year))
    {
        cout<<endl;
        cout<<"*****El ano es bisiesto*****"<<endl;
    }

    else
    {
        cout<<endl;
        cout<<"*****El ano no es bisiesto******"<<endl;     
    }
    
    cout<<endl;

    system("pause");
    return 0;

}