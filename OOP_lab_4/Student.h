//
// Created by olehh on 08-Mar-21.
//

#ifndef OOP_LAB_4_STUDENT_H
#define OOP_LAB_4_STUDENT_H


#include "Person.h"

class Student: public Person {
void introduce() override;

public:
    Student(const std::string &name, const std::string &surname, int age, int yearOfEducation,
            const std::string &university, const std::string &faculty, const std::string &speciality);

    Student();


private:
    int yearOfEducation;
    std::string university;
    std::string faculty;
    std::string speciality;
};


#endif //OOP_LAB_4_STUDENT_H
