#pragma once
#include <string>

class Ogre;
class Dragon;
class Slime;

class Goblin {
private:
    std::string _name;
    int _health;  // �����
    int _attack;  // ���ݷ�
    int _defense; // ����
    int _replenishesQuantity; // ��ü ȸ����

public:
    Goblin(std::string name, int health, int attack, int defense, int replenishesQuantity);

    std::string GetName();

    int GetHealth();

    void SetHealth(int health);

    int GetDefense();

    int GetPhysicalRegist();

    void Attack(Goblin& enemy);

    void Attack(Slime& enemy);

    void Attack(Ogre& enemy);

    void Attack(Dragon& enemy);

    void Info();
};