/*本题要求编写程序，输入N个学生的MOOC成绩，统计优秀、合格证书的数量，以及没有获得证书的数量。学生修读程序设计MOOC，85分及以上获得优秀证书，不到85分但是60分及以上获得合格证书，不到60分则没有证书。
输入格式:

输入在第一行中给出非负整数N，即学生人数。第二行给出N个非负整数，即这N位学生的成绩，其间以空格分隔。  
输出格式:

在一行中依次输出优秀证书、合格证书、没有获得证书的数量，中间以空格分隔。请注意，最后一个数字后没有空格。*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    int a = 0, b = 0, c = 0;
    cin >> n;
    int score[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> score[i];
        if (score[i] >= 85) a++;
        else if (score[i] >= 60) b++;
        else c++;
    }
    cout << a << " "<< b << " "<< c << endl;
    return 0;
}
