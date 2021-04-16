//
// Created by olehh on 08-Mar-21.
//

#include "Recruiter.h"

void Recruiter::introduce() {
    std::cout<<"Good afternoon, my name is "<<getName()<<" "<<getSurname()<<" and I am Recruiter"<<std::endl;

}

void Recruiter::work() {
    std::cout<< getName()<<" is looking for new employees"<<std::endl;
}

void Recruiter::work(std::string ocupation) {
    std::cout<< getName()<<" is looking for new "<<ocupation<<std::endl;
}

Recruiter::Recruiter() {}

Recruiter::Recruiter(const std::string &name, const std::string &surname, int age) : Employee(name, surname, age) {}


