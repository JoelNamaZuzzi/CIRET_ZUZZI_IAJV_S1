#include "EffetMonter.h"
#include "GameManager.h"
void EffetMonter::activateEffect(VieManequin* mannequin) {
	GameManager* gm = GameManager::getInstance();
	gm->setState(state::Enlair);
}