#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class	Animal
{
	public :

		Animal(void);
		Animal(Animal &src);
		~Animal(void);

		Animal& operator=(Animal &src);

		virtual void const	makeSound();

	protected :

		std::string	type;
};

#endif
