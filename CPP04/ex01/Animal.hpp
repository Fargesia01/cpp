#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class	Animal
{
	public :

		Animal(void);
		Animal(Animal &src);
		virtual ~Animal(void);

		Animal& operator=(Animal &src);

		std::string	getType() const;
		virtual void	makeSound() const;
		virtual  Brain*	getBrain() const;

	protected :

		std::string	type;
};

#endif
