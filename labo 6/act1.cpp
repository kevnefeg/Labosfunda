#include <iostream>

using namespace std;
int mcd(int nm1, int nm2)

{
    if (nm1 == 0)
    {
        return nm2;
    }
return mcd (nm2 % nm1, nm1);
     
}

int main()
{
    int nm1;
  int nm2;
  cout<<endl;

   cout<<"Ingrese primer valor"<<endl;
   cin>>nm1;

   cout<<"Ingrese segundo valor"<<endl;
   cin>>nm2;

   cout<<"El maximo comun divisor es: "<<endl<<mcd(nm1,nm2);



}