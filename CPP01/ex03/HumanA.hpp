#ifndef HUMANA_HPP
<<<<<<< HEAD
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
  public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void attack();
  
  private:
    std::string _name;
    Weapon &_weapon;
=======
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
    private:
        std::string _name;
        Weapon &_weapon;

    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void attack();
>>>>>>> e3b656bfac05375c8cdd958083c2951037a33326
};

#endif