//
// Created by olehh on 07-Mar-21.
//

#ifndef UNTITLED4_DYHOTOMIA_H
#define UNTITLED4_DYHOTOMIA_H


class Dyhotomia {
public:
   void setBounds(double a,double b);
   void setTolerance(double eps);
   double calculate();
   double calculate(double a, double b, double eps);
private:
    double _a;  // нижня межа функції
    double _b;  // верзня межа функції
    double _eps;// максимальне відхилення
    double getEquationResult(double x);
};


#endif //UNTITLED4_DYHOTOMIA_H
