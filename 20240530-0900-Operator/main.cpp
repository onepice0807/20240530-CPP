#include <iostream>
#include <string>
#include "Dragon.h"
#include "Ogre.h"
#include "Slime.h"
#include "Goblin.h"

using namespace std;

int main() {
    Dragon dragonA("dragonA", 100, 24, 10);
    Dragon dragonB("dragonB", 90, 20, 12);

    Ogre ogreA("ogreA", 50, 10, 8);
    Ogre ogreB("ogreB", 48, 11, 9);

    Slime slimeA("slimeA", 30, 5, 5, 8);
    Slime slimeB("slimeB", 28, 8, 7, 10);

    Goblin goblinA("goblinA", 50, 15, 10, 5);
    Goblin goblinB("goblinB", 65, 18, 12, 6);

    dragonB.Info();
    cout << endl;
    dragonA.Attack(dragonB);

    cout << endl;
    dragonB.Info();

    cout << endl;
    ogreA.Attack(dragonB);
    cout << endl;
    dragonB.Info();

    cout << endl;
    ogreB.Info();
    cout << endl;
    dragonB.Attack(ogreB);
    cout << endl;
    ogreB.Info();

    slimeA.Attack(ogreA);

    dragonA.Attack(slimeB);

    goblinA.Info();
    goblinB.Attack(goblinA);

    goblinA.Info();

    return 0;
}