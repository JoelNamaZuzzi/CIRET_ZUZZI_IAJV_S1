#include "GameManager.h"

GameManager::GameManager() {
	initAction();
}

void GameManager::initAction() {
	
	AttaqueAerienne* attaqueAerienne = nullptr;
	
	attaqueAerienne->AddRequirements(new EtreEnLair());
	attaqueAerienne->AddRequirements(new VieDeLaTete());
	this->IaGoat.AddAction(attaqueAerienne);

	AttaqueBaisser* attaqueBaisser = nullptr;			
	attaqueBaisser->AddRequirements(new EtreAccroupi());
	attaqueBaisser->AddRequirements(new VieDesJambes());
	this->IaGoat.AddAction(attaqueBaisser);

	AttaquerDebout* attaqueDebout = nullptr;
	attaqueDebout->AddRequirements(new EtreDebout());
	attaqueDebout->AddRequirements(new VieDuTorse());
	this->IaGoat.AddAction(attaqueDebout);

	Baisser* seBaisser = nullptr;
	seBaisser->AddRequirements(new EtreDebout());
	this->IaGoat.AddAction(seBaisser);

	Sauter* sauter = nullptr;
	sauter->AddRequirements(new EtreDebout());
	this->IaGoat.AddAction(sauter);

	Relever* seRelever = nullptr;
	seRelever->AddRequirements(new EtreAccroupi());
	this->IaGoat.AddAction(seRelever);

	Redescendre* redescendre = nullptr;
	redescendre->AddRequirements(new EtreEnLair());
	this->IaGoat.AddAction(redescendre);

	CoupSpecial* coupSpecial = nullptr;
	coupSpecial->AddRequirements(new EtreDebout());
	coupSpecial->AddRequirements(new ATaper3Foix());
	coupSpecial->AddRequirements(new VieDuTorse());

}

Player GameManager::GetPlayer() const{
	return this->IaGoat;
}

void GameManager::SetPlayer(Player p) {
	this->IaGoat = p;
}