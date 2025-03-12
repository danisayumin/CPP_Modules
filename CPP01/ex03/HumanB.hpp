#ifndef HUMANB_HPP
<<<<<<< HEAD
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
  public:
    HumanB(std::string name);
    ~HumanB();
    void attack();
    void setWeapon(Weapon &weapon);

  private:
    std::string _name;
    Weapon *_weapon;
};

#endif //HUMANB_HPP
=======
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB {
private:
    std::string _name;
    Weapon* _weapon;

public:
    HumanB(std::string name);
    ~HumanB();
    void setWeapon(Weapon& weapon);
    void attack();
};

#endif
>>>>>>> e3b656bfac05375c8cdd958083c2951037a33326
