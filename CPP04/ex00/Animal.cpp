#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal default constructor." << std::endl;
	return ;
}

Animal::Animal(Animal &src)
{
	std::cout << "Animal copy constructor." << std::endl;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor." << std::endl;
	return ;
}

Animal &	Animal::operator=(Animal &src)
{
	std::cout << "Animal assignation operator called." << std::endl;
	return ;
}

void const	Animal::makeSound()
{
	std::cout << "Random animal noise." << std::endl;
	return ;
}
