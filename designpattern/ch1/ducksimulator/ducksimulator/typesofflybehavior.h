#ifndef TYPESOFFLY_H
#define TYPESOFFLY_H

#include "flybehavior.h"

namespace TypesOfFlyBehavior
{

class FlyWithWings : public FlyBehavior
{
    void fly();
};

class FlyNoWay : public FlyBehavior
{
    void fly();
};

class FlyWithRockets : public FlyBehavior
{
    void fly();
};
}

#endif // TYPESOFFLY_H
