#include "archer.h"
#include "player.h"
#include <iostream>
using namespace std;

Archer::Archer(string nickname) : Player(nickname)
{
    job_name = "�ü�";
    cout << " �ü��� �����Ͽ����ϴ�." << endl;
    accuracy = 80;
}

void Archer::attack()
{
    cout << " ȭ���� �߻��Ѵ�. " << endl;
}