//
// Created by olehh on 08-Mar-21.
//

#include "Student.h"

void Student::introduce() {
    std::cout<<"Sup! I`m "<<getName()<<" "<<getSurname()<<", I`m "<<getAge()<<" y.o. "
    <<"I`m studying in "<<university<<" at "<<faculty<<" faculty at "<<speciality<<std::endl;
}

Student::Student(const std::string &name, const std::string &surname, int age, int yearOfEducation,
                 const std::string &university, const std::string &faculty, const std::string &speciality) : Person(
        name, surname, age), yearOfEducation(yearOfEducation), university(university), faculty(faculty), speciality(
        speciality) {}

Student::Student() : Person() ,
    yearOfEducation(1),university("LNU"),faculty("electronics"),speciality("software engineering"){}

