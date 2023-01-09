#include "pvz.h"



adrCharacter createCharacter(string nama, int damage, int hp) {
    return adrCharacter { new Character { nama, damage, hp, NULL } };
}


void addCharacter(ListCharacter &C, adrCharacter newCharacter) {
    if (C.first) {
        newCharacter->next = C.first;
    }
    C.first = newCharacter;
}

void printCharacter(ListCharacter A) {
    adrCharacter cur = A.first;
    while (cur) {
        cout << cur->nama << " - ";
        cur = cur->next;
    }
    cout << "\n";
}

void doAttack(ListCharacter X, ListCharacter Y) {
    adrCharacter curX = X.first;
    adrCharacter curY = Y.first;

    while (curX && curY) {
        cout << "\n"<<curX->nama <<  " vs " << curY->nama <<  endl;

        while (curX->hp > 0 && curY->hp > 0) {
            curX->hp -= curY->damage;
            curY->hp -= curX->damage;
        }

        if (curX->hp == curY->hp) {
            // seri (mati semua)
            curX = curX->next;
            curY = curY->next;
        } else if (curX->hp > curY->hp) {
            // X win
            curX->hp += curY->damage;
            curY = curY->next;
        } else {
            // Y win
            curY->hp += curX->damage;
            curX = curX->next;
        }
    }
    cout << "\n";
    cout << "\n";

    if (curX) {
        cout << curX->nama << " END THE GAME WITH VICTORY !" << endl;
    } else if (curY) {
        cout << curY->nama << " END THE GAME WITH VICTORY !" << endl;
    } else {
        cout << "MATCH DRAW " << endl;
    }
}
