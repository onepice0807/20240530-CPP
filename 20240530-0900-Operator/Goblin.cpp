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

    cout << _name << "가 " << enemy._name << "을 공격해서 생명력이 " << enemy._health << "로 줄었다." << endl;
    cout << enemy._name << "가 자체 회복해서 생명력이 " << enemy._health + enemy._replenishesQuantity << "로 늘었다." << endl;
    enemy._health += enemy._replenishesQuantity;
}

void Goblin::Attack(Slime& enemy) {
    int damage = _attack - enemy.GetDefense() - enemy.GetPhysicalRegist();

    if (damage <= 0) {
        damage = 0;
    }

    int health = enemy.GetHealth() - damage;
    enemy.SetHealth(health);

    cout << _name << "가 " << enemy.GetName() << "을 공격해서 생명력이 " << enemy.GetHealth() << "로 줄었다." << endl;
}

void Goblin::Attack(Ogre& enemy) {
    int damage = _attack - enemy.GetDefense();

    if (damage <= 0) {
        damage = 0;
    }

    int health = enemy.GetHealth() - damage;
    enemy.SetHealth(health);

    cout << _name << "가 " << enemy.GetName() << "을 공격해서 생명력이 " << enemy.GetHealth() << "로 줄었다." << endl;
}

void Goblin::Attack(Dragon& enemy) {
    int damage = _attack - enemy.GetDefense();

    if (damage <= 0) {
        damage = 0;
    }

    int health = enemy.GetHealth() - damage;
    enemy.SetHealth(health);

    cout << _name << "가 " << enemy.GetName() << "을 공격해서 생명력이 " << enemy.GetHealth() << "로 줄었다." << endl;
}

void Goblin::Info() {
    cout << "이름: " << _name << endl;
    cout << "생명력: " << _health << endl;
    cout << "공격력: " << _attack << endl;
    cout << "방어력: " << _defense << endl;
    cout << "자체 회복력: " << _replenishesQuantity << endl;
}