#include "mallardduck.h"

#include <iostream>

using namespace std;

MallardDuck::MallardDuck()
{
    std::cout << "Mallard constructor" << std::endl;

    setQuackBehavior(new TypesOfQuackBehavior::Quack());
    setFlyBehavior(new TypesOfFlyBehavior::FlyWithWings());
}

void MallardDuck::display()
{
    std::cout << "I'm a Mallard duck" << std::endl;
}

