//
//  Hero.cpp
//
//  Created by Mosfiqur Rahman on 6/02/16.
//  Copyright © 2016 Mosfiqur Rahman. All rights reserved.
//

#include "Enemy.h"

Hero::Hero(string n)
{

    heroHealth = 100;
    fireballs = 10;
    potions = 5;
    defense_mode = false;
    heroname = n;
}
string Hero::getName() const
{
    return heroname;
}
string Hero::getDescription() const
{
    return "You are very powerful";
}
void Hero::defenseAttackShield(Enemy * heroone)
{
    defense_mode = true;
}

string Hero:: attackshield() const
{
    return "Hide Behind the Shield \n";
}
int Hero::setattackfireballs(int f)
{
    f = fireballs;
    return f;
}

void Hero::attack(Enemy * heroone)
{
    heroone->dodamage(30);
}

int Hero::setattackpotion(int p)
{
    p = potions;
    return p;
}

void Hero::potionsattack(Enemy * heroone)
{
    defense_mode = false;
    heroone->potionhealth();
    
}

void Hero::potionhealth()
{
    heroHealth = heroHealth+20;
}

void Hero::specialAttack(Enemy * heroone)
{
    defense_mode = false;
    heroone -> dodamage(50);
}

string Hero::specialName() const
{
    return "Fireball Attack Successful! \n";
}
string Hero::attackName()const
{
    return "Sword Slash Attack!\n";
}
int Hero::gettotalfireballs()
{
    return fireballs;
}

int Hero::getHealth() const
{
    return heroHealth;
}

void Hero::dodamage(int damage)
{
    if(defense_mode)
    {
        heroHealth=heroHealth-(damage/2);
    }
    else
    {
        heroHealth = heroHealth-damage;
    }
}

void Hero::resetHealth()
{
    heroHealth = 100;
}
