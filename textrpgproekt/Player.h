#pragma once

#include "Character.h"

class Player : public Character {
private:
	int reputation;

public:
	Player(int id, std::string name,
		int hp, float stamina, int mana,
		int strength, int agility, int intelligence,
		int xp, int damage, int reputation);


	//Чтение поля reputation
	int getReputation();

	//Запись поля reputation
	void setReputation(int reputation);


};