#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main() {
  ClapTrap a("Clap");
  a.status();
  std::cout << "----------------" << std::endl;
  ScavTrap b("Scav");
  b.status();
  std::cout << "----------------" << std::endl;
  ScavTrap c(b);
  c.status();
  std::cout << "----------------" << std::endl;
  a.attack("Scav");
  b.guardGate();
  b.takeDamage(a.getAttackDamage());
  b.attack("Clap");
  a.takeDamage(b.getAttackDamage());
  std::cout << "----------------" << std::endl;
  a.status();
  b.status();
  c.status();
  return 0;
}