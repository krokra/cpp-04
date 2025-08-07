#include "AMateria.hpp"

AMateria::AMateria() : type("default") {};

AMateria::AMateria(std::string const &type) {
	this->type = type;
}

AMateria::~AMateria() {};

AMateria::AMateria(const AMateria &copy) {
	this->type = copy.type;
}

AMateria& AMateria::operator=(const AMateria &assign) {
	if (this != &assign)
		this->type = assign.type;
	return *this;
}

const std::string& AMateria::getType() const {
	return type;
}

void AMateria::use(ICharacter &target) {};