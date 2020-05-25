#include <iostream>

using namespace std;
int main()
{
    cout<< "Bienvenido" << endl;
    string nombredelproducto;
    float precio;
    float cantidadcomprada;

    cout<< "Inserte nombre del producto" << endl;
    cin >> nombredelproducto;

    cout<< "Inserte precio" << endl;
    cout<< "$" ;
    cin >> precio;

    cout<< "Inserte cantidad" << endl;
    cin >> cantidadcomprada;
    //formula

    float compra=(precio*cantidadcomprada);


    cout<< "Producto Y Total Gastado" << endl;
    cout<<nombredelproducto  ;
    cout<< "---$" ;
    cout << compra << endl;

    




   


}