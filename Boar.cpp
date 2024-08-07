#include "Boar.h"
#include <iostream>

ABoar::ABoar()
{
	std::cout << "Boar 생성" << std::endl;
}

ABoar::~ABoar()
{
	std::cout << "Boar 소멸" << std::endl;
}

void ABoar::Move()
{
	std::cout << "Boar 이동" << std::endl;
}
