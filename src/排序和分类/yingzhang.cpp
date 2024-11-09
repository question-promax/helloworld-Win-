/*
训练营的营长们工作非常辛苦，每天都要登记本营同学的作业成绩，并完成下列工作:

① 将所有营员成绩从高到低排序输出。
② 计算本次作业本营所有营员的总分并输出。
③ 计算本营本次作业的平均分并输出。
输入格式:

输入分为两行。
第一行为本营营员数量n（n≤25）
接下来在一行中输入n个营员的作业成绩（成绩为0-100之间的整数）.
输出格式:

输出分为两行。
第一行将所有营员的成绩由高到低排序输出，成绩之间间隔一个空格。
第二行输出本次作业的总分以及平均分，其中平均分的精度要求为保留到小数点后两位。
*/




#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{ int n;
 cin>>n;
    int score [n];
    int pos,min;
    for(int i=0;i<n;i++)
    {
        cin>>score [i];}
    
for (int i = 0; i < n; i++) {
min = score [i];
pos = i;
for (int j = i+1; j < n; j++) {
if (min > score[j]) {
min = score [j];
pos = j;
}
}
score [pos] = score [i];
score [i] = min;
}
for (int i = n-1; i >0; i--) {
cout<<score[i]<<" ";}
 cout<<score[0];
int sum=0;
 for(int i=0;i<n;i++){
     sum=sum+score[i];
 }
    double av;
 av=sum*1.0/n;
 

cout<<endl;
 cout<<sum<<" ";
cout<<fixed<<setprecision(2)<<av;
    
}