#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;

void fun1()
{
    int a[10];
    ifstream infile("in.txt");
    if (!infile) {
        std::cerr << "open in.txt error!" << endl;
        exit(1);
    }
    ofstream outfile1("f1.txt"), outfile2("f2.txt");
    if (!outfile1) {
        cerr << "open f1.txt error!" << endl;
        exit(1);
    }
    if (!outfile2) {
        cerr << "open f2.txt error!" << endl;
        exit(1);
    }
    for (int i = 0; i < 10; i++) {
        infile >> a[i];
        outfile1 << a[i] << " ";
    }
    outfile1 << endl;
    for (int i = 10; i < 20; i++) {
        infile >> a[i - 10];
        outfile2 << a[i - 10] << " ";
    }
    outfile2 << endl;
    infile.close();
    outfile1.close();
    outfile2.close();
}

void fun2()
{
    ifstream infile("f1.txt");
    if (!infile) {
        cerr << "open f1.txt error!" << endl;
        exit(1);
    }
    ofstream outfile("f2.txt", ios::app);
    if (!outfile) {
        cerr << "open f2.txt error!" << endl;
        exit(1);
    }
    int num;
    while (infile >> num) {
        outfile << num << " ";
    }
    outfile << endl;
    infile.close();
    outfile.close();
}

void fun3()
{
    ifstream infile("f2.txt");
    if (!infile) {
        cerr << "open f2.txt error!" << endl;
        exit(1);
    }
    int a[20];
    int i, j, k;
    for (i = 0; i < 20; i++) {
        infile >> a[i];
    }
    for (i = 0; i < 19; i++) {
        for (j = 0; j < 19 - i; j++) {
            if (a[j] > a[j + 1]) {
                k = a[j];
                a[j] = a[j + 1];
                a[j + 1] = k;
            }
        }
    }
    infile.close();
    ofstream outfile("f2.txt", ios::out);
    if (!outfile) {
        cerr << "open f2.txt error!" << endl;
        exit(1);
    }
    cout << "data in f2.txt:" << endl;
    for (i = 0; i < 20; i++) {
        outfile << a[i] << " ";
        cout << a[i] << " ";
    }
    cout << endl;
    outfile.close();
}

int main()
{
    fun1();
    fun2();
    fun3();
    return 0;
}

