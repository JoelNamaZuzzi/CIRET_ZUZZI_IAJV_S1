#include "GameManager.h"

void GameManager::initAction() {
	Action seBaisser("s'accroupir", 2);
	Action sauter("sauter", 2);
	Action attaqueDebout("attaque debout", 3);
	Action attaqueAerienne("Attaque aerienne", 4);
	Action attaqueAccroupi("Attaque accroupi", 4);
	Action redescendre("Redescendre", 1);
	Action relever("Relever", 1);
	Action coupSpecial("Coup special", 6);

	seBaisser.setRequirement(, 1);
	
}