//
//  Skarmory.cpp
//
//  Created by Mosfiqur Rahman on 6/02/16.
//  Copyright © 2016 Mosfiqur Rahman. All rights reserved.
//
#include "Enemy.h"
#include "Skarmory.h"


Skarmory::Skarmory(string n)
{
    name = n;
    health = 100;
    defense = false;
}
string Skarmory::attackshield()const
{
    return "Hide Behind the Shield";
}

string Skarmory::getName() const
{
    return name;
}

string Skarmory::getDescription() const
{
    return "This Pokemon knows as 'Armor Bird Pokemon' and brave bird.";
}

void Skarmory:: attack(Enemy * hero)
{
    defense = false;
    hero->dodamage(5);
}

string Skarmory::attackName() const
{
    return "Drill Peck";
}

void Skarmory:: specialAttack(Enemy *hero)
{
    defense = false;
    hero -> dodamage(7);
}

string Skarmory::specialName() const
{
    return "Sand Attack";
}

int Skarmory::getHealth()const
{
    return health;
}

void Skarmory::dodamage(int damage)
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

void Skarmory::resetHealth()
{
    health = 100;
}







