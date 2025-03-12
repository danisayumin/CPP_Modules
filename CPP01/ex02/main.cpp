<<<<<<< HEAD
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 20:10:12 by dsayumi-          #+#    #+#             */
/*   Updated: 2025/03/10 18:33:26 by dsayumi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

>>>>>>> e3b656bfac05375c8cdd958083c2951037a33326
#include <iostream>

int main() {
  std::string str = "HI THIS IS BRAIN";
  std::string str1 = "HEy";
  std::string *stringPTR = &str;
  std::string &stringREF = str;
  stringPTR = &str1;

  std::cout << &str << std::endl;
  std::cout << stringPTR << std::endl;
  std::cout << &stringREF << std::endl;

<<<<<<< HEAD
  std::cout << str << std::endl;
  std::cout << *stringPTR << std::endl;
  std::cout << stringREF << std::endl;

  return (0);
}
=======
	std::cout << "string address : " << &string << std::endl;
	std::cout << "string ptr address : " << stringPTR << std::endl;
	std::cout << "string ref address : " << &stringREF << std::endl;
	
	std::cout << "string value : " << string << std::endl;
	std::cout << "string ptr value : " << *stringPTR << std::endl;
	std::cout << "string ref value : " << stringREF << std::endl;

	return 0;
}
>>>>>>> e3b656bfac05375c8cdd958083c2951037a33326
