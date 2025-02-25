#include "Zombie.hpp"

// Função para criar um zumbi no stack
void randomChump(std::string name) {
    Zombie zombie(name);
    zombie.announce();
}