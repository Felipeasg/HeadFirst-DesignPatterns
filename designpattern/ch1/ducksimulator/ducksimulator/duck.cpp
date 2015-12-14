#include "duck.h"

#include <iostream>

Duck::Duck()
{
    std::cout << "Duck constructor" << std::endl;
}

void Duck::peformQuack()
{
    if(quackBehavior != NULL)
    {
        quackBehavior->quack();
    }
}

void Duck::peformFly()
{
    if(flyBehavior != NULL)
    {
        flyBehavior->fly();
    }
}

void Duck::swim()
{

}

QuackBehavior *Duck::getQuackBehavior() const
{
    return quackBehavior;
}

void Duck::setQuackBehavior(QuackBehavior *value)
{
    quackBehavior = value;
}

FlyBehavior *Duck::getFlyBehavior() const
{
    return flyBehavior;
}

void Duck::setFlyBehavior(FlyBehavior *value)
{
    flyBehavior = value;
}

