/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielasayuminitta <danielasayuminitta@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 22:39:44 by danielasayu       #+#    #+#             */
/*   Updated: 2025/03/05 23:10:38 by danielasayu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
  this->_name = name;
}

Zombie::~Zombie(void)
{
  std::cout << "Zombie " << this->_name << " destroyed" << std::endl;
}

void Zombie::announce(void) const {
  std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
