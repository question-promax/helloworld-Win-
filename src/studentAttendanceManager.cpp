#include "studentAttendanceManager.h"
#include <iostream>
#include <fstream>
#include <algorithm>

void StudentAttendanceManager::addStudent(Student student) {
    for (const auto& s : students) {
        if (s.getId() == student.getId()) {
            std::cout << "学号重复，添加失败！" << std::endl;
            return;
        }
    }
    students.push_back(student);
}

void StudentAttendanceManager::addAttendance(Attendance attendance) {
    attendances.push_back(attendance);
}

Student* StudentAttendanceManager::findStudentById(int id) {
    for (auto& s : students) {
        if (s.getId() == id) {
            return &s;
        }
    }
    return nullptr;
}

Student* StudentAttendanceManager::findStudentByName(const std::string& name) {
    for (auto& s : students) {
        if (s.getName() == name) {
            return &s;
        }
    }
    return nullptr;
}

std::vector<Attendance*> StudentAttendanceManager::findAttendanceByCourseName(const std::string& courseName) {
    std::vector<Attendance*> result;
    for (size_t i = 0; i < attendances.size(); ++i) {
        if (attendances[i].getCourseName() == courseName) {
            result.push_back(&attendances[i]);
        }
    }
    return result;
}

std::vector<Attendance*> StudentAttendanceManager::findAttendanceByStudentName(const std::string& studentName) {
    std::vector<Attendance*> result;
    for (size_t i = 0; i < attendances.size(); ++i) {
        if (attendances[i].getStudentName() == studentName) {
            result.push_back(&attendances[i]);
        }
    }
    return result;
}

void StudentAttendanceManager::displayAllStudents() {
    for (const auto& s : students) {
        s.display();
    }
}

void StudentAttendanceManager::displayAllAttendances() {
    for (const auto& a : attendances) {
        a.display();
    }
}

void StudentAttendanceManager::editStudent(int id, Student updatedStudent) {
    Student* foundStudent = findStudentById(id);
    if (foundStudent) {
        *foundStudent = updatedStudent;
    } else {
        std::cout << "未找到该学生，编辑失败！" << std::endl;
    }
}

void StudentAttendanceManager::deleteStudent(int id) {
    auto it = students.begin();
    while (it!= students.end()) {
        if (it->getId() == id) {
            it = students.erase(it);
            return;
        } else {
            ++it;
        }
    }
    std::cout << "未找到该学生，删除失败！" << std::endl;
}

void StudentAttendanceManager::statisticsAbsenceByCourseName(const std::string& courseName) {
    std::vector<Attendance*> absences = findAttendanceByCourseName(courseName);
    std::sort(absences.begin(), absences.end(), [](Attendance* a1, Attendance* a2) {
        return a1->getStudentName() < a2->getStudentName();
    });
    for (const auto& absence : absences) {
        if (absence->getAbsenceType() == "旷课") {
            absence->display();
        }
    }
}

void StudentAttendanceManager::statisticsAbsenceByStudentName(const std::string& studentName) {
    std::vector<Attendance*> absences = findAttendanceByStudentName(studentName);
    std::sort(absences.begin(), absences.end(), [](Attendance* a1, Attendance* a2) {
        return a1->getCourseName() < a2->getCourseName();
    });
    for (const auto& absence : absences) {
        if (absence->getAbsenceType() == "旷课") {
            absence->display();
        }
    }
}

void StudentAttendanceManager::saveStudentsToFile() {
    std::ofstream file("students.txt");
    if (file.is_open()) {
        for (const auto& s : students) {
            file << s.getId() << " " << s.getName() << " " << s.getGender() << " " 
                 << s.getAge() << " " << s.getClassName() << std::endl;
        }
        file.close();
    } else {
        std::cout << "无法打开文件保存学生信息！" << std::endl;
    }
}

void StudentAttendanceManager::saveAttendancesToFile() {
    std::ofstream file("attendances.txt");
    if (file.is_open()) {
        for (const auto& a : attendances) {
            file << a.getDate() << " " << a.getClassNumber() << " " << a.getCourseName() << " " 
                 << a.getStudentName() << " " << a.getAbsenceType() << std::endl;
        }
        file.close();
    } else {
        std::cout << "无法打开文件保存考勤信息！" << std::endl;
    }
}

void StudentAttendanceManager::readStudentsFromFile() {
    std::ifstream file("students.txt");
    if (file.is_open()) {
        int id, age;
        std::string name, gender, className;
        while (file >> id >> name >> gender >> age >> className) {
            students.emplace_back(id, name, gender, age, className);
        }
        file.close();
    } else {
        std::cout << "无法打开文件读取学生信息！" << std::endl;
    }
}

void StudentAttendanceManager::readAttendancesFromFile() {
    std::ifstream file("attendances.txt");
    if (file.is_open()) {
        std::string date, courseName, studentName, absenceType;
        int classNumber;
        while (file >> date >> classNumber >> courseName >> studentName >> absenceType) {
            attendances.emplace_back(date, classNumber, courseName, studentName, absenceType);
        }
        file.close();
    } else {
        std::cout << "无法打开文件读取考勤信息！" << std::endl;
    }
}