#include "GameManager.h"

void GameManager::initAction() {
	
	
	AttaqueAerienne* attaqueAerienne;
	attaqueAerienne->AddRequirements(new EtreEnLair());
	this->IaGoat.AddAction(attaqueAerienne);




	
}