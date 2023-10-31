#pragma once

#include <string>

#include "Entity.h" //����������� ��������

class Character : public Entity {
protected:
	int strength; //����
	int agility; //��������
	int intelligence; //���������

	int hp; //������� ��������
	int maxHP; //������������ ��������

	float stamina; //������� ������������
	float maxStamina; //������������ �� ������ ������

	int mana; //������� ����
	int maxMana; //������������ ����

	int xp; //����
	int level; //�������

	int damage; //����

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
