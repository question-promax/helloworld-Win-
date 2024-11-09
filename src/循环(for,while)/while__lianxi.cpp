//while的运用


#include <iostream>

using namespace std;

int main() 
{
    int a = 0;

    /*
    while (a <= 10) 
    {
        cout << "Hello,RoboMaster!" << endl;
        a++;
    }
    */
   do
   {
    cout << "Hello,RoboMaster!" << endl;
    a++;
   } while (a < 0);
   
    return 0;
}