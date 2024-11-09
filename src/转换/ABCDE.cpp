//百分转五分





#include<iostream>
using namespace std;
int main()
{   
    char  b ;
    int a;
    cin >>a;
    if(a>=90) 
    {
        b='A';
    }
    else if(a>=80) 
    {
        b='B';
    }
    else if(a>=70) {
        b='C';
    }
    else if(a>=60)
    {
        b='D';
        }    
        else 
    {
        b ='E';
    }
    cout<<b<<endl;
    return 0;
}