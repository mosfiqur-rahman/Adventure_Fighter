//
//  Mantine.cpp
//
//  Created by Mosfiqur Rahman on 6/02/16.
//  Copyright © 2016 Mosfiqur Rahman. All rights reserved.
//
#include "Enemy.h"
#include "Mantine.h"

Mantine::Mantine(string n)
{
    name = n;
    health = 100;
    defense = false;
}

string Mantine::attackshield()const
{
    return "Hide Behind the Shield";

}

string Mantine::getName() const
{
    return name;
}

string Mantine::getDescription() const
{
    return "This is Flying and Water type Pokemon.";
}

void Mantine:: attack(Enemy * hero)
{
    defense = false;
    hero->dodamage(1);
}

string Mantine::attackName() const
{
    return "Use Psybeam";
}

void Mantine:: specialAttack(Enemy *hero)
{
    defense = false;
    hero -> dodamage(2);
}

string Mantine::specialName() const
{
    return "Hydro Pump";
}

int Mantine::getHealth()const
{
    return health;
}

void Mantine::dodamage(int damage)
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

void Mantine::resetHealth()
{
    health = 100;
}


