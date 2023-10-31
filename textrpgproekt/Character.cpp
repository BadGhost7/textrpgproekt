#include "Character.h"
#include <iostream>
Character::Character(int id, std::string name,
	int hp, float stamina, int mana,
	int strength, int agility, int intelligence,
	int xp, int damage) : Entity(id, name) {

	//����� ������ �� ��������� �������,
	//����� ����� ���� ����������������� ������/���
	this->strength = strength;
	this->maxHP = strength * 20;
	//this->hp = this->maxHP;
	this->hp = hp;

	//��� ������� ������ ����� ������������ ������������
	this->agility = agility;
	this->maxStamina = agility * 10;
	this->stamina = this->maxStamina;

	//��� ������� ������ ����� ������������ ����
	this->intelligence = intelligence;
	this->maxMana = intelligence * 20;
	this->mana = this->maxMana;

	this->xp = xp;
	this->level = xp / 1000;

	this->damage = damage;
}

void Character::Attack(Character* character) {

}

//������ �������� ����
int Character::getStrength() {
	return this->strength;
}

//������������� ���� ���������. 
//������������ �� ������� �� ����
void Character::setStrength(int strength) {
	this->strength = strength;
	this->maxHP = strength * 20;
}

//������������ �� ������ ��� ������
int Character::getMaxHP() {
	return this->maxHP;
}

