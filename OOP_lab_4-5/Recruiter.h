//
// Created by olehh on 08-Mar-21.
//

#ifndef OOP_LAB_4_RECRUITER_H
#define OOP_LAB_4_RECRUITER_H


#include "Employee.h"

class Recruiter: public Employee {
public:
    Recruiter();

    Recruiter(const std::string &name, const std::string &surname, int age);

    void introduce() override;

    void work() override;
    void work(std::string ocupation);
};


#endif //OOP_LAB_4_RECRUITER_H
