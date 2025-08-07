#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {};

Ice::Ice(std::string const &type) {
	this->type = type;
}

Ice::~Ice() {};

Ice::Ice(const Ice &copy) {
	this->type = copy.type;
}

Ice& Ice::operator=(const Ice &assign) {
	if (this != &assign)
		this->type = assign.type;
	return *this;
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const {
	AMateria* cloned = new Ice(*this);
	return cloned;
}	