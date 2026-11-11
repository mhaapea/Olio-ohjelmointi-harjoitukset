#include <iostream>
#include "coffeemaker.h"

using namespace std;

int main() {
    CoffeeMaker objAutomaatti1(20.0, 10.0);
    objAutomaatti1.showStatus();
    objAutomaatti1.showMade();
    cout << "********************" << endl;
    objAutomaatti1.start();
    objAutomaatti1.lisaaVetta(10.0);
    objAutomaatti1.lisaaPapuja(5.0);
    objAutomaatti1.makeCoffee();

    objAutomaatti1.showStatus();
    objAutomaatti1.showMade();

    return 0;
}