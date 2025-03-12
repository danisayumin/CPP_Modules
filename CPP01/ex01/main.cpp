#include "Zombie.hpp"

int main() {
  int N = 5;
  std::string name = "Carl";
  Zombie *horde = zombieHorde(N, name);

<<<<<<< HEAD
  for (int i = 0; i < N; ++i) {
    horde[i].announce();
  }
  delete[] horde;
  return (0);
=======
    Zombie *horde = zombieHorde(N, name);

    for (int i = 0; i < N; i++) {
        horde[i].announce();
    }

    delete[] horde;

    return 0;
>>>>>>> e3b656bfac05375c8cdd958083c2951037a33326
}
