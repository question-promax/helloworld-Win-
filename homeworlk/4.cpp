#include <iostream>
#include <math.h>
using namespace std;
int sum(int x)
{
    int sum=0;
    while(x!=0)
    {
        sum+=x%10;
        x=x/10;
    }


}

int main() 
{
    int n=0;    
    
    cin >> n ;
    int sum(n) ;
    cout << sum << endl;
    return 0;
 
}