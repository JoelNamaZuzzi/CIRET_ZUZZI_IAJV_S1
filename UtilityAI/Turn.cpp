#include <iostream>
using namespace std;
#include "Turn.h"
#include "GameManager.h"

void Turn::PlayerTurn(int t) {
	int wait;
	GameManager gm;
	Player player;
	AI playerAI;

	while (player.HP > 0 && playerAI.HP) {
		if (t == 1) {
			if (counterTurn % 2 == 1) {
				cout << "Your turn : " << "\n";
				cin >> wait;
				gm.fight.FightAgainst(player, playerAI, wait);
				cout << player.HP << "\n";
				cout << playerAI.HP << "\n";
				counterTurn++;
			}
			else {
				cout << "Wait for your oppenent : " << "\n";
				cin >> wait;
				gm.fight.FightAgainst(playerAI, player, wait);
				cout << player.HP << "\n";
				cout << playerAI.HP << "\n";
				counterTurn++;
			}
		}
		else {
			if (counterTurn % 2 == 0) {
				cout << "Your turn : " << "\n";
				cin >> wait;
				gm.fight.FightAgainst(player, playerAI, wait);
				cout << player.HP << "\n";
				cout << playerAI.HP << "\n";
				counterTurn++;
			}
			else {
				cout << "Wait for your oppenent : " << "\n";
				cin >> wait;
				gm.fight.FightAgainst(playerAI, player, wait);
				cout << player.HP << "\n";
				cout << playerAI.HP << "\n";
				counterTurn++;
			}
		}
	}
}