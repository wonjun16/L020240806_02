#include "Actor.h"
#include <iostream>

using namespace std;

AActor::AActor()
{
	//cout << "생성" << endl;
}

AActor::~AActor()
{
	cout << "소멸" << endl;
}

void AActor::Move()
{
	cout << "이동" << endl;
}
