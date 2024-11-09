#include <iostream>
#include <cmath>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main() 
{
    int n=0;  
    double a=0,b=0;  
    
    cin >> n ;
    a= exp(n);
    b=(a - (1.0/a))*1.0/2;
    cout << fixed << setprecision(5) << b << endl; 
    return 0;  
}
