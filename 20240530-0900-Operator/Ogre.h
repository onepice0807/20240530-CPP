#pragma once
#include <string>

class Dragon;

class Slime;

class Ogre {
private:
	std:: string _name;
	int _health;  // �����
	int _attack;  // ���ݷ�
	int _defense; // ����

public:
	Ogre(std::string name, int health, int attack, int defense);

	std::string GetName();

	int GetHealth();

	void SetHealth(int health);

	int GetDefense();

	void Attack(Ogre& enemy);

	void Attack(Dragon& enemy);

	void Attack(Slime& enemy);

	void Info();

};