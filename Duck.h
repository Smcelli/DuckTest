#pragma once
#include <iostream>

#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck
{
protected:
	FlyBehavior* flyBehavior;
	QuackBehavior* quackBehavior;
	
public:

	~Duck();
	virtual void display() = 0;
	virtual void performFly();
	virtual void performQuack();
	virtual void setQuackBehavior(QuackBehavior*);
	virtual void setFlyBehavior(FlyBehavior*);

	void swim();
};

