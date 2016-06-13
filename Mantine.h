//
//  Mantine.h
//
//  Created by Mosfiqur Rahman on 6/02/16.
//  Copyright © 2016 Mosfiqur Rahman. All rights reserved.
//

#ifndef Mantine_h
#define Mantine_h

#include <iostream>
#include <string>
#include "Enemy.h"

class Mantine: public Enemy
{
private:
    string name;
    int health;
    bool defense;
    
public:
    Mantine(string n = "No Name");
    
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
#endif /* Header_h */

