#include <iostream>
#include "Player.h"
#include "Monster.h"
#include "Boar.h"
#include "Goblin.h"
#include "Slime.h"
#include <random>
#include <vector>

using namespace std;

int TotalNum = 0;

//Compile 할때 코드 생성
template<typename T, typename K>
T Add(T A, K B)
{
	return A + B;
}

void getRandomNum()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dis(5, 20);
	TotalNum = dis(gen);
}

int main()
{
	getRandomNum();

	vector<AActor*> Actors;

	Actors.push_back(new APlayer());

	for (int i = 0; i < TotalNum; i++)
	{
		random_device rd;
		mt19937 gen(rd());
		uniform_int_distribution<int> dis(1, 3);

		if (dis(gen) == 1)
		{
			Actors.push_back(new ASlime());
		}
		else if (dis(gen) == 2)
		{
			Actors.push_back(new ABoar());
		}
		else
		{
			Actors.push_back(new AGoblin());
		}
	}

	cout << endl;

	for (const auto& actor : Actors)
	{
		APlayer* Player = dynamic_cast<APlayer*>(actor);
		if (Player != nullptr)
		{
			Player->Attack();
		}
		actor->Move();
	}

	cout << endl;

	for (AActor* actor : Actors)
	{
		delete actor; // 각각 삭제. 하지만 이렇게하면 AActor의 소멸자만 불리고 자신의 소멸자가 불리지 않음
	}

	Actors.clear(); // 이미 삭제된 빈공간을 가리키는 포인터 벡터도 삭제


	///추가한 부분
	return 0;
}