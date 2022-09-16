#include "BaisserVieJambe.h"

void BaisserVieJambe::activateEffect(VieManequin* mannequin) {
	mannequin->VieJambes -= 10;
}

BaisserVieJambe::BaisserVieJambe() {

}