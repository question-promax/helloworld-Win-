#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
    int n=0,m=0,p=0;    
    
    cin >> n ;
    m=n *100000;
    for (int i=0; i<n; i++)
    {
        p=p+pow(2,i);
    }
 
    cout << m << endl;
    cout << p << endl;

    return 0;
}
