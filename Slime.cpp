#include "Slime.h"
#include <iostream>

ASlime::ASlime()
{
	std::cout << "Slime 생성" << std::endl;
}

ASlime::~ASlime()
{
	std::cout << "Slime 소멸" << std::endl;
}

void ASlime::Move()
{
	std::cout << "Slime 이동" << std::endl;
}
