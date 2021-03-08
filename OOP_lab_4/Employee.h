//
// Created by olehh on 08-Mar-21.
//

#ifndef OOP_LAB_4_EMPLOYEE_H
#define OOP_LAB_4_EMPLOYEE_H


#include "Person.h"

class Employee: public Person {
public:
    Employee();

    Employee(const std::string &name, const std::string &surname, int age);
    virtual void work();

private:
    void introduce() override;

};


#endif //OOP_LAB_4_EMPLOYEE_H
