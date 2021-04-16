//
// Created by olehh on 08-Mar-21.
//

#include "Student.h"

using namespace std;

void Student::introduce() {
    std::cout << "Sup! I`m " << getName() << " " << getSurname() << ", I`m " << getAge() << " y.o. "
              << "I`m studying in university." << std::endl;
}


void Student::addAssignment(string assignment) {
    assignments.push_back(assignment);
}

void Student::doTask() {
    cout << assignments.front() << "Was finished!";
    assignments.pop_front();
}

Student::Student() {

    std::cout<<"Student created"<<std::endl;
}

Student::~Student() {
    cout << "Student was deleted"<<std::endl;

}

Student::Student(Person *person, const list<string> &assignments) : Person(person), assignments(assignments) {}

Student::Student(Student *student) :
        assignments(student->assignments),
        Person(student->getName(),
               student->getSurname(),
               student->getAge()) {}






