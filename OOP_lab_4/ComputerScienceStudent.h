//
// Created by olehh on 16-Apr-21.
//

#ifndef OOP_LAB_4_COMPUTERSCIENCESTUDENT_H
#define OOP_LAB_4_COMPUTERSCIENCESTUDENT_H


#include "Student.h"

class ComputerScienceStudent: public virtual Student {
protected:
    string laptop;
    string favouriteLanguage;
public:
    ComputerScienceStudent(Person *person, const list<string> &assignments, const string &laptop,
                           const string &favouriteLanguage);

    ComputerScienceStudent();

    virtual ~ComputerScienceStudent();
};


#endif //OOP_LAB_4_COMPUTERSCIENCESTUDENT_H
