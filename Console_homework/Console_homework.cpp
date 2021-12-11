#include <iostream>
#include "Player.h"
using namespace std;

int main()
{
	char* name = new char [30];
	cout << "Enter first player name :";
	gets_s(name, 30);
	int player_number;
	cout << "Enter first player number:";
	cin >> player_number;
	int level;
	cout << "Enter first player level:";
	cin >> level;
	int team_number;
	cout << "Enter first player number of team:";
	cin >> team_number;
	cout << endl;

	Player* one = new Player(name, player_number, level, team_number);
	one->print();
	cout << endl;
	cin.ignore();


	char* name2 = new char[30];
	cout << "Enter second player name :";
	gets_s(name2, 30);
	int player_number2;
	cout << "Enter second player number:";
	cin >> player_number2;
	int level2;
	cout << "Enter second player level:";
	cin >> level2;
	int team_number2;
	cout << "Enter second player number of team:";
	cin >> team_number2;
	cin.ignore();

	Player* second = new Player();
	second->setName(name2);
	second->setPl_Number(player_number2);
	second->setLevel(level2);
	second->setTeam_Number(team_number2);
	cout << endl;

	second->print();
	cout << endl;

	one->high_level(second);
	cout << endl;

	cout << one->getName() << " is in " << one->getTeam_Number()<<" team \n";
	cout << second->getName() << " is in " << second->getTeam_Number() << " team \n";

	delete[](name);
	delete[](name2);
}

