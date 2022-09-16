#pragma once

#ifndef EFFET_H
#define EFFET_H
#include <string>
#include "VieManequin.h"
class effet
{
public :
	std::string name;
	effet(std::string);
	virtual void activateEffect(VieManequin* mannequin);
};


#endif // !EFFET_H