#pragma once
#ifndef EFFETMONTER_H
#define EFFETMONTER_H
#include "effet.h"
#include "VieManequin.h"
class EffetMonter : public effet
{
public :
	void activateEffect(VieManequin* mannequin) override;
	EffetMonter();
};

#endif // !EFFETMONTER_H