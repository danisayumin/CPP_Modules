#include "Zombie.hpp"

// Função para criar um array de zumbis
Zombie* zombieHorde(int N, std::string name) {
    Zombie* horde = new Zombie[N];  // Aloca um array de N zumbis

    for (int i = 0; i < N; i++) {
        horde[i] = Zombie(name);  // Inicializa cada zumbi com o nome fornecido
    }

    return horde;  // Retorna um ponteiro para o primeiro zumbi
}