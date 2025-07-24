#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "Animal test:" << std::endl << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << std::endl;
	std::cout << "WrongAnimal test:" << std::endl << std::endl;
	const WrongAnimal* a = new WrongAnimal();
	const WrongAnimal* b = new WrongCat();
	std::cout << b->getType() << " " << std::endl;
	b->makeSound();
	a->makeSound();

	delete a;
	delete b;
	return 0;
}