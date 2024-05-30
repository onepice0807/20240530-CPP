#include "Goblin.h"
#include "Slime.h"
#include "Dragon.h"
#include "Ogre.h"
#include <iostream>

using namespace std;

Goblin::Goblin(string name, int health, int attack, int defense, int replenishesQuantity)
    : _name(name), _health(health), _attack(attack), _defense(defense), _replenishesQuantity(replenishesQuantity) {}

std::string Goblin::GetName() {
    return _name;
}

int Goblin::GetHealth() {
    return _health;
}

void Goblin::SetHealth(int health) {
    _health = health;
}

int Goblin::GetDefense() {
    return _defense;
}

int Goblin::GetPhysicalRegist() {
    return _replenishesQuantity;
}

void Goblin::Attack(Goblin& enemy) {
    int damage = _attack - enemy._defense;

    if (damage <= 0) {
        damage = 0;
    }

    enemy._health -= damage;
    if (enemy._health < 0) {
        enemy._health = 0;
    }
    enemy._health += enemy._replenishesQuantity;

    cout << _name << "�� " << enemy._name << "�� �����ؼ� ������� " << enemy._health << "�� �پ���." << endl;
    cout << enemy._name << "�� ��ü ȸ���ؼ� ������� " << enemy._health + enemy._replenishesQuantity << "�� �þ���." << endl;
    enemy._health += enemy._replenishesQuantity;
}

void Goblin::Attack(Slime& enemy) {
    int damage = _attack - enemy.GetDefense() - enemy.GetPhysicalRegist();

    if (damage <= 0) {
        damage = 0;
    }

    int health = enemy.GetHealth() - damage;
    enemy.SetHealth(health);

    cout << _name << "�� " << enemy.GetName() << "�� �����ؼ� ������� " << enemy.GetHealth() << "�� �پ���." << endl;
}

void Goblin::Attack(Ogre& enemy) {
    int damage = _attack - enemy.GetDefense();

    if (damage <= 0) {
        damage = 0;
    }

    int health = enemy.GetHealth() - damage;
    enemy.SetHealth(health);

    cout << _name << "�� " << enemy.GetName() << "�� �����ؼ� ������� " << enemy.GetHealth() << "�� �پ���." << endl;
}

void Goblin::Attack(Dragon& enemy) {
    int damage = _attack - enemy.GetDefense();

    if (damage <= 0) {
        damage = 0;
    }

    int health = enemy.GetHealth() - damage;
    enemy.SetHealth(health);

    cout << _name << "�� " << enemy.GetName() << "�� �����ؼ� ������� " << enemy.GetHealth() << "�� �پ���." << endl;
}

void Goblin::Info() {
    cout << "�̸�: " << _name << endl;
    cout << "�����: " << _health << endl;
    cout << "���ݷ�: " << _attack << endl;
    cout << "����: " << _defense << endl;
    cout << "��ü ȸ����: " << _replenishesQuantity << endl;
}