#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef ramsay("Gordon Ramsay");
    ramsay.makeSalad();
    ramsay.makeSoup();

    ItalianChef bourdain("Anthony Bourdain");
    bourdain.makeSalad();
    bourdain.makeSoup();
    bourdain.makePasta();
    cout<<"Name of the italian chef is "<<bourdain.getName()<<endl;

    return 0;
}
