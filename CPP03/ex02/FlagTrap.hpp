#include <iostream>
#include "Fixed.hpp"

int main() {
    Fixed a; 
    std::cout << "Valor inicial de a: " << a.getRawBits() << std::endl; // Deve ser 0

    a.setRawBits(42); 
    std::cout << "Valor de a após setRawBits(42): " << a.getRawBits() << std::endl; // Deve ser 42

    a.setRawBits(100);
    std::cout << "Valor de a após setRawBits(100): " << a.getRawBits() << std::endl; // Deve ser 100

    return 0;
}