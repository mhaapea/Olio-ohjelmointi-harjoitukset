#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main()
{
    vector<Car> carList;
    carList.emplace_back("Ford", "Mustang", 1996);
    carList.emplace_back("Mercedes", "C-505", 2012);
    carList.emplace_back("Toyota", "Hilux", 2002);

    carList[1].printData();

    for (const Car car: carList) {
        car.printData();
    }
    return 0;
}
