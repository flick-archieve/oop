//
// Created by olehh on 07-Mar-21.
//

#include "Dyhotomia.h"
#include <cmath>
#include <iostream>

void Dyhotomia::setBounds(double a, double b) {
    _a = a;
    _b = b;
}

void Dyhotomia::setTolerance(double eps) {
    _eps = eps;
}

double Dyhotomia::calculate() {
    double c = (_a + _b) / 2.0;
    if (getEquationResult(_a) * getEquationResult(c) < 0) {
        _b = c;
    } else {
        _a = c;
    }

    if(fabs(_b-_a)<=_eps){
        return (_a+_b)/2.0;
    }
    return calculate();
}

double Dyhotomia::calculate(double a, double b, double eps) {
    setBounds(a, b);
    setTolerance(eps);
    calculate();
}

double Dyhotomia::getEquationResult(double x) {
    return 3 * sin(sqrt(x)) + 0.35 * x - 3.8;
}
