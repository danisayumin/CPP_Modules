<<<<<<< HEAD
#include <iostream>
=======
>>>>>>> e3b656bfac05375c8cdd958083c2951037a33326
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
  _weapon = NULL;
}
HumanB::~HumanB() {}

void HumanB::attack()
{
  if (this->_weapon == NULL)
    std::cout << _name << " attacks with their bare hands" << std::endl;
  else
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
  _weapon = &weapon;
}