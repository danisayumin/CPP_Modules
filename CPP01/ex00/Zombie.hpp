/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielasayuminitta <danielasayuminitta@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 20:49:04 by danielasayu       #+#    #+#             */
/*   Updated: 2025/03/05 23:11:18 by danielasayu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

#include <iostream>

class Zombie 
{
  public:
    Zombie(std::string name);
    ~Zombie(void);

    void announce(void) const;

  private:
    std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif