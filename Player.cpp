#include "Player.h"
#include <iostream>

using namespace std;

APlayer::APlayer()
{
	cout << "Player ����" << endl;
	HP = 100;
}

APlayer::~APlayer()
{
	cout << "Player �Ҹ�" << endl;
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
	cout << "Player ����" << endl;
}
