#pragma once
#include <string>

class Ogre;
class Slime;
class Goblin;

class Dragon {
private:
	std::string _name;
	int _health;  // 생명력
	int _attack;  // 공격력
	int _defense; // 방어력

public:
	Dragon(std::string name, int health, int attack, int defense);

	std::string GetName();

	int GetHealth();

	void SetHealth(int health);

	int GetDefense();

	void Attack(Dragon& enemy);

	void Attack(Ogre& enemy);

	void Attack(Slime& enemy);

	void Attack(Goblin& enemy);

	void Info();
};