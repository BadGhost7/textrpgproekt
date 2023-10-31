#include "Weapon.h"
#include <iostream>

Weapon::Weapon(std::string name, int damage) {
	this->name = name;
	this->damage = damage;
}

std::string Weapon::getName() {
	return this->name;
}

void Weapon::setName(std::string name) {
	this->name = name;
}

int Weapon::getDamage() {
	return this->damage;
}

void Weapon::setDamage(int damage) {
	this->damage = damage;
}

void Weapon::Shoot() {
	std::cout << "Can't shoot";
}