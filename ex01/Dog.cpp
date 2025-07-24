#include "Dog.hpp"

Dog::Dog() {
	setType("Dog");
	this->_brain = new Brain;	
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::~Dog() {
	delete this->_brain;
	std::cout << "Dog destructor called." << std::endl;
}

Dog::Dog(const Dog &copy) {
	this->type = copy.getType();
	this->_brain = new Brain(*copy._brain);
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog &assign) {
	if (this != &assign) {
		this->type = assign.getType();
		*this->_brain = *assign._brain;
	}
    std::cout << "Dog copy assignment operator called." << std::endl;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof !" << std::endl;
}