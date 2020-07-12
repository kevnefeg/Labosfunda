#include <iostream>
#include<conio.h>
#include <iomanip>

using namespace std;

//variables
const int longCad = 20;
struct costoPorArticulo{
char nombreArticul[longCad + 1];
int cantidad;
float precio;
float costoPorArticulo;
float total;
}prod[100];

//menu de opciones
    int menu(void)
{
    cout<<"\n1. Comprar un producto.";
    cout<<"\n2. Salir.";
    cout<<"\nIngrese su opcion: ";

}

//funcion que lee los datos //nombre, cantidad y precio
    void recopilacion(int max)
{
    
    for (size_t i = 0; i <max; i++)
    {

    cout<<"                Producto "<<i+1; 
    cout<<endl;

    cout<<" Ingrese el nombre del producto  a comprar = ";
    cin>>prod[i].nombreArticul;

	cout<<" Ingrese la cantidad del producto  a comprar = ";
    cin>>prod[i].cantidad;
   
    cout<<" Ingrese el precio del producto $ ";
    cin>>prod[i].precio;
    cout<<endl;
	   
     }
    
}

//funcion que calcula el costo por articulo
    float costo(int max)
{
    
    int num;
    for (size_t i = 0; i <max; i++)
    {

    prod[i].costoPorArticulo = prod[i].precio * prod[i].cantidad;    
    }
}

//funcion de impresion de recibo
    void factura(int max)
{
    int i;
    cout<<"\n****************************RECIBO****************************";


    for (size_t i = 0; i <max; i++)
    {

//factura	

	cout<<"\nProducto comprado: "<<prod[i].nombreArticul<<endl;
	cout<<setprecision(2)<<fixed<<"Precio del producto: "<<prod[i].precio<<endl;
	cout<<"Cantidad comprada: "<<prod[i].cantidad<<endl;
	cout<<"Sub Total: "<<prod[i].costoPorArticulo<<endl;
    cout<<endl;
    }

}

float preciototal(int max)
{
    float suma=0;

    //sumatoria del total de productos

    for (size_t i = 0; i < max; i++)
    {
        suma +=  prod[i].costoPorArticulo;
    
    }

         cout<<"\n El total de las compras es : $"<<suma;
         cout<<endl;

         system("pause");

    
}

//main

int main()
{
    int opcion;
    int max;
//entrada de opcion de menu

    cout<<"\n****************************TIENDA VIRTUAL****************************";
    menu();
    cin>>opcion;




//menu de opciones
    switch(opcion) 
{
	case 1 :
    
    cout<<"\n****************************TIENDA VIRTUAL****************************";
//ingreso de cantidad de productos
    cout<<"\n  Ingrese cantidad de productos = ";
    cin>>max; 


    cout<<endl;
    recopilacion(max);
    costo(max);
    factura(max);
    preciototal(max);


	break;
		
	case 2 : 
    cout<<"Gracias por usar nuestro servicio";

    break;
	return 0;
	
    getch();
    return 0;
} 
}