#include "Character.h"
#include <iostream>
Character::Character(int id, std::string name,
	int hp, float stamina, int mana,
	int strength, int agility, int intelligence,
	int xp, int damage) : Entity(id, name) {

	//Можно задать ХП персонажу заранее,
	//чтобы можно было встретитьраненных врагов/НПС
	this->strength = strength;
	this->maxHP = strength * 20;
	//this->hp = this->maxHP;
	this->hp = hp;

	//При встрече всегда будет маскимальная выносливость
	this->agility = agility;
	this->maxStamina = agility * 10;
	this->stamina = this->maxStamina;

	//При встрече всегда будет маскимальная мана
	this->intelligence = intelligence;
	this->maxMana = intelligence * 20;
	this->mana = this->maxMana;

	this->xp = xp;
	this->level = xp / 1000;

	this->damage = damage;
}

void Character::Attack(Character* character) {

}

//Читаем значение силы
int Character::getStrength() {
	return this->strength;
}

//Устанавливаем силу персонажа. 
//Маскимальное хп зависит от силы
void Character::setStrength(int strength) {
	this->strength = strength;
	this->maxHP = strength * 20;
}

//Максимальное ХП только для чтения
int Character::getMaxHP() {
	return this->maxHP;
}

