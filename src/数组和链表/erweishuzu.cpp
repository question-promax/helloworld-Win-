//二维数组




#include <iostream>
using namespace std;

int main() {
int rows, cols;
cout << "Enter the number of rows: ";
cin >> rows;
cout << "Enter the number of columns: ";
cin >> cols;

// 创建一个二维数组来表示矩阵
int matrix[rows][cols];

// 通过循环来存储图像信息
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
cout << "Enter the value for matrix[" << i << "][" << j << "]: ";
cin >> matrix[i][j];
}
}

// 输出矩阵
cout << "The matrix is:" << endl;
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
cout << matrix[i][j] << " ";
}
cout << endl;
}

return 0;
}