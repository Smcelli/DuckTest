#include <iostream>
#include "DuckMallard.h"
#include "FlyOnPlane.h"
int main()
{
    Duck* mallard = new DuckMallard;

    mallard->display();
    mallard->performFly();
    mallard->performQuack();
    mallard->swim();
    mallard->setFlyBehavior(new FlyOnPlane);
    mallard->performFly();


    delete mallard;
}
