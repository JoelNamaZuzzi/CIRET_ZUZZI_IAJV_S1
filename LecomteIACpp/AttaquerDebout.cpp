#include "AttaquerDebout.h"
using namespace std;

void AttaquerDebout::Act()  {
	cout << " ATTAQUER DEBOUT" << endl;
	GameManager* gm = GameManager::getInstance();
	BaisserVieTorse tmp;
	tmp.activateEffect(gm->getManequin());
}

AttaquerDebout::AttaquerDebout() {

}