#pragma once
#include "NPC.h"

class Decorator : public NPC
{
	NPC* theNPC;//does this save a pointer to whatever NPC was created?
public:
	Decorator(NPC* npc);
	~Decorator();
	virtual void render();
};

