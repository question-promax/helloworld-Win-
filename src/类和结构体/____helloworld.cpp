//类中的地址



#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Array
{
    private:
    int *arr;//数组首地址
    int size;//数组长度

    public:
    Array():arr(new int[20]), size(20)
    {
        cout << "成功在堆上生成20个长度数组" << endl;
    }

};