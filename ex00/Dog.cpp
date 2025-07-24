#include "Dog.hpp"

Dog::Dog() {
	setType("Dog");
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor called." << std::endl;
}

Dog::Dog(const Dog &copy) {
	this->type = copy.getType();
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog &assign) {
	this->type = assign.getType();
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof !" << std::endl;
}