#include <iostream>

using namespace std;
bool bisiesto (int anyo)
{
    return((anyo % 4) == 0 && (anyo % 100)!= 0) || ((anyo %400)== 0);
}
int dias_mes(int mes, int anyo)
{
    int dias = 31;
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        dias =30;
    } else if (mes == 2)
    {
        if (bisiesto(anyo))
        {
            dias =29;
        }
    else
    {
        dias = 28;
    }
       
    }
    
    return dias;
}

int main()
{
    int dia, mes, anyo;
    
//entrada de texto
    cout<<"\n Bienvenido este programa calculara el dia siguiente \n";
 
    cout<<"\nIngrese el dia:   ";
    cin>>dia;
    cout<<"\nIngrese el  mes:  ";
    cin>>mes;
    cout<<"\nIngrese el anyo:  ";
    cin>>anyo;
    dia++;

//formula
     if (dia > 31, mes >12)
    {
        cout<<"\nFecha no valida\n";
    }
    

    else if (dia > dias_mes(mes, anyo))
    {
        dia = 1;
        mes ++;

     if (mes > 12)
    {
        mes = 1;
        anyo++;
    }
    }

   
    
//salida de texto

    cout<<"\nEl dia siguiente es: ";


    cout<< dia << '/' << mes << '/' << anyo << endl;

    cout<<endl;

system("pause");
    
return 0;





}