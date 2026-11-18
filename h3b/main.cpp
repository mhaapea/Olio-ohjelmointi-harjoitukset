#include <iostream>
#include "animal.h"
#include "dog.h"
#include <memory>

using namespace std;

int main()
{
    unique_ptr<Animal> animal = make_unique<Animal>();
    unique_ptr<Dog> dog = make_unique<Dog>();
    animal->callOut();
    dog->callOut();
    return 0;
}
    // kaksi kertaa animal poistettu terminaalissa en tiedä miten korjata