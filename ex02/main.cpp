#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"	

int main()
{
	std::cout << "Subject test :" << std::endl << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

	std::cout << "Array test :" << std::endl << std::endl;
	Animal *tab[6];
	for (int i = 0; i < 3; i++)
		tab[i] = new Dog();
	for (int j = 3; j < 6; j++)
		tab[j] = new Cat();
	for (int k = 0; k < 6; k++)
		tab[k]->makeSound();
	for (int l = 0; l < 6; l++)
		delete tab[l];
	return 0;
}