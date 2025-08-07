#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {};

Cure::Cure(std::string const &type) {
	this->type = type;
}

Cure::~Cure() {};

Cure::Cure(const Cure &copy) {
	this->type = copy.type;
}

Cure& Cure::operator=(const Cure &assign) {
	if (this != &assign)
		this->type = assign.type;
	return *this;
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria* Cure::clone() const {
	AMateria* cloned = new Cure(*this);
	return cloned;
}