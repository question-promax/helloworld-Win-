#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
    int n=0,a=0,b=0,c=0,u=0;    
    
    cin >> n ;
    if (n<=999&&n>=100)
    {
        a=n%10;
        b=n/10%10;
        c=n/100;
        u=a*100+b*10+c;
        cout << u <<endl;   
    }
    else cout << "-1" << endl;
}
