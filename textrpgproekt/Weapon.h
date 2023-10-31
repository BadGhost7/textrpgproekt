
#pragma once
#include <string>

class Weapon {
protected:
	std::string name;
	int damage;

	//Конструктор
	Weapon(std::string name, int damage);

	//Свойства
	std::string getName();
	void setName(std::string name);

	int getDamage();
	void setDamage(int damage);

	virtual void Shoot();
};
