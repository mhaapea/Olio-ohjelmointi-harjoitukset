#include "car.h"

void Car::printData() const {
    std::cout<<"Brand: "<<brand<<", Model: "<<model<<", Released: "<<yearModel<<endl;
}

Car::Car(std::string newBrand, std::string newModel, int newYearModel) {
    brand = newBrand;
    model = newModel;
    yearModel = newYearModel;
}