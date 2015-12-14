#include "typesofquackbehavior.h"


void TypesOfQuackBehavior::Quack::quack()
{
    std::cout << "Quack" << std::endl;
}

void TypesOfQuackBehavior::MuteQuack::quack()
{
    std::cout << "<< Silence >>" << std::endl;
}

void TypesOfQuackBehavior::Squeak::quack()
{
    std::cout << "Squeak" << std::endl;
}
