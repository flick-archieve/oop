//
// Created by olehh on 16-Apr-21.
//

#include "Superstudent.h"

Superstudent::Superstudent() {
    cout << "Superstudent was created"<<std::endl;
}

Superstudent::~Superstudent() {
    cout << "Superstudent was deleted"<<std::endl;
}

void Superstudent::introduce() {
    cout << "Hello, my name is" << getName()<<" "<< getSurname() << ", I`m" << getAge() <<
         " y. o.." << "My favourite language is: " << favouriteLanguage << endl;
}

void Superstudent::work() {
    cout<<"Working as a cashier in McDonalds..."<<endl;
}
