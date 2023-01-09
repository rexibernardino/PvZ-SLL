#include "pvz.h"

using namespace std;

int main()
{
    ListCharacter plant = { NULL };
    ListCharacter zoombie = { NULL };

    addCharacter(plant, createCharacter("P4", 1, 50));
    addCharacter(plant, createCharacter("P3", 1, 50));
    addCharacter(plant, createCharacter("P2", 1, 50));
    addCharacter(plant, createCharacter("P1", 1, 50));


    cout << "PLANTS: "; printCharacter(plant);

    addCharacter(zoombie, createCharacter("Z4", 1, 50));
    addCharacter(zoombie, createCharacter("Z3", 1, 50));
    addCharacter(zoombie, createCharacter("Z2", 1, 50));
    addCharacter(zoombie, createCharacter("Z1", 1, 50));

    cout << "ZOOMBI: "; printCharacter(zoombie); cout << "\n";

    doAttack(plant, zoombie);
    return 0;
}
