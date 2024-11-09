//n次冒泡
#include <iostream>

using namespace std;

void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {//控制位移次数与幅度
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);//最大数右移
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    
    int a[50000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    bubbleSort(a, n);
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}