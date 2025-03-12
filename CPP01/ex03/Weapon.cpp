#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::~Weapon() {}

<<<<<<< HEAD
std::string const &Weapon::getType() const { return (_type); }

void Weapon::setType(std::string type) { _type = type; }
=======
std::string const &Weapon::getType() const
{
    return (_type);
}

void Weapon::setType(std::string type)
{
    _type = type; 
}
>>>>>>> e3b656bfac05375c8cdd958083c2951037a33326
