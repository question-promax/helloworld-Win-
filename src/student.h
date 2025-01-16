#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    int id;
    std::string name;
    std::string gender;
    int age;
    std::string className;

public:
    Student(int i, std::string n, std::string g, int a, std::string c);

    int getId() const;
    std::string getName() const;
    std::string getGender() const;
    int getAge() const;
    std::string getClassName() const;

    void setId(int i);
    void setName(std::string n);
    void setGender(std::string g);
    void setAge(int a);
    void setClassName(std::string c);

    void display() const;
};

#endif