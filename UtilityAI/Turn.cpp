#include <iostream>
using namespace std;
#include "Turn.h"
#include "GameManager.h"

void Turn::PlayerTurn(int t) {
	int wait;
	GameManager gm;
	
	cout << gm.player.HP << "\n";
	gm.player.HP -= 15;
	cout << gm.player.HP << "\n";

	cout << gm.playerAI.HP << "\n";
	gm.playerAI = gm.fight.FightAgainst(gm.playerAI, gm.playerAI, 50);
	gm.playerAI.HP -= 15;
	cout << gm.playerAI.HP << "\n";

	while (counterTurn != 10) {
		if (t == 1) {
			if (counterTurn % 2 == 1) {
				cout << "Your turn : " << "\n";
				cin >> wait;
				counterTurn++;
			}
			else {
				cout << "Wait for your oppenent : " << "\n";
				cin >> wait;
				counterTurn++;
			}
		}
		else {
			if (counterTurn % 2 == 0) {
				cout << "Your turn : " << "\n";
				cin >> wait;
				counterTurn++;
			}
			else {
				cout << "Wait for your oppenent : " << "\n";
				cin >> wait;
				counterTurn++;
			}
		}
	}
}