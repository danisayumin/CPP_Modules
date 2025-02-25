#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() : name("Unnamed") {}

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie() {
    std::cout << name << " has been destroyed." << std::endl;
}

void Zombie::announce() {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}