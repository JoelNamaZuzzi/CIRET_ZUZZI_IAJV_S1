#pragma once
#ifndef ETREACCROUPI_H
#define ETREACCROUPI_H


#include "prerequis.h"
#include "GameManager.h"
class EtreAccroupi: public prerequis
{
public:
	EtreAccroupi();
	bool Require() override;
};

#endif // !ETREACCROUPI_H