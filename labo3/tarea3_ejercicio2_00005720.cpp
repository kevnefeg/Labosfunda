#include <iostream>

using namespace std;
int main()
{
    cout<< "Bienvenido" << endl;
    cout<< "Inserte el radio del circulo" << endl;
    float num1;
    float pi=3.1416;
    cin >> num1;
    //formulas

    float area = (pi*num1*num1);

    float perimetro = (2*pi*num1);

    cout<< "Area del circulo" << endl;
    cout << area << endl;

    cout<< "Perimetro del circulo" << endl;
    cout << perimetro;


}