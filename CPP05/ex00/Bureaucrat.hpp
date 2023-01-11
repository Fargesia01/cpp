#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat
{

	public :

		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &src);
		~Bureaucrat(void);

		Bureaucrat&	operator=(const Bureaucrat &src);

		const std::string	getName() const;
		int					getGrade() const;

		void	addGrade(int amount);
		void	lowGrade(int amount);

	private :

		Bureaucrat(void);
		const std::string	_name;
		int					_grade;
};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &src);

#endif
