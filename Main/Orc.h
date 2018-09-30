#pragma once
#include "NPC.h"
#include <string>
#include <iostream>

class Orc: public NPC
{
	std::string name;
public:
	Orc();
	~Orc();
	void render();
};

