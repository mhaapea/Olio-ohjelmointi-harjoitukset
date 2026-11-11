#include <iostream>
#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <memory>

using namespace std;

int main()
{
    Car kaara;
    kaara.setBrand("Ford");
    kaara.setModel("Mustang");
    kaara.setYearModel(1990);
    kaara.printData();

    Rectangle *rect = new Rectangle;
    rect->setHeight(5);
    rect->setWidth(2);
    cout<<"Area: "<<rect->getArea()<<endl;
    cout<<"Circumference: "<<rect->getCircum()<<endl;
    delete rect;
    rect = nullptr;

    unique_ptr<Student> student = make_unique<Student>();
    student->setName("Aku");
    student->setStudentNumber(15);
    student->setAverage(4.3);

    cout<<"Name: "<<student->getName()<<endl;
    cout<<"ID: "<<student->getStudentNumber()<<endl;
    cout<<"Average: "<<student->getAverage()<<endl;
    return 0;
}
