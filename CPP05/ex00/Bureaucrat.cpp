#include "Bureaucrat.hpp"

Bureaucrat::Bureaucratp(void)
{
	std::cout << "Bureaucrat default constructor." << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	std::cout << "Bureaucrat base constructor." << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	std::cout << "Bureaucrat copy constructor called." << std::endl;
	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor called." << std::endl;
	return ;
}

Bureaucrat &	Bureaucrat::operator=(const Bureaucrat &src)
{
	std::cout << "Bureaucrat assignation operator called." << std::endl;
	this->_grade = src.getGrade();
	return (*this);
}

const std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade()
{
	return (this->_grade);
}

void	Bureaucrat::addGrade(int amount)
{
	
}

void	Bureaucrat::lowGrade(int amount)
{
	
}

std::ostream &	operator<<(std::ostream &o, const Bureaucrat &src)
{
	o << this->_name << ", bureaucrat grade " << this->_grade << "." << std::endl;
	return (o);
}
