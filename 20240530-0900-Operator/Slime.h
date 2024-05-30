#pragma once
#include <string>

class Ogre;

class Dragon;

class Slime
{
private:
	std::string _name;
	int _health;  // 생명력
	int _attack;  // 공격력
	int _defense; // 방어력
	int _physicalRegist; // 물리 공격 저항력

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

