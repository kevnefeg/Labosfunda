#include <iostream>

using namespace std;
int main()
{
    cout<< "Bienvenido, Inserte 3 numero enteros para su promedio" << endl;
    float num1;
    float num2;
    float num3;

    cin >> num1 >> num2 >> num3 ;

    float promedio = (num1+num2+num3)/3;

    cout<< "Promedio" << endl;
    cout << promedio;

}


    