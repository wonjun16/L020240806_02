#pragma once
#include "Actor.h"
class AMonster : public AActor
{
public:
	AMonster();
	~AMonster();

	void Move() override;
};

