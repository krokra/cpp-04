#include "Animal.hpp"

Animal::Animal() {
	setType("Abstract");
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called." << std::endl;
}

Animal::Animal(const Animal &copy) {
	this->type = copy.getType();
	std::cout << "Animal copy constructor called." << std::endl;
}

Animal& Animal::operator=(const Animal &assign) {
	this->type = assign.getType();
	return *this;
}

std::string Animal::getType() const {
	return this->type;
}

void Animal::setType(const std::string &type) {
	this->type = type;
}