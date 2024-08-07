#pragma once
#include "Actor.h"
class APlayer : public AActor
{
public:
	APlayer();
	~APlayer();

	void Move() override;

	int GetHP();
	void SetHP(int);

	void Attack();
private:
	int HP;
};

