#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class	dog: public	Animal
{
	public :

		Dog(void);
		Dog(Dog &src);
		~Dog(void);

		Dog& operator=(Dog &src);

		virtual void const	makeSound();

	private:

};

#endif
