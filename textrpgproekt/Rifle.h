#pragma once
#include "Weapon.h"
#include <iostream>

class Rifle : public Weapon {
private:
	int riflingCount;

public:
	Rifle(std::string name, int damage, int riflingCount);
	int getRiflingCount();
	void setRiflingCount(int riflingCount);
	void Shoot() override {
		std::cout << "brbrbrbrbrbr";
	}
};