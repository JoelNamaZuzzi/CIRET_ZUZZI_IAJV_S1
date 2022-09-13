#include "GameManager.h"

GameManager::GameManager() {
	
}

void GameManager::initAction() {
	
	AttaqueAerienne* attaqueAerienne;
	attaqueAerienne->AddRequirements(new EtreEnLair());
	attaqueAerienne->AddRequirements(new VieDeLaTete());
	this->IaGoat.AddAction(attaqueAerienne);

	AttaqueBaisser* attaqueBaisser;			
	attaqueBaisser->AddRequirements(new EtreAccroupi());
	attaqueBaisser->AddRequirements(new VieDesJambes());
	this->IaGoat.AddAction(attaqueBaisser);

	AttaquerDebout* attaqueDebout;
	attaqueDebout->AddRequirements(new EtreDebout());
	attaqueDebout->AddRequirements(new VieDuTorse());
	this->IaGoat.AddAction(attaqueDebout);

	Baisser* seBaisser;
	seBaisser->AddRequirements(new EtreDebout());
	this->IaGoat.AddAction(seBaisser);

	Sauter* sauter;
	sauter->AddRequirements(new EtreDebout());
	this->IaGoat.AddAction(sauter);

	Relever* seRelever;
	seRelever->AddRequirements(new EtreAccroupi());
	this->IaGoat.AddAction(seRelever);

	Redescendre* redescendre;
	redescendre->AddRequirements(new EtreEnLair());
	this->IaGoat.AddAction(redescendre);

	CoupSpecial* coupSpecial;
	coupSpecial->AddRequirements(new EtreDebout());
	coupSpecial->AddRequirements(new ATaper3Foix());
	coupSpecial->AddRequirements(new VieDesJambes());

}

Player GameManager::GetPlayer() const{
	return this->IaGoat;
}

void GameManager::SetPlayer(Player p) {
	this->IaGoat = p;
}