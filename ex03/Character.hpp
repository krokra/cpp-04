#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
	private:
		AMateria* inventory[4];
		std::string _name;
	public:
		Character();
		Character(const std::string &name);
		Character(const Character &copy);
		Character& operator=(const Character &assign);
		~Character();

		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		const std::string& getName() const;
};


#endif