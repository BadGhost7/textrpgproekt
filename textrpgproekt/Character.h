#pragma once

#include <string>

#include "Entity.h" //Импортируем родителя

class Character : public Entity {
protected:
	int strength; //Сила
	int agility; //Ловкость
	int intelligence; //Интеллект

	int hp; //Текущее здоровье
	int maxHP; //Максимальное здоровье

	float stamina; //Текущая выносливость
	float maxStamina; //Выносливость на данный момент

	int mana; //Текущая мана
	int maxMana; //Максимальная мана

	int xp; //Опыт
	int level; //Уровень

	int damage; //Урон

	Character(int id, std::string name,
		int hp, float stamina, int mana,
		int strength, int agility, int intelligence,
		int xp, int damage);

	void Attack(Character* character);
	
		
	
public:
	int getStrength();
	void setStrength(int strength);
	int getMaxHP();
};
