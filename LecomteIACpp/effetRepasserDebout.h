#pragma once
#ifndef EFFETREPASSERDEBOUT_H
#define EFFETREPASSERDEBOUT_H
#include "effet.h"
#include "VieManequin.h"
class effetRepasserDebout : public effet
{
public :
	void activateEffect(VieManequin* mannequin) override;
	effetRepasserDebout();
};

#endif // !EFFETREPASSERDEBOUT_H
