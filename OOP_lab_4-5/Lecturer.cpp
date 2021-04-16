//
// Created by olehh on 08-Mar-21.
//

#include "Lecturer.h"

void Lecturer::work() {
    std::cout<<getName()<<" is educating students";
}

Lecturer::Lecturer(const std::string &name, const std::string &surname, int age) : Employee(name, surname, age) {}
