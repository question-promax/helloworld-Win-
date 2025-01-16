#ifndef STUDENTATTENDANCEMANAGER_H
#define STUDENTATTENDANCEMANAGER_H

#include "student.h"
#include "attendance.h"
#include <vector>

class StudentAttendanceManager {
private:
    std::vector<Student> students;
    std::vector<Attendance> attendances;

public:
    void addStudent(Student student);
    void addAttendance(Attendance attendance);
    Student* findStudentById(int id);
    Student* findStudentByName(const std::string& name);
    std::vector<Attendance*> findAttendanceByCourseName(const std::string& courseName);
    std::vector<Attendance*> findAttendanceByStudentName(const std::string& studentName);
    void displayAllStudents();
    void displayAllAttendances();
    void editStudent(int id, Student updatedStudent);
    void deleteStudent(int id);
    void statisticsAbsenceByCourseName(const std::string& courseName);
    void statisticsAbsenceByStudentName(const std::string& studentName);
    void saveStudentsToFile();
    void saveAttendancesToFile();
    void readStudentsFromFile();
    void readAttendancesFromFile();
};

#endif