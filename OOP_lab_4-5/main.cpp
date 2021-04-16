#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Recruiter.h"
#include "Lecturer.h"
#include "Superstudent.h"

using namespace std;
int main() {
    Superstudent *student = new Superstudent();
   cout<<endl;
    student->introduce();
    student->work();
    cout<<endl;
    delete(student);
}
