#include "thief.h"
#include "player.h"
#include <iostream>
using namespace std;

Thief::Thief(string nickname) : Player(nickname)
{
    job_name = "도적";
    cout << " 도적로 전직하였습니다." << endl;
    speed = 80;
}

void Thief::attack()
{
    cout << " 표창을 던진다. " << endl;
}