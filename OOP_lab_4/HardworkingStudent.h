//
// Created by olehh on 16-Apr-21.
//

#ifndef OOP_LAB_4_HARDWORKINGSTUDENT_H
#define OOP_LAB_4_HARDWORKINGSTUDENT_H


#include "Student.h"

class HardworkingStudent : public virtual Student{
public:
    HardworkingStudent();

    HardworkingStudent(Student *student);

    virtual ~HardworkingStudent();

protected:
    void handInAllAssignments();
    void doBestOnExams();
};


#endif //OOP_LAB_4_HARDWORKINGSTUDENT_H
