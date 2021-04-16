//
// Created by olehh on 08-Mar-21.
//

#ifndef OOP_LAB_4_EMPLOYEE_H
#define OOP_LAB_4_EMPLOYEE_H


#include "Person.h"

const int MIN_SALLARY = 6000;

class Employee: public virtual Person {
public:
    int sallary = MIN_SALLARY;
    Employee();

    Employee(const std::string &name, const std::string &surname, int age, int sallary);

    Employee(const std::string &name, const std::string &surname, int age);
    virtual void work();

    virtual ~Employee();

private:
    void introduce() override;

};


#endif //OOP_LAB_4_EMPLOYEE_H
