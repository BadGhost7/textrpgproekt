#pragma once

#include <string>

#include "Entity.h" //Импортируем родителя

class Item : public Entity {
protected:
	bool equip;
	std::string type;

	Item(bool equip, std::string type, int id, std::string name);
};

