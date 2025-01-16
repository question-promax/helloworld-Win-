#ifndef ATTENDANCE_H
#define ATTENDANCE_H

#include <string>

class Attendance {
private:
    std::string date;
    int classNumber;
    std::string courseName;
    std::string studentName;
    std::string absenceType;

public:
    Attendance(std::string d, int num, std::string cName, std::string sName, std::string type);

    std::string getDate() const;
    int getClassNumber() const;
    std::string getCourseName() const;
    std::string getStudentName() const;
    std::string getAbsenceType() const;

    void setDate(std::string d);
    void setClassNumber(int num);
    void setCourseName(std::string cName);
    void setStudentName(std::string sName);
    void setAbsenceType(std::string type);

    void display() const;
};

#endif