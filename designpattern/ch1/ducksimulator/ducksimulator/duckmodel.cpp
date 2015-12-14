#include "duckmodel.h"

#include <iostream>

using namespace std;

ModelDuck::ModelDuck()
{
    std::cout << "Model Duck constructor" << std::endl;

    setQuackBehavior(new TypesOfQuackBehavior::Quack());
    setFlyBehavior(new TypesOfFlyBehavior::FlyNoWay());
}

void ModelDuck::display()
{
    std::cout << "I'm a Model Duck " << std::endl;
}

