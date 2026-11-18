#include "italianchef.h"

ItalianChef::ItalianChef(string value) : Chef(value) {
    name = value;
    cout <<"Italian Chef "<<name<<" konstruktori"<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<<"Italian chef "<<name<<" destruktori"<<endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout<<"Italian chef "<<name<<" makes pasta"<<endl;
}
