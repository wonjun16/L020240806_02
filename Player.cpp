#include "Player.h"
#include <iostream>

using namespace std;

APlayer::APlayer()
{
	cout << "Player 생성" << endl;
	HP = 100;
}

APlayer::~APlayer()
{
	cout << "Player 소멸" << endl;
}

void APlayer::Move()
{
	cout << "Player ";
	AActor::Move();
}

int APlayer::GetHP()
{
	int hp = this->HP;
	return hp;
}

void APlayer::SetHP(int _HP)
{
	this->HP = _HP;
}

void APlayer::Attack()
{
	cout << "Player 공격" << endl;
}
