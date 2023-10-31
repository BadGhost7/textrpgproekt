#include <iostream>
#include "Player.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    Player* p1 = new Player(1, "John", 250, 25, 150, 25, 10, 10, 1000, 25, 10);

    p1->setStrength(30);
    cout << p1->getMaxHP();


}
