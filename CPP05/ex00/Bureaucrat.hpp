#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <exception>
#include <ostream>
#include "iostream"

class Bureaucrat {

private:
	const std::string _name;
	unsigned int _grade;

public:
	Bureaucrat();
	Bureaucrat(const std::string &name, unsigned int grade);
	Bureaucrat(const Bureaucrat &copy);
	~Bureaucrat();

	Bureaucrat &operator=(const Bureaucrat &copy);
	
};

#endif
