#include "Ogre.h"
#include "Dragon.h"
#include "Slime.h"
#include "Goblin.h"
#include <iostream>

using namespace std;

Ogre::Ogre(string name, int health, int attack, int defense)
	: _name(name), _health(health), _attack(attack), _defense(defense) {}


string Ogre::GetName() {
	return _name;
}

int Ogre::GetHealth() {
	return _health;
}

void Ogre::SetHealth(int health) {
	_health = health;
}

int Ogre::GetDefense() {
	return _defense;
}

void Ogre::Attack(Ogre& enemy) {
	enemy._health -= (_attack - enemy._defense);
	cout << _name << "��" << enemy._name << "�� �����ؼ� �������" << enemy._health << "�� �پ���." << endl;
}

void Ogre::Attack(Dragon& enemy) {
	int damage = (_attack - enemy.GetDefense());

	if (damage <= 0) {
		damage = 0;
	}

	int health = enemy.GetHealth() - damage;

	enemy.SetHealth(health);
	cout << _name << "�� " << enemy.GetName() << "�� �����ؼ� ������� " << enemy.GetHealth() << "�� ����." << endl;

}

void Ogre::Attack(Slime& enemy) {
	int damage = _attack - enemy.GetDefense() - enemy.GetPhysicalRegist();

	if (damage <= 0) {
		damage = 0;
	}

	int health = enemy.GetHealth() - damage;

	cout << _name << "��" << enemy.GetName() << "�� �����ؼ� �������" << enemy.GetHealth() << "�� �پ���." << endl;
}

void Ogre::Info() {
	cout << "�̸�: " << _name << endl;
	cout << "�����: " << _health << endl;
	cout << "���ݷ�: " << _attack << endl;
	cout << "����: " << _defense << endl;
}