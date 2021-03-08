//
// Created by olehh on 08-Mar-21.
//

#ifndef OOP_LAB_4_LECTURER_H
#define OOP_LAB_4_LECTURER_H


#include "Employee.h"

class Lecturer: public Employee {
public:
    Lecturer(const std::string &name, const std::string &surname, int age);

    void work() override;
};


#endif //OOP_LAB_4_LECTURER_H
