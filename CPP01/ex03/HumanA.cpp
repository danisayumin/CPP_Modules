#include "HumanA.hpp"

<<<<<<< HEAD
HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
}
=======
HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {}

HumanA::~HumanA() {}
>>>>>>> e3b656bfac05375c8cdd958083c2951037a33326

void HumanA::attack()
{
  std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
