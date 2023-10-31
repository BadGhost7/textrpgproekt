#pragma once

#include <string>

//Класс сущность - прародитель всех остальных объектов/персонажей
class Entity {

protected:
	int id;
	std::string name;

	//Конструктор
	Entity(int id, std::string name) {
		this->id = id;
		this->name = name;
	}
};