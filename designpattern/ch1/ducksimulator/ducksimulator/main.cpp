#include <iostream>

using namespace std;

#include "duck.h"
#include "mallardduck.h"
#include "duckmodel.h"

#define UNUSED(argument) do{ (void)(argument);}while (0);

int main(int argc, char *argv[])
{
    UNUSED(argc);
    UNUSED(argv);

    Duck *mallard = new MallardDuck();
    Duck *duckModel = new ModelDuck();

    std::cout << std::endl;

    mallard->display();
    mallard->peformQuack();
    mallard->peformFly();

    std::cout << std::endl;

    duckModel->display();
    duckModel->peformQuack();
    duckModel->setFlyBehavior(new TypesOfFlyBehavior::FlyWithRockets());
    duckModel->peformFly();
}

