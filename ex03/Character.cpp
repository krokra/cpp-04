#include "Character.hpp"

Character::Character() {
	_name = "default";
	for (int i = 0; i < 4; i++)
		inventory[i] = 0;
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		if (this->inventory[i] != 0)
			delete this->inventory[i];
	
}
Character::Character(std::string const &name) {
	_name = name;
	for (int i = 0; i < 4; i++)
		inventory[i] = 0;
}

Character::Character(const Character &copy) {
	for (int i = 0; i < 4; i++)
		if (this->inventory[i] != 0)
			delete this->inventory[i];
	for (int i = 0; i < 4; i++)
		if (copy.inventory[i] != 0)
			this->inventory[i] = copy.inventory[i]->clone();
	this->_name = copy._name;
}

Character& Character::operator=(const Character &assign) {
	if (this != &assign) {
		for (int i = 0; i < 4; i++)
			if (this->inventory[i] != 0)
				delete this->inventory[i];
		for (int i = 0; i < 4; i++)
			if (assign.inventory[i] != 0)
				this->inventory[i] = assign.inventory[i]->clone();
		this->_name = assign._name;
	}
	return (*this);
}

void Character::equip(AMateria *m) {
	int idx;

	for (int i = 0; i < 4; i++) {
		if (inventory[i] == 0) {
			idx = i;
			break;
		}
		else if (i == 3  && inventory[i] != 0 || !m)
			return ;
	}
	inventory[idx] = m;
}

void Character::unequip(int idx) {
	if (inventory[idx] == 0) {
		return ;
	}
	else {
		inventory[idx] = 0;
		return ;
	}
}

void Character::use(int idx, ICharacter &target) {
	this->inventory[idx]->use(target);
}

const std::string& Character::getName() const {
	return this->_name;
}