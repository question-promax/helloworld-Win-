//逻辑练习


#include <iostream>

using namespace std;

int main()
{
   int a=10;
   int b=20;
   int c=30;
   int d=40;
   bool x=a<b;
   bool y=c>d;
   bool z=x&&y;
   bool w=x||y;
   bool h=!(y&&z); 
   cout<<x<<endl; 
   cout<<y<<endl; 
   cout<<z<<endl;
   cout<<w<<endl;
   cout<<h<<endl;
   return 0;
}
/*
==等于
<=小于等于
>=大于等于
!=不等于


=赋值
+=加等于
-=
*=
/=
%=
*/