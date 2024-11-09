#include <cctype>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
class ImageMatrix
{
private:
    vector<vector<int>> matrix;

public:
    ImageMatrix(int, int);
    bool empty() const { return matrix.empty(); }
    void scan();
    void print() const;
    void binary_print() const;
    void modify_point(int, int, int);
    void modify_rect(int, int, int, int, int);
    void thresholding(int);
    void flip();
    void rotate();
};
#include <iostream>

using namespace std;
int main ()
{
    cout<<"  *"<<endl;
    cout<<" ***"<<endl;
}  
// 只支持数字间只有一个空格、行末无多余空格的数据
void ImageMatrix::scan()
{
    int a, c;
    while (true)
    {
        c = getchar();
        if (c == EOF)
            break;
        matrix.emplace_back();
        while (c != '\n')
        {
            if (!isdigit(c))
                c = getchar();
            for (a = 0; isdigit(c); c = getchar())
                a = a * 10 + (c & 15);
            matrix[matrix.size() - 1].emplace_back(a);
        }
    }
}
void ImageMatrix::print() const
{
    for (const auto &row : matrix)
    {
        for (const int &a : row)
            printf("%d ", a);
        putchar('\n');
    }
}
void ImageMatrix::binary_print() const
{
    for (const auto &row : matrix)
    {
        for (const int &a : row)
            printf(a ? "O " : ". ");
        putchar('\n');
    }
}
void ImageMatrix::modify_point(int x, int y, int value)
{
    matrix[x][y] = value;
}
void ImageMatrix::modify_rect(int x, int y, int w, int h, int value)
{
    for (int i = 0; i < w; ++i)
        matrix[x][y + i] = matrix[x + h - 1][y + i] = value;
    for (int i = 0; i < h; ++i)
        matrix[x + i][y] = matrix[x + i][y + w - 1] = value;
}
// 阀值化
void ImageMatrix::thresholding(int thr)
{
    for (auto &row : matrix)
        for (int &a : row)
            if (a <= thr)
                a = 0;
}
// 左右翻转
void ImageMatrix::flip()
{
    for (auto &row : matrix)
        reverse(row.begin(), row.end());
}
// 顺时针转90度
void ImageMatrix::rotate()
{
    vector<vector<int>> tmp;
    for (int i = 0; i < matrix[0].size(); ++i)
    {
        tmp.emplace_back();
        for (int j = matrix.size() - 1; ~j; --j)
            tmp[i].emplace_back(matrix[j][i]);
    }
    swap(matrix, tmp);
}
void test1()
{
    ImageMatrix matrix(5, 7);
    matrix.modify_rect(0, 0, 7, 5, 255);
    matrix.modify_point(0, 0, 0);
    // 上下翻转
    {
        matrix.flip();
        matrix.rotate();
        matrix.rotate();
    }
    matrix.print();
}
void test2()
{
    freopen("test2_input.txt", "r", stdin); // 偷懒用freopen实则不会c++标准库中的文件操作
    ImageMatrix matrix(5, 7); // Provide dimensions for the constructor
    matrix.scan();
    matrix.thresholding(100);
    matrix.rotate();
    matrix.flip();
    matrix.binary_print();
}
int main()
{
    test2();
}