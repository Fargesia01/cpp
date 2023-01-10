#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class	Dog: public	Animal
{
	public :

		Dog(void);
		Dog(Dog &src);
		~Dog(void);

		Dog& operator=(Dog &src);

		Brain* 	getBrain() const;
		void	makeSound() const;

	private :

		Brain*  brain;
};

#endif
