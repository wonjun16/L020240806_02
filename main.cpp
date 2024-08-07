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

//Compile �Ҷ� �ڵ� ����
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
		delete actor; // ���� ����. ������ �̷����ϸ� AActor�� �Ҹ��ڸ� �Ҹ��� �ڽ��� �Ҹ��ڰ� �Ҹ��� ����
	}

	Actors.clear(); // �̹� ������ ������� ����Ű�� ������ ���͵� ����


	///�߰��� �κ�
	return 0;
}