#pragma once
#ifndef BAISSERVIETORSE_H
#define BAISSERVIETORSE_H
#include "effet.h"
#include "VieManequin.h"
class BaisserVieTorse : public effet
{
public :
	void activateEffect(VieManequin* mannequin) override;
	BaisserVieTorse();
};

#endif // !BAISSERVIETORSE_H