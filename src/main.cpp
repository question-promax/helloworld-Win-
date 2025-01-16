#include "studentAttendanceManager.h"
#include <iostream>


int main() {
    StudentAttendanceManager manager;

    int choice;
    do {
        std::cout << "1. 添加学生" << std::endl;
        std::cout << "2. 添加考勤" << std::endl;
        std::cout << "3. 按学号查询学生" << std::endl;
        std::cout << "4. 按姓名查询学生" << std::endl;
        std::cout << "5. 按课程名查询考勤" << std::endl;
        std::cout << "6. 按学生姓名查询考勤" << std::endl;
        std::cout << "7. 显示所有学生" << std::endl;
        std::cout << "8. 显示所有考勤" << std::endl;
        std::cout << "9. 编辑学生" << std::endl;
        std::cout << "10. 删除学生" << std::endl;
        std::cout << "11. 按课程名统计旷课" << std::endl;
        std::cout << "12. 按学生姓名统计旷课" << std::endl;
        std::cout << "13. 保存学生信息到文件" << std::endl;
        std::cout << "14. 保存考勤信息到文件" << std::endl;
        std::cout << "15. 从文件读取学生信息" << std::endl;
        std::cout << "16. 从文件读取考勤信息" << std::endl;
        std::cout << "0. 退出" << std::endl;

        std::cout << "请选择操作: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                int id, age;
                std::string name, gender, className;
                std::cout << "请输入学号: ";
                std::cin >> id;
                std::cout << "请输入姓名: ";
                std::cin >> name;
                std::cout << "请输入性别: ";
                std::cin >> gender;
                std::cout << "请输入年龄: ";
                std::cin >> age;
                std::cout << "请输入班级: ";
                std::cin >> className;
                manager.addStudent(Student(id, name, gender, age, className));
                break;
            }
            case 2: {
                std::string date, courseName, studentName, absenceType;
                int classNumber;
                std::cout << "请输入缺课日期: ";
                std::cin >> date;
                std::cout << "请输入第几节课: ";
                std::cin >> classNumber;
                std::cout << "请输入课程名称: ";
                std::cin >> courseName;
                std::cout << "请输入学生姓名: ";
                std::cin >> studentName;
                std::cout << "请输入缺课类型(迟到、早退、请假、旷课): ";
                std::cin >> absenceType;
                manager.addAttendance(Attendance(date, classNumber, courseName, studentName, absenceType));
                break;
            }
            case 3: {
                int id;
                std::cout << "请输入学号: ";
                std::cin >> id;
                Student* student = manager.findStudentById(id);
                if (student) {
                    student->display();
                } else {
                    std::cout << "未找到该学生！" << std::endl;
                }
                break;
            }
            case 4: {
                std::string name;
                std::cout << "请输入姓名: ";
                std::cin >> name;
                Student* student = manager.findStudentByName(name);
                if (student) {
                    student->display();
                } else {
                    std::cout << "未找到该学生！" << std::endl;
                }
                break;
            }
            case 5: {
                std::string courseName;
                std::cout << "请输入课程名称: ";
                std::cin >> courseName;
                std::vector<Attendance*> attendances = manager.findAttendanceByCourseName(courseName);
                for (const auto& attendance : attendances) {
                    attendance->display();
                }
                break;
            }
            case 6: {
                std::string studentName;
                std::cout << "请输入学生姓名: ";
                std::cin >> studentName;
                std::vector<Attendance*> attendances = manager.findAttendanceByStudentName(studentName);
                for (const auto& attendance : attendances) {
                    attendance->display();
                }
                break;
            }
            case 7:
                manager.displayAllStudents();
                break;
            case 8:
                manager.displayAllAttendances();
                break;
            case 9: {
                int id;
                std::cout << "请输入要编辑的学生学号: ";
                std::cin >> id;
                int newId, newAge;
                std::string newName, newGender, newClassName;
                std::cout << "请输入新学号: ";
                std::cin >> newId;
                std::cout << "请输入新姓名: ";
                std::cin >> newName;
                std::cout << "请输入新性别: ";
                std::cin >> newGender;
                std::cout << "请输入新年龄: ";
                std::cin >> newAge;
                std::cout << "请输入新班级: ";
                std::cin >> newClassName;
                manager.editStudent(id, Student(newId, newName, newGender, newAge, newClassName));
                break;
            }
            case 10: {
                int id;
                std::cout << "请输入要删除的学生学号: ";
                std::cin >> id;
                manager.deleteStudent(id);
                break;
            }
            case 11: {
                std::string courseName;
                std::cout << "请输入课程名称: ";
                std::cin >> courseName;
                manager.statisticsAbsenceByCourseName(courseName);
                break;
            }
            case 12: {
                std::string studentName;
                std::cout << "请输入学生姓名: ";
                std::cin >> studentName;
                manager.statisticsAbsenceByStudentName(studentName);
                break;
            }
            case 13:
                manager.saveStudentsToFile();
                break;
            case 14:
                manager.saveAttendancesToFile();
                break;
            case 15:
                manager.readStudentsFromFile();
                break;
            case 16:
                manager.readAttendancesFromFile();
                break;
            case 0:
                break;
            default:
                std::cout << "无效的选择，请重新输入！" << std::endl;
        }
    } while (choice!= 0);

    return 0;
}