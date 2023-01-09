#ifndef PVZ_H_INCLUDED
#define PVZ_H_INCLUDED

#include <iostream>
using namespace std;

typedef struct Character *adrCharacter;
typedef struct AttackInfo *adrAttackInfo;

struct Character {
    string nama;
    int damage;
    int hp;
    adrCharacter next;
};

struct ListCharacter {
    adrCharacter first;
};

struct ListAttackInfo {
    adrAttackInfo first;
};

adrCharacter createCharacter(string nama, int damage, int hp);

void addCharacter(ListCharacter &C, adrCharacter newCharacter);

void printCharacter(ListCharacter A);
void doAttack(ListCharacter X, ListCharacter Y);

#endif // PVZ_H_INCLUDED
