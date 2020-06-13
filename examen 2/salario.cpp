#include <iostream>
#include <iomanip>
using namespace std;
//analisis del salario 
    float salario(float horas,float horasplus )
{
     float  seguro, afp, renta, tasa;
    float N=1.75;
    float E=2.50;

    float salario=(horas*N)+(horasplus*E);
//salario mayor a 500
    if (salario>500)
    {
        seguro=(salario*0.04);
        afp=(salario*0.0625);
        renta=(salario*0.1);
        tasa=(seguro+afp+renta);

        salario=(salario-tasa);
        
    return salario;
//salario menor a 500
    }
    else if (salario<500)
    {
        seguro=(salario*0.04);
        afp=(salario*0.0625);
        tasa=(seguro+afp);

        salario=(salario-tasa);
        
    return salario;
    }
    
}
//calcular el salario total
    float real(float horas,float horasplus)
{
    float N=1.75;
    float E=2.50;

    float salario=(horas*N)+(horasplus*E);

    return salario;

}

int main()
{
    int horas;
    int trabaja, i;
    int horasplus;
    cout<<endl<<"       ******CALCULO DE SALARIO*****";
    cout<<endl;
    cout<<"*******Ingrese cantidad de Empleados******"<<endl;
    cin>>trabaja; 
 //Agrupacion de horas trabajadas y horas extras
    for (i=0; i<trabaja; i++)
    {
    cout<<endl;
    cout<<"           -----Empleado   "<<i+1<<"-----";
    cout<<endl;    

    cout<<"******Ingrese cantidad de horas trabajadas******"<<endl;
    cin>>horas;
    cout<<endl;

    cout<<"-*-*-*Ingrese horas extras*-*-*-"<<endl;
    cin>>horasplus;
    cout<<endl;
//salida del salario total y real 
     cout<<"-*-*-*Salario total:  $"<<fixed<<setprecision(2)<<real(horas,horasplus)<<endl;
     cout<<"-*-*-*Salario Real:   $"<<fixed<<setprecision(2)<<salario(horas,horasplus);
     cout<<endl;
    system("pause");
     
    }

}