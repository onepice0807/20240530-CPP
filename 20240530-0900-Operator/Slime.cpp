#include "Slime.h"
#include "Dragon.h"
#include "Ogre.h"
#include "Goblin.h"
#include <iostream>

using namespace std;

Slime::Slime(string name, int health, int attack, int defense, int physicalRegist)
	: _name(name), _health(health), _attack(attack), _defense(defense), _physicalRegist(physicalRegist) {}

std::string Slime::GetName() {
	return _name;
}

int Slime::GetHealth() {
	return _health;
}
void Slime::SetHealth(int health) {
	_health = health;
}

int Slime::GetDefense() {
	return _defense;
}

int Slime::GetPhysicalRegist() {
	return _physicalRegist;
}

void Slime::Attack(Slime& enemy) {
	int damage = _attack - enemy._defense - enemy._physicalRegist;

	if (damage <= 0) {
		damage = 0;
	}

	int health = enemy._health - damage;

	cout << _name << "��" << enemy._name << "�� �����ؼ� �������" << enemy._health << "�� �پ���." << endl;
}

void Slime::Attack(Ogre& enemy) {
	int damage = (_attack - enemy.GetDefense());

	if (damage <= 0) {
		damage = 0;
	}

	int health = enemy.GetHealth() - damage;

	enemy.SetHealth(health);
	cout << _name << "��" << enemy.GetName() << "�� �����ؼ� �������" << enemy.GetHealth() << "�� �پ���." << endl;

}

void Slime::Attack(Dragon& enemy) {
	int damage = (_attack - enemy.GetDefense());

	if (damage <= 0) {
		damage = 0;
	}

	int health = enemy.GetHealth() - damage;

	enemy.SetHealth(health);
	cout << _name << "��" << enemy.GetName() << "�� �����ؼ� �������" << enemy.GetHealth() << "�� �پ���." << endl;

}

void Slime::Info() {
	cout << "�̸�: " << _name << endl;
	cout << "�����: " << _health << endl;
	cout << "���ݷ�: " << _attack << endl;
	cout << "����: " << _defense << endl;
	cout << "���� ���� ���׷�: " << _defense << endl;
}