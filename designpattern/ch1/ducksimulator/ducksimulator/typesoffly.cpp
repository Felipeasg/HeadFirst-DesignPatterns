#include "typesofflybehavior.h"

#include <iostream>

using namespace std;

void TypesOfFlyBehavior::FlyWithWings::fly()
{
    std::cout << "I'm flying" << std::endl;
}

void TypesOfFlyBehavior::FlyNoWay::fly()
{
    std::cout << "I can't fly" << std::endl;
}

void TypesOfFlyBehavior::FlyWithRockets::fly()
{
    std::cout << "I'm flying rocket powered" << std::endl;
}
