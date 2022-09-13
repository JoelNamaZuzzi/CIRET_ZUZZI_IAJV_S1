// LecomteIACpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "GameManager.h"
int main()
{
    int CounterTurn = 0;
    GameManager gm;
    Player player = gm.GetPlayer();
    gm.initAction();
    while (CounterTurn <10) {
        srand(time(NULL));
        int randomAttaque = rand() % player.NbAction() + 1;
        player.currentAction = player.getAction(randomAttaque);

        player.currentAction->Act();
        CounterTurn++;
    }
    
}
