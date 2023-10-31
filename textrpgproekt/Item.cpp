#include "Item.h"

#include <string>

Item::Item(
	bool equip,
	std::string type,
	int id,
	std::string name) : Entity(id, name) {

	this->type = type;
	this->equip = equip;
}
