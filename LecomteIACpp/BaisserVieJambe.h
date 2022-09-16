#pragma once
#ifndef BAISSERVIEJAMBE_H
#define BAISSERVIEJAMBE_H
#include "effet.h"
#include "VieManequin.h"
class BaisserVieJambe: public effet
{
public :
	void activateEffect(VieManequin* mannequin) override;
	BaisserVieJambe();
};
#endif // !BAISSERVIEJAMBE_H