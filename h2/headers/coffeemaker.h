#ifndef COFFEEMAKER_H
#define COFFEEMAKER_H
#include <iostream>
using namespace std;

class CoffeeMaker {
private:
    float v_tilavuus = 10;
    float v_maara = 0;
    float papu_max = 50;
    float papu_maara = 0;
    bool tila = false;

public:
    CoffeeMaker(float vt, float pm);
    void start();
    void stop();
    void lisaaVetta(float vm);
    void lisaaPapuja(float pm);
    void makeCoffee();
};

#endif // COFFEEMAKER_H