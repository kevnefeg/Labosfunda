 #include <iostream>

using namespace std;
int main()
{
    int negro, azul;
    int rosado, verde;
    int blanco, opc;

    cout<<"___________Escoga un color___________"<<endl;
    cout<<"1- negro"<<endl;
    cout<<"2- azul"<<endl;
    cout<<"3- rosado"<<endl;
    cout<<"4- verde"<<endl;
    cout<<"5- blanco"<<endl;

    cin>>opc;

    

    switch (opc)
    {
    case 1: cout<<"Usted a ganado $20";
        break;
    case 2: cout<<"Usted a ganado $500";
        break;
    case 3: cout<<"Usted a ganado $120";
        break;
    case 4: cout<<"Usted a ganado $250";
        break;
    case 5: cout<<"Usted a ganado $320";
        break;                
    
    default:
        break;
    }

    

    
    

    return 0;
}