#pragma once
#include <string>

class Ogre;

class Dragon;

class Slime
{
private:
	std::string _name;
	int _health;  // �����
	int _attack;  // ���ݷ�
	int _defense; // ����
	int _physicalRegist; // ���� ���� ���׷�

public:
	Slime(std::string name, int health, int attack, int defense, int physicalRegist);
	
	std::string GetName();

	int GetHealth();

	void SetHealth(int health);

	int GetDefense();

	int GetPhysicalRegist();

	void Attack(Slime& enemy);

	void Attack(Ogre& enemy);

	void Attack(Dragon& enemy);

	void Info();
};

