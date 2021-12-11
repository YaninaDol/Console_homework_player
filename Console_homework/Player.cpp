#include "Player.h"
#include <iostream>

Player::Player()
{
	this->player_name = nullptr;
	this->player_number = 0;
	this->level = 0;
	this->team_number = 0;
}

Player::Player(char* new_name, int new_pl_number, int new_level, int new_team)
{
	strcpy_s(player_name, 30, new_name);
	player_number = new_pl_number;
	level = new_level;
	team_number = new_team;
}