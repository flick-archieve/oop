//
// Created by olehh on 08-Mar-21.
//

#include "Employee.h"

void Employee::work() {
std::cout<<getName()<< "is working";
}

void Employee::introduce() {
    std::cout<<"Good afternoon, my name is "<<getName()<<" "<<getSurname()<<" and I am Employee"<<std::endl;

}

Employee::Employee() {}

Employee::Employee(const std::string &name, const std::string &surname, int age) : Person(name, surname, age) {}
