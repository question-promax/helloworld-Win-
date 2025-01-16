#include "attendance.h"
#include <iostream>

Attendance::Attendance(std::string d, int num, std::string cName, std::string sName, std::string type) 
    : date(d), classNumber(num), courseName(cName), studentName(sName), absenceType(type) {}

std::string Attendance::getDate() const { return date; }
int Attendance::getClassNumber() const { return classNumber; }
std::string Attendance::getCourseName() const { return courseName; }
std::string Attendance::getStudentName() const { return studentName; }
std::string Attendance::getAbsenceType() const { return absenceType; }

void Attendance::setDate(std::string d) { date = d; }
void Attendance::setClassNumber(int num) { classNumber = num; }
void Attendance::setCourseName(std::string cName) { courseName = cName; }
void Attendance::setStudentName(std::string sName) { studentName = sName; }
void Attendance::setAbsenceType(std::string type) { absenceType = type; }

void Attendance::display() const {
    std::cout << "缺课日期: " << date << ", 第几节课: " << classNumber
              << ", 课程名称: " << courseName << ", 学生姓名: " << studentName
              << ", 缺课类型: " << absenceType << std::endl;
}