#include "Cat.hpp"

Cat::Cat() {
	setType("Cat");
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called." << std::endl;
}

Cat::Cat(const Cat &copy) {
	this->type = copy.getType();
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat &assign) {
	if (this != &assign)
		this->type = assign.getType();
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow ! :3" << std::endl;
}