#pragma once
#ifndef EFFETSACCROUPIR_H
#define EFFETSACCROUPIR_H
#include "effet.h"
#include "VieManequin.h"
class EffetSaccroupir : public effet
{
public :
	void activateEffect(VieManequin* mannequin) override;
	EffetSaccroupir();
};
#endif // !EFFETSACCROUPIR_H
