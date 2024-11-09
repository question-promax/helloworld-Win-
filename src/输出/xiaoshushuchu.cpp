//n位小数输出


#include <iostream>
#include <iomanip>
using namespace std;

float x;
float y;
int main ()
{  if(x<=15)
{
    y=4*x/3;
}
 else
 {
     y=2.5*x-17.5;
 }


cout<<fixed<<setprecision(2)<<y;
    
}