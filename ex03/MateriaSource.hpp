#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria* learnt[4];
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource &copy);
		MateriaSource& operator=(const MateriaSource &assign);

		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const &type);
};

#endif