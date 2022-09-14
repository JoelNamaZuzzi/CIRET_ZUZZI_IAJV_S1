// LecomteIACpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>
#include <random>
using namespace std;
#include "GameManager.h"
int main()
{
    int CounterTurn = 0;
    GameManager gm;
    Player player = gm.GetPlayer();
    int nbAction = player.NbAction();

    while (CounterTurn <10) {
        
        int randomAttaque = rand() % 7;
        
        player.currentAction = player.getAction(randomAttaque);

        player.currentAction->Act();
        
        
        CounterTurn++;
    }
    
}
