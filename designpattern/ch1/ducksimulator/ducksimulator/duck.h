#ifndef DUCK_H
#define DUCK_H

#include <string>

#include "quackbehavior.h"
#include "flybehavior.h"

#include "typesofquackbehavior.h"
#include "typesofflybehavior.h"

using namespace std;

class Duck
{
public:
    Duck();

    void peformQuack();
    void peformFly();
    void swim();
    virtual void display() = 0;

    QuackBehavior *getQuackBehavior() const;
    void setQuackBehavior(QuackBehavior *value);

    FlyBehavior *getFlyBehavior() const;
    void setFlyBehavior(FlyBehavior *value);

private:

    string name;
    QuackBehavior* quackBehavior;
    FlyBehavior* flyBehavior;

};

#endif // DUCK_H
