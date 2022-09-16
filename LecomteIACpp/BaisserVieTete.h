#pragma once
#ifndef EFFETBAISSERTETE_H
#define EFFETBAISSERTETE_H
#include "effet.h"
#include "VieManequin.h"

class BaisserVieTete : public effet
{
public :
	void activateEffect(VieManequin* mannequin) override;
	BaisserVieTete();
};

#endif // !EFFETBAISSERTETE_H