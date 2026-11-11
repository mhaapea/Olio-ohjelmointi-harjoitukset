#include "car.h"
Car::Car() : yearModel(0) {}

void Car::printData() {
    cout<<"Auton brandi: "<<brand<<endl;
    cout<<"Auton malli: "<<model<<endl;
    cout<<"Valmistusvuosi: "<<yearModel<<endl;
}

void Car::setBrand(std::string newBrand) {
    brand = newBrand;
}

void Car::setModel(std::string newModel) {
    model = newModel;
}

void Car::setYearModel(int newYearModel) {
    yearModel = newYearModel;
}