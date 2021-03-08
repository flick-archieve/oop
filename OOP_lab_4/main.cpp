#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Recruiter.h"
#include "Lecturer.h"


int main() {

    Person * person[3] = {
             new Student(),
             new Recruiter("Olena","Derkach",31),
             new Lecturer("Andriy","Prodivus",49)
    };

    for (int i = 0; i < 3; ++i) {
        std::cout<<i<<") ";
        person[i]->introduce();
    }
    std::cout<<std::endl;
    for (int i = 1; i < 3; ++i) {
        std::cout<<i<<") ";
       ( (Employee *) person[i])->work();
    }
    return 0;
}
