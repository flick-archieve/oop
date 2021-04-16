//
// Created by olehh on 08-Mar-21.
//

#ifndef OOP_LAB_4_STUDENT_H
#define OOP_LAB_4_STUDENT_H


#include "Person.h"
#include "list"

using namespace std;

class Student : public virtual Person {

public:
    Student();

    Student(Student *);


    Student(Person *person, const list<string> &assignments);

    void addAssignment(string assignment);

    void doTask();

    virtual ~Student();

protected:

    void introduce() override;

    list<string> assignments;


};


#endif //OOP_LAB_4_STUDENT_H
