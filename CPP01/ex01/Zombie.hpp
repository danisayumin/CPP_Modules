#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

#include <iostream>

<<<<<<< HEAD
class Zombie 
{
  public:
    Zombie(void);
    Zombie(std::string name);
    ~Zombie(void);

    void announce(void) const;
    void setName(std::string name);

  private:
    std::string _name;
=======
class Zombie {
private:
    std::string _name;

public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();

    void announce(void) const;
    void setName(std::string name);
>>>>>>> e3b656bfac05375c8cdd958083c2951037a33326
};

Zombie* zombieHorde( int N, std::string name );

#endif