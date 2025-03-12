#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

<<<<<<< HEAD
int main() {
  Weapon club = Weapon("crude spiked club");
  HumanA bob("Bob", club);
  bob.attack();
  club.setType("some other type of club");
  bob.attack();
  {
    Weapon club = Weapon("crude spiked club");

    HumanB jim("Jim");
    jim.attack();
=======
int main()
{
    {
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
    }
    {
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
>>>>>>> e3b656bfac05375c8cdd958083c2951037a33326
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
<<<<<<< HEAD
  }
  return (0);
}
=======
    }
    return 0;
}
>>>>>>> e3b656bfac05375c8cdd958083c2951037a33326
