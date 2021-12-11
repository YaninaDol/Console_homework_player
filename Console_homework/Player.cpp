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
	this->player_number = new_pl_number;
	this->level = new_level;
	this->team_number = new_team;
}

void Player::setName(char* new_name)
{
	strcpy_s(player_name, 30, new_name);
}

void Player::setPl_Number(int new_pl_number)
{
	this->player_number = new_pl_number;
}

void Player::setLevel(int new_level)
{
	this->level = new_level;
}

void Player::setTeam_Number(int new_team)
{
	this->team_number = new_team;
}
