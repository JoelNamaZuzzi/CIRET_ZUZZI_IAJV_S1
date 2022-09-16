#pragma once
#ifndef VIEDESJAMBES_H
#define VIEDESJAMBES_H

#include "GameManager.h"
#include "prerequis.h"

class VieDesJambes : public prerequis
{
	bool Require() override;
};

#endif // !VIEDESJAMBES_H