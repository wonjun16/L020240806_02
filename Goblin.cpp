#include "Goblin.h"
#include <iostream>

AGoblin::AGoblin()
{
	std::cout << "Goblin 생성" << std::endl;
}

AGoblin::~AGoblin()
{
	std::cout << "Goblin 소멸" << std::endl;
}

void AGoblin::Move()
{
	std::cout << "Goblin 이동" << std::endl;
}
