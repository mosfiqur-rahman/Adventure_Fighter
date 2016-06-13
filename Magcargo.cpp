//
//  Magcargo.cpp
//
//  Created by Mosfiqur Rahman on 6/02/16.
//  Copyright © 2016 Mosfiqur Rahman. All rights reserved.
//
#include "Enemy.h"
#include "Magcargo.h"


Magcargo::Magcargo(string n)
{
    name = n;
    health = 100;
    defense = false;
}

string Magcargo::attackshield()const
{
    return "Hide Behind the Shield";
}

string Magcargo::getName() const
{
    return name;
}

string Magcargo::getDescription() const
{
    return "This is special Lava pokemon.";
}

void Magcargo:: attack(Enemy * hero)
{
    defense = false;
    hero->dodamage(1);
}

string Magcargo::attackName() const
{
    return "Small fire ball";
}

void Magcargo:: specialAttack(Enemy *hero)
{
    defense = false;
    hero -> dodamage(3);
}

string Magcargo::specialName() const
{
    return "Rock Throw";
}

int Magcargo::getHealth()const
{
    return health;
}

void Magcargo::dodamage(int damage)
{
    if(defense)
    {
        health = health-(damage/2);
    }
    else
    {
        health = health-damage;
    }
}

void Magcargo::resetHealth()
{
    health = 100;
}
