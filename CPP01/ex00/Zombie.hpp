/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 20:49:04 by danielasayu       #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/03/05 23:11:18 by danielasayu      ###   ########.fr       */
=======
/*   Updated: 2025/03/10 17:23:24 by dsayumi-         ###   ########.fr       */
>>>>>>> e3b656bfac05375c8cdd958083c2951037a33326
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

#include <iostream>

class Zombie 
{
<<<<<<< HEAD
  public:
    Zombie(std::string name);
    ~Zombie(void);

    void announce(void) const;

  private:
    std::string _name;
=======
private:
    std::string _name;

public:
    Zombie(std::string name);
    ~Zombie(void);
    void announce(void) const;
>>>>>>> e3b656bfac05375c8cdd958083c2951037a33326
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
