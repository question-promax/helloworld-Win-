#include <iostream>
using namespace std;

template <typename T>
class SortArray {
private:
    T* arr;
    int size;

public:
    SortArray(T* array, int length) {
        arr = new T[length];
        size = length;
        for (int i = 0; i < length; i++) {
            arr[i] = array[i];
        }
    }

    void sort() {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    T temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int intArr[] = {3, 6, 2, 1, 4};
    SortArray<int> intSort(intArr, 5);
    cout<<"before sort: ";
    intSort.display();
    intSort.sort();
    cout<<"after sort: ";
    intSort.display();

    float floatArr[] = {3.1, 1.2, 4.5, 1.1,0.2};
    SortArray<float> floatSort(floatArr, 5);
    cout<<"before sort: ";
    floatSort.display();
    floatSort.sort();
    cout<<"after sort: ";
    floatSort.display();


    char charArr[] = {'s','d','a','y','t'};
    SortArray<char> charSort(charArr, 5);
    cout<<"before sort: ";
    charSort.display();
    charSort.sort();
    cout<<"after sort: ";
    charSort.display();

    return 0;
}

