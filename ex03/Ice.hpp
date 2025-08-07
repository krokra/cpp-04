#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice();
		Ice(std::string const &type);

		~Ice();

		Ice(const Ice &copy);
		Ice& operator=(const Ice &assign);
		AMateria* clone() const;
		void use(ICharacter &target);
};

#endif