//
// Created by olehh on 08-Mar-21.
//

#ifndef OOP_LAB_4_PERSON_H
#define OOP_LAB_4_PERSON_H
#include "iostream"

class Person {
public:
    Person();

    Person(const std::string &name, const std::string &surname, int age);
    std::string getName();
    std::string getSurname();
    int getAge();
    void setSurname(std::string);
    virtual void introduce();
private:
    std::string name;
    std::string surname;
    int age;
};


#endif //OOP_LAB_4_PERSON_H
