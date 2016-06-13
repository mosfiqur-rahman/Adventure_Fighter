//
//  Enemy.h
//
//  Created by Mosfiqur Rahman on 6/02/16.
//  Copyright © 2016 Mosfiqur Rahman. All rights reserved.
//
//Parent class


#ifndef Enemy_h
#define Enemy_h

#include <iostream>
#include <string>

using namespace std;

class Enemy
{
public:
    Enemy();
    virtual ~Enemy(){};
    //Description
    virtual string getName() const = 0;
    virtual string getDescription() const = 0;
    //Attack
    virtual void attack(Enemy * hero) = 0;
    virtual string attackName() const = 0;
    //Defense
    virtual void defenseAttackShield(Enemy * hero) = 0;
    virtual string attackshield()const = 0;
    //Special Attack
    virtual void specialAttack(Enemy * hero) = 0;
    virtual string specialName() const = 0;
    //Health
    virtual int getHealth() const = 0;
    virtual void dodamage(int damage) = 0;
    virtual void resetHealth() = 0;
    virtual void potionhealth() = 0;
};

Enemy::Enemy()
{
    
}

#endif /* Enemy_h */


























