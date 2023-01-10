#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat: public Animal
{
	public :

		Cat(void);
		Cat(Cat &src);
		~Cat(void);

		Cat& operator=(Cat &src);

		Brain*	getBrain() const;
		void	makeSound() const;

	private :

		Brain* brain;


};

#endif
