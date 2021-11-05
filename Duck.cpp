#include "Duck.h"

Duck::~Duck()
{
	delete flyBehavior;
	delete quackBehavior;
}

void Duck::performFly()
{
	flyBehavior->fly();
}

void Duck::performQuack()
{
	quackBehavior->quack();
}

void Duck::setQuackBehavior(QuackBehavior* qb)
{
	delete quackBehavior;
	quackBehavior = qb;
}

void Duck::setFlyBehavior(FlyBehavior* fb)
{
	delete flyBehavior;
	flyBehavior = fb;
}

void Duck::swim()
{
	std::cout << "all ducks can swim" << std::endl;
}
