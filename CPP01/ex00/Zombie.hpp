/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 20:49:04 by danielasayu       #+#    #+#             */
/*   Updated: 2025/03/10 17:23:24 by dsayumi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie 
{
private:
    std::string _name;

public:
    Zombie(std::string name);
    ~Zombie(void);
    void announce(void) const;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
