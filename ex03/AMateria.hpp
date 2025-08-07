#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
	protected:
		std::string type;
	public:
		AMateria();
		AMateria(std::string const &type);

		virtual ~AMateria();

		AMateria(const AMateria &copy);
		AMateria& operator=(const AMateria &assign);

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		const std::string& getType() const;
			
};

#endif