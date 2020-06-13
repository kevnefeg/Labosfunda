#include "iostream" 
using namespace std;
int duplicar(int);
int triplicar(int);
int cuadruplicar(int);
int quintuplicar(int);

int main(void)
{
int opcion, n;
bool repetir = true;
do{
cout << endl;
cout << "MULTIPLICAR UN NÚMERO" << endl << endl;
cout << "Digite un número entero: ";

cin >> n;
cout << endl;
cout << "Las opciones para multiplicar son:"<< endl;
cout << "1) Duplicar el valor." << endl;
cout << "2) Triplicar el valor." << endl;
cout << "3) Cuadruplicar el valor." << endl;
cout << "4) Quint   uplicar el valor." << endl;
cout << "5) Salir" << endl;
cout << "Elija su opción: ";
cin >> opcion;
cout << endl;
switch(opcion)
{
case 1:
cout << "El doble es: " << duplicar(n) << endl << endl;
break;
case 2:
cout << "El triple es: " << triplicar(n) << endl << endl;
break;
case 3:
cout << "El cuádruple es: " << cuadruplicar(n) << endl << endl;
break;
case 4:
cout << "El quíntuple es: " << quintuplicar(n) << endl << endl;
break;
case 5:
repetir = false;
break;
default:
cout << "Opción de menú no válida" << endl << endl;;
}

}while(repetir);
}
int duplicar(int n)
{
return 2 * n;
}
int triplicar(int n)
{
return 3 * n;
}
int cuadruplicar(int n)
{
return 4 * n;
}
int quintuplicar(int n)
{
return 5 * n;
}