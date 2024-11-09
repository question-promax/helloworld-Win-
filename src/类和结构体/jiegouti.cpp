//结构体

#include<iostream>
#include<string>

using namespace std;

string Students [] = { };



struct Student {
    string name;
    int age;
    string sex;
    int id;
};

int main() 
{
    Student stu1;
    stu1.name = "Alice";
    stu1.age = 18;
    stu1.sex = "Female";
    stu1.id = 12345678;
    
    Student stu2;
    stu2.name = "Bob";
    stu2.age = 20;
    stu2.sex = "Male";
    stu2.id = 87654321;





    cout << "Name: " << stu1.name << endl;
    cout << "Age: " << stu1.age << endl;
    cout << "Sex: " << stu1.sex << endl;
    cout << "ID: " << stu1.id << endl;
    
    return 0;
}