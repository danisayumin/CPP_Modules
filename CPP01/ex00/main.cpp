/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielasayuminitta <danielasayuminitta@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 23:11:41 by danielasayu       #+#    #+#             */
/*   Updated: 2025/03/05 23:20:23 by danielasayu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
  Zombie *zombie = newZombie("Heap");
  zombie->announce();
  randomChump("Stack");
  delete zombie;
  return (0);
}
