#include "Zombie.hpp"

<<<<<<< HEAD
Zombie* zombieHorde(int N, std::string name){
  if(N < 0)
    return (NULL);
  
  Zombie *horde = new Zombie[N];
  
  for(int i = 0; i < N; i++){
    horde[i].setName(name);
  }

  return (horde);
=======
Zombie* zombieHorde(int N, std::string name)
{
    if (N < 0)
    {
        return NULL;
    }
    

    Zombie* horde = new Zombie[N];

    for(int i = 0; i < N; i++)
    {
        horde[i].setName(name);
    }

    return horde;
>>>>>>> e3b656bfac05375c8cdd958083c2951037a33326
}
