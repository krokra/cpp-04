#include "WrongCat.hpp"

WrongCat::WrongCat() {
	setType("WrongCat");
	std::cout << "WrongCat default constructor called." << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) {
	this->type = copy.getType();
	std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &assign) {
	if (this != &assign)
		this->type = assign.getType();
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "Meow ! :3" << std::endl;
}