#include "animal.h"

Animal::Animal() {}

Animal::~Animal()
{
    cout<<"animal poistettu"<<endl;
}

void Animal::callOut()
{
    cout<<"Eläin ääntelee!"<<endl;
}
