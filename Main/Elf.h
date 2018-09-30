#pragma once
#include "NPC.h"
#include <string>
#include <iostream>

class Elf : public NPC
{
	std::string name;
public:
	Elf();
	~Elf();
	void render();
};

