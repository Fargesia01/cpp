#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat default constructor called." << std::endl;
	return ;
}

Cat::Cat(Cat &src)
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = src;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called." << std::endl;
	return ;
}

Cat &	Cat::operator=(Cat &src)
{
	return (*this);
}

void const	Cat::makeSound()
{
	std::cout << "Miaou!" << std::endl;
	return ;
}
