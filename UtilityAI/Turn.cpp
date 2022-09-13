#include "Header.h"

void Turn::PlayerTurn(int t) {
	int wait;
	GameManager gm;

	cout << gm.player.HP << "\n";
	gm.player.HP -= 15;
	cout << gm.player.HP << "\n";

	cout << gm.AI.HP << "\n";
	gm.AI.HP -= 15;
	cout << gm.AI.HP << "\n";

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
				cout << "Wait for your oppenent : " 
<< "\n";
				cin >> wait;
				counterTurn++;
			}
		}
	}
}