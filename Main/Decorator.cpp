#include "stdafx.h"
#include "Decorator.h"


Decorator::Decorator(NPC* npc)
{
	theNPC = npc;
}


Decorator::~Decorator()
{
	if (theNPC) delete theNPC; //does this mean "If there is a NPC > delete it?"
}

void Decorator::render() 
{
	theNPC->render();
}