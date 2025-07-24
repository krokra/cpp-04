#ifndef Cat_HPP
#define Cat_HPP
#include "Animal.hpp"

class Cat : virtual public Animal {
	public:
		Cat();
		~Cat();
		Cat(const Cat &copy);
		Cat& operator=(const Cat &assign);

		void makeSound() const;
};

#endif