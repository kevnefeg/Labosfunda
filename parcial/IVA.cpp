 #include <iostream>

using namespace std;
int main()
{
    string pais;
    int mn;
    getline(cin,pais);
    float dinero, IVA;
    cout<<"Ingrese pais:"<<endl;
    cout<<"1--El Salvador"<<endl<<"2--Guatemala"<<endl<<"3--Honduras"<<endl<<"4--Espana"<<endl;
    cin>>pais;
    cout<<"Ingrese cantidad de dinero $";
    cin>>dinero;
    

    if (pais=="1")
        {
            IVA= dinero*0.13;
            cout<<"Su IVA es de:$"<<IVA<<endl;
        }
        
       
   
    else if (pais=="2")
        {
            IVA= dinero*0.09;
            cout<<"Su IVA es de:$"<<IVA<<endl;
        }
        
       
  
    else  if (pais=="3")
        {
            IVA= dinero*0.15;
            cout<<"Su IVA es de:$"<<IVA<<endl;
        }
        
       
    else if (pais=="4")
        {
            IVA= dinero*0.20;
            cout<<"Su IVA es de:$"<<IVA<<endl;
        }
    
    else
    {
        cout<<"Ingrese un pais valido";
    }
    

    return 0;
  
  
    
   

}