//数组与指针


#include<iostream>

using namespace std;

int main() 
{   int sb [6] [6] = {
    { 0, 1, 2, 3, 4, 5},
    { 6, 7, 8, 9, 10, 11},
    { 12, 13, 14, 15, 16, 17},
};
    int a=sb[0][3];
    int c=1;
    int* b = &c;
    *b=8;
    
    
    
    cout << sb[2][0] << endl;
    return 0;
}