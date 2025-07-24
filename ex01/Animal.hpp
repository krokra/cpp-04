#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal {
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &copy);
		Animal& operator=(const Animal &assign);
		virtual void makeSound() const;
		std::string getType(void) const;
		void setType(const std::string &type);
	protected:
		std::string type;
};

#endif