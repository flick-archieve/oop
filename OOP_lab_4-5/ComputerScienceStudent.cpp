//
// Created by olehh on 16-Apr-21.
//

#include "ComputerScienceStudent.h"

ComputerScienceStudent::ComputerScienceStudent(): laptop("Lenovo"),favouriteLanguage("of course ukrainian!") {

    std::cout<<"Computer science student created"<<std::endl;
}

ComputerScienceStudent::~ComputerScienceStudent() {
    cout << "ComputerScienceStudent was deleted"<<std::endl;

}

ComputerScienceStudent::ComputerScienceStudent(Person *person, const list<string> &assignments, const string &laptop,
                                               const string &favouriteLanguage) :
                                               Student(person, assignments),
                                               laptop(laptop), favouriteLanguage(
                                               favouriteLanguage) {}
