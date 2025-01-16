#include "student.h"
#include <iostream>

Student::Student(int i, std::string n, std::string g, int a, std::string c) 
    : id(i), name(n), gender(g), age(a), className(c) {}

int Student::getId() const { return id; }
std::string Student::getName() const { return name; }
std::string Student::getGender() const { return gender; }
int Student::getAge() const { return age; }
std::string Student::getClassName() const { return className; }

void Student::setId(int i) { id = i; }
void Student::setName(std::string n) { name = n; }
void Student::setGender(std::string g) { gender = g; }
void Student::setAge(int a) { age = a; }
void Student::setClassName(std::string c) { className = c; }

void Student::display() const {
    std::cout << "学号: " << id << ", 姓名: " << name << ", 性别: " << gender
              << ", 年龄: " << age << ", 班级: " << className << std::endl;
}