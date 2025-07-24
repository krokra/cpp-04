#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	setType("WrongAnimal");
	std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
	this->type = copy.getType();
	std::cout << "WrongAnimal copy constructor called." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &assign) {
	this->type = assign.getType();
	return *this;
}

std::string WrongAnimal::getType() const {
	return this->type;
}

void WrongAnimal::setType(const std::string &type) {
	this->type = type;
}

void WrongAnimal::makeSound() const {
	std::cout << "* Wrong animal sound *" << std::endl;
}