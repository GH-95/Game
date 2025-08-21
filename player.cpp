#include <iostream>
#include "player.h"

Player::Player(string nickname) : nickname(nickname)
{
    job_name = "���谡"; 
    level = 1;
    HP = 100;
    MP = 50;
    power = 10;
    defence = 5;
    accuracy = 70;
    speed = 5;
}

void Player::printPlayerStatus()
{
    cout << "------------------------------------" << endl;
    cout << "* ���� �ɷ�ġ" << endl;
    cout << "�г���: " << nickname << endl;
    cout << "����: " << job_name << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "���ݷ�: " << power << endl;
    cout << "����: " << defence << endl;
    cout << "��Ȯ��: " << accuracy << endl;
    cout << "�ӵ�: " << speed << endl;
    cout << "------------------------------------" << endl;
}

std::string Player::getJobName() {
    return job_name;
}

std::string Player::getNickname() {
    return nickname;
}

int Player::getLevel() {
    return level;
}

int Player::getHP() {
    return HP;
}

int Player::getMP() {
    return MP;
}

int Player::getPower() {
    return power;
}

int Player::getDefence() {
    return defence;
}

int Player::getAccuracy() {
    return accuracy;
}

int Player::getSpeed() {
    return speed;
}

void Player::setNickname(std::string newNickname) {
    nickname = newNickname;
}

bool Player::setHP(int newHP) {
    if (newHP >= 0) {
        HP = newHP;
        return true;
    }
    return false;
}

bool Player::setMP(int newMP) {
    if (newMP >= 0) {
        MP = newMP;
        return true;
    }
    return false;
}

void Player::setPower(int newPower) {
    power = newPower;
}

void Player::setDefence(int newDefence) {
    defence = newDefence;
}

void Player::setAccuracy(int newAccuracy) {
    accuracy = newAccuracy;
}

void Player::setSpeed(int newSpeed) {
    speed = newSpeed;
}