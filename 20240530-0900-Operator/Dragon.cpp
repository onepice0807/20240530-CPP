#include "Dragon.h"
#include "Ogre.h"
#include "Slime.h"
#include "Goblin.h"
#include <iostream>

using namespace std;

Dragon::Dragon(string name, int health, int attack, int defense)
	: _name(name), _health(health), _attack(attack), _defense(defense) {}

string Dragon::GetName() {
	return _name;
}

int Dragon::GetHealth() {
	return _health;
}

void Dragon::SetHealth(int health) {
	_health = health;
}

int Dragon::GetDefense() {
	return _defense;
}

void Dragon::Attack(Dragon& enemy) {
	enemy._health -= (_attack - enemy._defense);
	cout << _name << "��" << enemy._name << "�� �����ؼ� �������" << enemy._health << "�� �پ���." << endl;
}

void Dragon::Attack(Ogre& enemy) {
	int damage = _attack - enemy.GetDefense();

	if (damage <= 0) {
		damage = 0;
	}

	int health = enemy.GetHealth() - damage;

	enemy.SetHealth(health);
	cout << _name << "�� " << enemy.GetName() << "�� �����ؼ� ������� " << enemy.GetHealth() << "�� ����." << endl;
}

void Dragon::Attack(Slime& enemy) {
	int damage = _attack - enemy.GetDefense() - enemy.GetPhysicalRegist();

	if (damage <= 0) {
		damage = 0;
	}

	int health = enemy.GetHealth() - damage;

	cout << _name << "��" << enemy.GetName() << "�� �����ؼ� �������" << enemy.GetHealth() << "�� �پ���." << endl;
}

void Dragon::Attack(Goblin& enemy) {
	int damage = _attack - enemy.GetDefense() + enemy.GetPhysicalRegist();

	if (damage <= 0) {
		damage = 0;
	}

	int health = enemy.GetHealth() - damage;

	cout << _name << "��" << enemy.GetName() << "�� �����ؼ� �������" << enemy.GetHealth() << "�� �پ���." << endl;
}

void Dragon::Info() {
	cout << "�̸�: " << _name << endl;
	cout << "�����: " << _health << endl;
	cout << "���ݷ�: " << _attack << endl;
	cout << "����: " << _defense << endl;
}