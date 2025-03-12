/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielasayuminitta <danielasayuminitta@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 22:39:44 by danielasayu       #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/03/05 23:10:38 by danielasayu      ###   ########.fr       */
=======
/*   Updated: 2025/03/10 17:25:16 by dsayumi-         ###   ########.fr       */
>>>>>>> e3b656bfac05375c8cdd958083c2951037a33326
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
  this->_name = name;
}

Zombie::~Zombie(void)
<<<<<<< HEAD
{
  std::cout << "Zombie " << this->_name << " destroyed" << std::endl;
}

void Zombie::announce(void) const {
  std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
=======
{   
    std::cout << this->_name << " has been destroyed" << std::endl;
}

void Zombie::announce(void) const
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
>>>>>>> e3b656bfac05375c8cdd958083c2951037a33326
}
