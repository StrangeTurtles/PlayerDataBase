#pragma once
#include <iostream>
#include <string>
#include <sstream>
class Player
{
public:
	Player();
	bool playing = true;
	void InputInfo(std::string playerName[2],int killCount[2]);
	void DisplayInfo(std::string playerName[2], int killCount[2]);
	~Player();
};

