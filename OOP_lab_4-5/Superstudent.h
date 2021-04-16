//
// Created by olehh on 16-Apr-21.
//

#ifndef OOP_LAB_4_SUPERSTUDENT_H
#define OOP_LAB_4_SUPERSTUDENT_H


#include "ComputerScienceStudent.h"
#include "HardworkingStudent.h"
#include "Employee.h"

class Superstudent : public ComputerScienceStudent, public HardworkingStudent, public Employee{
public:
    Superstudent();

    void introduce() override;

    virtual ~Superstudent();

    void work() override;
};


#endif //OOP_LAB_4_SUPERSTUDENT_H
