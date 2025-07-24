#include "Brain.hpp"

Brain::Brain() {
	ideas = new std::string[100];
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::~Brain() {
	delete[] ideas;
	std::cout << "Brain destructor called." << std::endl;
}

Brain::Brain(const Brain &copy) {
	ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		ideas[i] = copy.ideas[i];
	std::cout << "Brain copy constructor called." << std::endl;
}

Brain& Brain::operator=(const Brain &assign) {
	if (this != &assign) {
		for (int i = 0; i < 100; i++)
			ideas[i] = assign.ideas[i];
	}
    std::cout << "Brain copy assignment operator called." << std::endl;
	return *this;
}