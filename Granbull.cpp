//
//  Granbull.cpp
//
//  Created by Mosfiqur Rahman on 6/02/16.
//  Copyright © 2016 Mosfiqur Rahman. All rights reserved.
//
#include "Enemy.h"
#include "Granbull.h"

Granbull::Granbull(string n)
{
    name = n;
    health = 100;
    defense = false;
}

string Granbull::attackshield()const
{
    return "Hide Behind the Shield";
}
string Granbull::getName() const
{
    return name;
}

string Granbull::getDescription() const
{
    return "This is fairy type pokemon.";
}

void Granbull:: attack(Enemy * hero)
{
    defense = false;
    hero->dodamage(2);
}

string Granbull::attackName() const
{
    return "Use Fire Punch";
}

void Granbull:: specialAttack(Enemy *hero)
{
    defense = false;
    hero -> dodamage(4);
}

string Granbull::specialName() const
{
    return "BITE";
}

int Granbull::getHealth()const
{
    return health;
}

void Granbull::dodamage(int damage)
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

void Granbull::resetHealth()
{
    health = 100;
}
