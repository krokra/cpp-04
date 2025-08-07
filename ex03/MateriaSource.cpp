#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		learnt[i] = 0;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		delete learnt[i];
}

MateriaSource::MateriaSource(const MateriaSource &copy) {
	for (int i = 0; i < 4; i++)
	{
		if (copy.learnt[i] != 0)
			this->learnt[i] = copy.learnt[i]->clone();
		else
			this->learnt[i] = 0;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource &assign) {
	if (this != &assign) {
		for (int i = 0; i < 4; i++)
			if (this->learnt[i] != 0)
				delete this->learnt[i];
		for (int i = 0; i < 4; i++)
			if (assign.learnt[i] != 0)
				this->learnt[i] = assign.learnt[i]->clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m) {
	int idx;
	for (int i = 0; i < 4; i++)
	{
		if (learnt[i] == 0) {
			idx = i;
			break ;
		}
		else if (i == 3 && learnt[i] != 0 || !m ) {
			return ;
		}
	}
	learnt[idx] = m->clone();
}

AMateria* MateriaSource::createMateria(std::string const &type) {
	int idx;
	for (int i = 0; i < 4; i++)
	{
		if (learnt[i]->getType() == type)
			return (learnt[i]->clone());
	}
	return NULL;
}

