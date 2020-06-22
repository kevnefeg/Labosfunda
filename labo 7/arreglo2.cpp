#include <iostream>
#include <conio.h>
using namespace std;

//cantida de elementos impares
 int arreglo[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29,
    31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67,
    69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97, 99};


int main()
{
//despliege de informacion
   cout<<"\n*-*-*-Bienvenido al programa-*-*-*\n";
   cout<<"\nAcontinuacion se desplegara los numeros impares del 1-100\n";
//pausa para no correr todo sin dejar leer antes
   system("pause");
    int i, k, orden;

    for ( i = 0; i < 49; i++)
    {
        for ( k = 0; k < 49; k++)
        {
            if (arreglo[k] > arreglo[k+1])
            {
                orden = arreglo[k];
                arreglo[k] = arreglo[k + 1];
                arreglo[k +1] = orden;

            }
            
        }
        
    }
//salida de los numeros
    cout<<"\nORDEN DESCENDENTE\n";
    for ( i = 49; i>= 0; i--)
    {
        cout<<arreglo[i]<<"  "<<"  "<<endl;
    }

    getch();
    return 0;
    
    
}