#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : virtual public Animal {
	public:
		Dog();
		~Dog();
		Dog(const Dog &copy);
		Dog& operator=(const Dog &assign);

		void makeSound() const;
};

#endif