#include "dog.h"

Dog::Dog() {}

Dog::~Dog() {
    cout << "koira poistettu" << endl;
}

void Dog::callOut()
{
    cout<<"Koira haukkuu!"<<endl;
}
