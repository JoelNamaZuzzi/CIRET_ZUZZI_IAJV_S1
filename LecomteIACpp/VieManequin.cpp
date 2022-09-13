#include "VieManequin.h"
#include <iostream>
VieManequin::VieManequin() {

	int randTete = 0;
	int randTorse = 0;
	int randJambe = 0;

	srand(time(NULL));
	randTete = rand() % 30 + 1;
	randTorse = rand() % 40 + 1;
	randJambe = rand() % 25 + 1;

	this->VieTete = randTete;
	this->VieTorse = randTorse;
	this->VieJambes = randJambe;

}