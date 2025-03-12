/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2025/03/05 23:11:41 by danielasayu       #+#    #+#             */
/*   Updated: 2025/03/05 23:20:23 by danielasayu      ###   ########.fr       */
=======
/*   Created: 2025/02/24 20:55:45 by danielasayu       #+#    #+#             */
/*   Updated: 2025/03/10 17:21:57 by dsayumi-         ###   ########.fr       */
>>>>>>> e3b656bfac05375c8cdd958083c2951037a33326
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
<<<<<<< HEAD
  Zombie *zombie = newZombie("Heap");
  zombie->announce();
  randomChump("Stack");
  delete zombie;
  return (0);
=======
    Zombie  *zombie = newZombie("HeapZombie");
    zombie->announce();
    randomChump("StackZombie");
    delete zombie;
    return 0;
>>>>>>> e3b656bfac05375c8cdd958083c2951037a33326
}
