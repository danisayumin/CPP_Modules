/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 20:55:45 by danielasayu       #+#    #+#             */
/*   Updated: 2025/03/10 17:21:57 by dsayumi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie  *zombie = newZombie("HeapZombie");
    zombie->announce();
    randomChump("StackZombie");
    delete zombie;
    return 0;
}
