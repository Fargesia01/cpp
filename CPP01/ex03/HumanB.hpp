#ifndef HUMANB
# define HUMANB

#include "Weapon.hpp"

class	HumanB
{
	public :

		HumanB(std::string name);
		~HumanB(void);
		void	attack() const;
		void	setWeapon(Weapon& weapon);

	private :

		std::string	_name;
		Weapon* 	_weapon;

	
};

#endif
