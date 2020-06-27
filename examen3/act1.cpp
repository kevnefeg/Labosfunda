#include<iostream>
using namespace std;

//almacenamiento
char  mensaje[100];
//codificacion
int letracod(char mensaje[100])
{
    for (int i = 0; i <=100; i++)
    {
        switch (mensaje[i])
        {
        case 'm':
            mensaje[i]=48;
            break;

        case 'u':
            mensaje[i]=49;
            break;

        case 'r':
            mensaje[i]=50;
            break;
        case 'c':
            mensaje[i]=51;
            break;
        case 'i':
            mensaje[i]=52;
            break;
        case 'e':
            mensaje[i]=53;
            break;
        case 'l':
            mensaje[i]=54;
            break;
        case 'a':
            mensaje[i]=55;
            break;
        case 'g':
            mensaje[i]=56;
            break;
        case 'o':
            mensaje[i]=57;
            break;
        
        
        default:
        mensaje[i]=mensaje[i];
            
        }
    }
    cout<<"\n Texto encriptado \n"<<mensaje;
}

int main()
{
//recopilacion de palabra

    cout<<"\n Ingrese la palabra \n";
    cin.getline(mensaje, 100);

    letracod(mensaje);

}
