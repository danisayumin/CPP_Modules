/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 20:10:12 by dsayumi-          #+#    #+#             */
/*   Updated: 2025/02/25 20:20:08 by dsayumi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

typedef std::string str;

int	main()
{
	str	string = "HI THIS IS BRAIN";
	str	*stringPTR = &string;
	str	&stringREF = string;

	std::cout << "string address : " << &string << std::endl;
	std::cout << "string ptr address : " << stringPTR << std::endl;
	std::cout << "string ref address : " << &stringREF << std::endl;
	
	std::cout << "string value : " << string << std::endl;
	std::cout << "string ptr value : " << stringPTR << std::endl;
	std::cout << "string ref value : " << stringREF << std::endl;
}
