#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog default constructor." << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
	return ;
}

Dog::Dog(Dog &src)
{
	std::cout << "Dog copy constructor." << std::endl;
	*this = src;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called." << std::endl;
	delete(this->brain);
	return ;
}

Dog &	Dog::operator=(Dog &src)
{
	std::cout << "Dog assignation operator called." << std::endl;
	this->type = src.type;
	*(this->brain) = *(src.getBrain());
	return (*this);
}

Brain*	Dog::getBrain() const
{
	return (this->brain);
}

void	Dog::makeSound() const
{
	std::cout << "Woof Woof!" << std::endl;
	return ;
}
