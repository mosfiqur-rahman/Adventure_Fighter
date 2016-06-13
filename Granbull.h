//
//  Granbull.h
//
//  Created by Mosfiqur Rahman on 6/02/16.
//  Copyright © 2016 Mosfiqur Rahman. All rights reserved.
//

#ifndef Granbull_h
#define Granbull_h
#include <iostream>
#include <string>
#include "Enemy.h"

using namespace std;

class Granbull: public Enemy
{
private:
    string name;
    int health;
    bool defense;
public:
    Granbull(string n = "No Name");
    
    string getName() const;
    string getDescription() const;
    void attack(Enemy * hero);
    string attackName() const;
    void specialAttack(Enemy * hero);
    string specialName() const;
    int getHealth() const;
    void dodamage(int damage);
    void resetHealth();
    void potionhealth(){};
    void defenseAttackShield(Enemy * hero){};
    string attackshield()const;
    
};

#endif /* Granbull_h */

