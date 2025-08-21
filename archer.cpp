#include "archer.h"
#include "player.h"
#include <iostream>
using namespace std;

Archer::Archer(string nickname) : Player(nickname)
{
    job_name = "궁수";
    cout << " 궁수로 전직하였습니다." << endl;
    accuracy = 80;
}

void Archer::attack()
{
    cout << " 화살을 발사한다. " << endl;
}