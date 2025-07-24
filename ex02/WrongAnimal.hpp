#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <string>
#include <iostream>

class WrongAnimal {
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal& operator=(const WrongAnimal &assign);
		void makeSound() const;
		std::string getType(void) const;
		void setType(const std::string &type);
	protected:
		std::string type;
};

#endif