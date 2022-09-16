#include "EffetSaccroupir.h"
#include "GameManager.h"

void EffetSaccroupir::activateEffect(VieManequin* mannequin) {
	GameManager* gm = GameManager::getInstance();
	gm->setState(state::Accroupi);

}

EffetSaccroupir::EffetSaccroupir() {

}