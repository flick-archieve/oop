#include <iostream>
#include "Dyhotomia.h"


int main() {
    Dyhotomia* dyhotomia = new Dyhotomia();
    dyhotomia->setBounds(2,3);
    dyhotomia->setTolerance(0.0005);
    std::cout<<"RESULT IS :";
    std::cout<< dyhotomia->calculate();
    delete(dyhotomia);
    return 0;
}
