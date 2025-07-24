#include "Cat.hpp"

Cat::Cat() {
	setType("Cat");
	this->_brain = new Brain;
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::~Cat() {
	delete this->_brain;
	std::cout << "Cat destructor called." << std::endl;
}

Cat::Cat(const Cat &copy) {
	this->type = copy.getType();
	this->_brain = new Brain(*copy._brain);
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat &assign) {
	if (this != &assign) {
		this->type = assign.getType();
		*this->_brain = *assign._brain;
	}
    std::cout << "Cat copy assignment operator called." << std::endl;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow ! :3" << std::endl;
}