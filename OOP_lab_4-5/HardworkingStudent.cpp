//
// Created by olehh on 16-Apr-21.
//

#include "HardworkingStudent.h"

void HardworkingStudent::handInAllAssignments()
{
    while (!assignments.empty()) {
        doTask();
    }
    cout << "All assignments done!";
}

HardworkingStudent::HardworkingStudent() {
    std::cout<<"Hardworking student created"<<std::endl;
}

HardworkingStudent::~HardworkingStudent() {

    cout << "HardWorkingStudent was deleted"<<std::endl;
}

HardworkingStudent::HardworkingStudent(Student *student) : Student(student) {}

void HardworkingStudent::doBestOnExams() {
    cout << "Exam result is 100/100. Easy!";
}
