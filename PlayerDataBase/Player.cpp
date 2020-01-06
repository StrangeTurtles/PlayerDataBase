#include "Player.h"

using namespace std;

Player::Player()
{
	std::string* playerName = new std::string[3];
	int* killCount = new int[3];
	killCount[1] = 0;
	killCount[2] = 0;
	while (playing)
	{
		InputInfo(playerName, killCount);
	}
	
}

void Player::InputInfo(std::string playerName[2], int killCount[2])
{
	std::string temp = "";
	cout << "'Display' to show the player, '1' to edit player 1, '2' to edit player 2" << endl;
	cin >> temp;
	for (int i = 0; i < temp.length(); i++)
	{
		temp[i] = tolower(temp[i]);
	}
	if (temp.find("display") != string::npos)
	{
		DisplayInfo(playerName,killCount);
	}
	if (temp.find("1") != string::npos)
	{
		cout << "Player name 1 : ";
		cin >> playerName[1];
		cout << "kill count : ";
		cin >> temp;
		if (!temp.empty() && temp.find_first_not_of("0123456789") == std::string::npos)
		{
			stringstream numberTemp(temp);
			numberTemp >> killCount[1];
		}
	}
	if (temp.find("2") != string::npos)
	{
		cout << "Play name 1 :";
		cin >> playerName[2];
		cout << "kill count :";
		cin >> temp;
		if (!temp.empty() && temp.find_first_not_of("0123456789") == std::string::npos)
		{
			stringstream numberTemp(temp);
			numberTemp >> killCount[2];
		}
	}
}

void Player::DisplayInfo(std::string playerName[2], int killCount[2])
{
	std::cout << "Player name : " << playerName[1] << " Kill count : " << killCount[1] << "\0" << std::endl;
	std::cout << "Player name : " << playerName[2] << " Kill count : " << killCount[2] << "\0" << std::endl;
}


Player::~Player()
{
}
