#include<iostream>
#include<stdio.h>
using namespace std;
template<typename T>
void mySwap(T &a, T&b)
{
	T temp = a;
	a = b;
	b = temp;
}


template<class T>
void mySort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int min = i;
		for (int j = i + 1; j < len; j++)
		{
			if (arr[min] > arr[j])
			{
				min = j;
			}
		}
		if (min != i) {
			mySwap(arr[min], arr[i]);
		}
	}
}
template<typename T>
void printArray(T arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void test01()
{
	cout<<"before sort: ";
	char charArr[8] = {'n','s','a','j','l','k','d','s'};
	int num = sizeof(charArr) / sizeof(char);
	printArray(charArr, num);
	mySort(charArr, num);
	cout<<"after sort: ";
	printArray(charArr, num);
}

void test02()
{
	cout<<"before sort: ";
	int intArr[] = {5,55,2,22,4,77};
	int num = sizeof(intArr) / sizeof(int);
	printArray(intArr, num);
	mySort(intArr, num);
	cout<<"after sort: ";
	printArray(intArr, num);
}

int main() {


	test02();
	cout<<endl;
	test01();


	return 0;
}

