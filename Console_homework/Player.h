#pragma once
using namespace std;

class Player
{
	private:
	char* player_name=new char [30];
	int player_number;
	int level;
	int team_number;
public:
	Player();
	Player(char* new_name, int new_pl_number, int new_level, int new_team);

	~Player()
	{
		delete[](player_name);
	}
	
};

