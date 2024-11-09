//if练习




#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b;

    cout << "Enter a number: "<<endl;
    cin >> b;

    if (a <= b) 
    {
        cout << "Hello,RoboMaster!" << endl;
         a += 1;
         ;
    }
     else  
    {
        cout << "Bye,RoboMaster!" << endl;
    }
    return 0;
}
/*
int main()
{   char  b ;
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
*/