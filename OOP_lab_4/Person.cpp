//
// Created by olehh on 08-Mar-21.
//


#include <iostream>
#include "Person.h"

Person::Person(const std::string &name, const std::string &surname, int age) : name(name), surname(surname), age(age){}

std::string Person::getName() {
    return name;
}

std::string Person::getSurname() {
    return surname;
}

int Person::getAge() {
    return age;
}

void Person::setSurname(std::string newSurname) {
std::cout<<"Surname was changed to "<< newSurname << " !"<<std::endl;
surname = newSurname;
}

void Person::introduce() {
    std::cout<<"Hello, my name is "<<name<<" "<<surname<<" and I am "<<age<<" years old.";
}

Person::Person():name("Oleh"),surname("Haliak"),age(18) {}
