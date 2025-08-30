#include "Base.hpp" // Sua classe base e derivadas
#include <iostream>

void identify(Base* p); // Funções de identificação
void identify(Base& p);

int main() {
    // Teste 1: Testando a identificação com ponteiro
    std::cout << "Testing with pointers:" << std::endl;
    Base *p1 = generate();
    Base *p2 = generate();
    Base *p3 = generate();

    identify(p1);
    identify(p2);
    identify(p3);

    // Teste 2: Testando a identificação com referência
    std::cout << "\nTesting with references:" << std::endl;
    identify(*p1);
    identify(*p2);
    identify(*p3);
    
    // Limpeza da memória
    delete p1;
    delete p2;
    delete p3;

    return 0;
}