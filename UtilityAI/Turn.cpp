#include "Header.h"

void Turn::PlayerTurn(int t) {
	int wait;
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