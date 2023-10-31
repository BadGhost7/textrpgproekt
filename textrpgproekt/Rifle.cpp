#pragma once
#include "Rifle.h"


Rifle::Rifle(std::string name, int damage, int riflingCount)
	:Weapon(name, damage) {
	this->riflingCount = riflingCount;
}

int Rifle::getRiflingCount() {
	return this->riflingCount;
}
void Rifle::setRiflingCount(int riflingCount) {
	this->riflingCount = riflingCount;
}