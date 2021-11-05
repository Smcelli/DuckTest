#include <iostream>
#include "DuckMallard.h"
int main()
{
    Duck* mallard = new DuckMallard;

    mallard->display();
    mallard->performFly();
    mallard->performQuack();
    mallard->swim();


    delete mallard;
}
