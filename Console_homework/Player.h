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
	void setName(char* new_name);
	void setPl_Number(int new_pl_number);
	void setLevel(int new_level);
	void setTeam_Number(int new_team);

	char* getName();
	int getPl_Number();
	int getLevel();
	int getTeam_Number();


	~Player()
	{
		delete[](player_name);
	}
	
};

