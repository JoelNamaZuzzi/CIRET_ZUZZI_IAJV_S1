#include "effetRepasserDebout.h"
#include "GameManager.h"
void effetRepasserDebout::activateEffect(VieManequin* mannequin) {
	GameManager* gm = GameManager::getInstance();
	gm->setState(state::Debout);
}