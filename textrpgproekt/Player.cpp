#include "Player.h"

Player::Player(int id, std::string name,
	int hp, float stamina, int mana,
	int strength, int agility, int intelligence,
	int xp, int damage, int reputation)
	: Character(id, name, hp, stamina,
		mana, strength, agility,
		intelligence, xp, damage) {

	this->reputation = reputation;
}

int Player::getReputation() {
	return this->reputation;
}

void Player::setReputation(int reputation) {
	this->reputation = reputation;
}
