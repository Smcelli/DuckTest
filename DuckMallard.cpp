#include "DuckMallard.h"

DuckMallard::DuckMallard()
{
	quackBehavior = new QuackRegular;
	flyBehavior = new FlyWithWings;
}

void DuckMallard::display()
{
	std::cout << "I am a mallard duck." << std::endl;
}
