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

void Duck::swim()
{
	std::cout << "all ducks can swim" << std::endl;
}
