#include <iostream>


using namespace std;
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
    cout<<endl;
    cout<<"Ingrese el ano   :";
    cin>>year;

    if (bisiesto(year))
    {
        cout<<endl;
        cout<<"El ano es bisiesto";
    }

    else
    {
        cout<<endl;
        cout<<"El ano no es bisiesto";
    }
    
    return 0;
}