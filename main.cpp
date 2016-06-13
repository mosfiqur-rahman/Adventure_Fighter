//
//  main.cpp
//
//  Created by Mosfiqur Rahman on 6/02/16.
//  Copyright © 2016 Mosfiqur Rahman. All rights reserved.
//

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include "Hero.h"
#include "Enemy.h"
#include "Scizor.h"
#include "Mantine.h"
#include "Magcargo.h"
#include "Granbull.h"
#include "Skarmory.h"

using namespace std;
int battle(Hero * hero, Enemy * monster);

int main()
{
    string heroname;
    cout << "Welcome to Adventure Battle!" <<endl;
    cout << "What is the name of your hero?" << endl;
    cin >> heroname;
    
    Hero * h = new Hero(heroname);
    Enemy * s = new Scizor("Scizor");
    Enemy * m = new Mantine("Mantine");
    Enemy * g = new Granbull("Granbull");
    Enemy * a = new Magcargo("Magcargo");
    Enemy * k = new Skarmory("Skarmory");
    
    if (battle(h, s) == 1)
    {
        if (battle (h, m) == 1)
        {
            if (battle(h,g) == 1)
            {
                if (battle(h, a) == 1)
                {
                    if ( battle(h, k) == 1)
                    {
                        cout << "You have defeated all enemies and saved the world. Good Job.!!!" << endl;
                    }
                }
            }
        }
    }
    return 0;
}

    int battle (Hero * hero, Enemy * monster)
    {
        
        try
        {
            string command;
            int fireball = 10;
            int potion = 6;
            cout << "You have encountered a " << monster->getName() << ". "<< monster->getDescription()<<endl;
          while (hero->getHealth() > 0 && monster -> getHealth() > 0)
          {
              cout << hero -> getName() << ": "<< hero -> getHealth()<< "/100 health" << endl;
              cout << monster -> getName() << ": " << monster -> getHealth() <<endl;
              
              cout << "Enter Command: sword shield fireball potion exit"<< endl;
              cout << "Remaining: " << fireball << " fireballs" <<", " << potion << " potions " << endl;
              while(true)
              {
                  
                  cin >> command;
                  if(command == "sword")
                  {
                      hero->attack(monster);
                      cout << "Sword Slash Attack!" <<endl;
                      break;
                  }
                  else if (command == "shield")
                  {
                      hero -> defenseAttackShield(monster);
                      cout << "Hide Behind the Shield" << endl;
                      break;
                  }
                  else if (command == "fireball")
                  {
                      
                      hero -> specialAttack(monster);
                      
                      cout << "Fireball Attack Successful!" << endl;
                      fireball = fireball - 1;
    
                      
                      break;
                  }
                  else if (command == "potion")
                  {
                      hero -> potionsattack(monster);
                      cout << "You drank a potion." <<endl;
                      potion = potion - 1;
                      cout << "Remaining Potions " << potion << endl;
                      break;
                  }
                  else if (command == "exit")
                  {
                      throw 0;
                  }
                  else
                  {
                      cout << "Invalid Command Try again" <<endl;
                  }

              }
              int move = rand() % 100 + 1;
              
              if (move >= 1 && move <= 60)
              {
                  monster -> attack(hero);

              }
              if (move >= 61 && move <= 100)
              {
                  monster -> specialAttack(hero);
                  hero -> specialName();
                  
              }
        }
        if (hero->getHealth() > 0)
        {
            cout << "Enemy is Defeated!!!" <<endl;
            return 1;
        }
        else
        {
            cout << "You died" <<endl;
            return 2;
        }
        
    }
catch (int i)
    {
    cout << "You're exiting the game. Thank You for playing this Game." <<endl;
    return 0;
    }
}
