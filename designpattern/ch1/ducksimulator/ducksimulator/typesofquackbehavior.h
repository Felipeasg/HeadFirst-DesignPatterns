#ifndef TYPESOFQUACKBEHAVIOR_H
#define TYPESOFQUACKBEHAVIOR_H

#include "quackbehavior.h"
#include <iostream>

using namespace std;

namespace TypesOfQuackBehavior
{

    class Quack : public QuackBehavior
    {
        void quack();
    };

    class MuteQuack : public QuackBehavior
    {
        void quack();
    };

    class Squeak : public QuackBehavior
    {
        void quack();
    };
}

#endif // TYPESOFQUACKBEHAVIOR_H
