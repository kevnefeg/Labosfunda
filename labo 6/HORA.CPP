#include <iostream>
#include <time.h>
using namespace std;

int hora(){}

int main()
{
//lector de hora
    time_t now = time (0);
    tm * time = localtime(&now);

//salida de hora actual sin segundo agregado    
    cout<<"La hora actual es : ";
    cout<< time->tm_hour<<":"<<time->tm_min<<":"<<time->tm_sec<<endl;
  
//proceso de suma de hora  
    if (time->tm_hour>= 0 && time->tm_hour<=23 && time->tm_min >=0 && time->tm_min<= 59 && time->tm_sec >= 0 && time->tm_sec <= 59)
{
    time->tm_sec++;

    if (time->tm_sec == 60)
    {
        time->tm_sec = 0;
        time->tm_min++;

        if (time->tm_min == 60)
        {
            time->tm_min = 0;
            time->tm_hour++;
            if (time->tm_hour == 24)
            {
                time->tm_hour = 0;
            }
            
        }
        

    }
    
}
//salida de hora con segundo
     cout<<"La hora actual con un segundo es  : ";
     cout<< time->tm_hour<<":"<<time->tm_min<<":"<<time->tm_sec<<endl;



}
