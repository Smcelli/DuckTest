#pragma once
#include "QuackBehavior.h"
#include <iostream>

class QuackDoesNot :
    public QuackBehavior
{
public:
    void quack();
};

