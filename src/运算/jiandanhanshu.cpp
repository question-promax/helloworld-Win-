//运用后置函数的四则运算



#include <iostream>;

using namespace std;

  void jia_int(int a, int b);


void jian_int(int a, int b); 


void cheng_int(int a, int b);

void chu_float(float a, float b);

int sum;
void leijia_int(int a, int b)
{for(int i=a;i<=b;i++)
    {
        sum+=i;
    }
    cout <<sum<<endl;
}
int main() 
{

//jia_int(10, 10);

//jian_int(20, 10);

//cheng_int(20, 10);

//chu_float(20.5, 10.0);
return 0;


}
void jia_int(int a, int b)
{
   cout<< a+b <<endl;

}



 void jian_int(int a, int b)
{
 cout<< a-b <<endl;

}



void cheng_int(int a, int b)
{
 cout<< a*b <<endl;

}



void chu_float(float a, float b)
{
cout<< a/b<<endl;

}

