#include "Player.h"
#include <iostream>

Player::Player()
{
	this->player_name = (char*)" ";
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
	this->player_name = new_name;
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

char* Player::getName()
{
	return this->player_name;
}

int Player::getPl_Number()
{
	return this->player_number;
}

int Player::getLevel()
{
	return this->level;
}

int Player::getTeam_Number()
{
	return this->team_number;
}

void Player::print()
{
	{
		cout << "Name : " << this->player_name << endl
			 << "Player number : "<<this->player_number << endl
		     << "Level : " << this->level<<endl
			 << "Number of team : " <<this->team_number<<endl;
	}
}

void Player::high_level(Player* other)
{
	if (this->level > other->level)
	{
		cout << this->player_name << " have higher level! \n";
	}
	else if (this->level < other->level)
	{
		cout << other->player_name << " have higher level! \n";
	}
	else
	{
		cout << " Players have the same level! \n";
	}
}
