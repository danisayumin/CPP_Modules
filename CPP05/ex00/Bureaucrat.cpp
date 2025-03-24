#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150) {
	std::cout << "Bureaucrat default constructor called" << std:: endl;
}

Bureaucrat::Bureaucrat(const std::string &name, unsigned int grade)
	: _name(name) {
		if (grade < 1) {
			//throw Bureaucrat::
		}
	}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
	: _name(copy._name), _grade(copy._grade) {
		std::cout << "Copy constructor called" << std::endl;
	}

Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor of Bureaucrat caled" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy) {
	if (this != &copy)
		this->_grade = copy._grade;
	return *this;
}


// try
// {
// /* do some stuff with bureaucrats */
// }
// catch (std::exception & e)
// {
// // /* handle exception */
// }