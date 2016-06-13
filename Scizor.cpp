//
//  Scizor.cpp
//
//  Created by Mosfiqur Rahman on 6/02/16.
//  Copyright © 2016 Mosfiqur Rahman. All rights reserved.
//
#include "Enemy.h"
#include "Scizor.h"

Scizor::Scizor(string n)
{
    name = n;
    health = 100;
    defense = false;
}

string Scizor::attackshield()const
{
    return "Hide Behind the Shield";
}

string Scizor::getName() const
{
    return name;
}

string Scizor::getDescription() const
{
    return "This is Bug type Pokemon and very powerful.";
}

void Scizor:: attack(Enemy * hero)
{
    defense = false;
    hero->dodamage(3);
}

string Scizor::attackName() const
{
    return "Wing Attack";
}

void Scizor:: specialAttack(Enemy *hero)
{
    defense = false;
    hero -> dodamage(5);
}

string Scizor::specialName() const
{
    return "Furry Cutter";
}

int Scizor::getHealth()const
{
    
    return health;
}

void Scizor::dodamage(int damage)
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

void Scizor::resetHealth()
{
    health = 100;
}
