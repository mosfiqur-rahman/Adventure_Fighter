//
//  Hero.h
//
//  Created by Mosfiqur Rahman on 6/02/16.
//  Copyright © 2016 Mosfiqur Rahman. All rights reserved.
//

#ifndef Hero_h
#define Hero_h

#include <iostream>
#include <string>


using namespace std;

class Hero: public Enemy
{
private:
    string heroname;
    string selectattack;
    int potions;
    int fireballs;
    string input;
    int heroHealth;
    bool defense_mode;
    string sheildinput;
    
public:
    Hero(string n);
    int gettotalfireballs();
    int setattackfireballs(int);
    int setattackpotion(int);
    void defenseAttackShield(Enemy * heroone);
    string attackshield()const;
    string getName() const;
    string getDescription() const;
    void attack(Enemy * heroone);//sword attack
    string attackName() const;//sword attack
    void specialAttack(Enemy * heroone);//fireball
    string specialName() const;//fireball
    int getHealth() const;
    void dodamage(int damage);
    void resetHealth();
    void potionsattack(Enemy * heroone);
    void potionhealth();
    
    
};



#endif /* Hero_h */




