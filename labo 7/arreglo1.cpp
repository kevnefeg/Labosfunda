#include <iostream>
#include <conio.h>

using namespace std;
//arreglos
    void llenarArreglo(int x[ ], int n, int z[ ]);
    void creaciondearreglo3(int z[ ], int n, int x[ ]);

int main(void)
{
//ingreso de cantidad de elementos que tendra el elemento
    int a[100], n, b[100];    
    cout << endl;
    cout << "*-*-*-LLENAR DOS ARREGLO CON VALORES-*-*-*" << endl << endl;
    cout<<"\n*-*-*-Ingrese la cantidad de elementos-*-*-*\n";
    cin>>n;

  llenarArreglo(a, n, b);
  creaciondearreglo3(a,n, b);



cout << endl;
return 0;


}
//funcion de recopilacion de datos de arreglos
    void llenarArreglo(int x[ ], int n, int z[ ])
{
    int i;
    cout<<"\n*-*-*-Digite los "<<n<<" elementos del primer arreglo-*-*-*\n";

    for (int i = 0; i < n; i++)
    {
         cout<<"*-*-*-Ingrese el valor en la posicion "<<i+1<<" = ";
        cin>>x[i];
    }

    cout<<"\n*-*-*-Digite los "<<n<<" elementos del segundo arreglo-*-*-*\n";

    for (int i = 0; i < n; i++)
    {
         cout<<"*-*-*-Ingrese el valor en la posicion "<<i+1<<" = ";
        cin>>z[i];
    }
}
//funcion de creacion del 3 arreglo
   void creaciondearreglo3(int z[ ], int n, int x[ ])
{
   int i;
   int c[100];

    cout<<"\n*-*-*-Los elementos del tercer arreglo son-*-*-*\n";
    for (int i = 0; i < n; i++)
    {
        c[i]=x[i]+ z[i];
        cout<<c[i]<<endl;
}
}

