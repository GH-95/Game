#pragma once
#include <iostream>
#include "player.h"

class Magician :public Player
{
public:
    Magician (string nickname);
    void attack() override;
};