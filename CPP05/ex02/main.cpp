#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <cstdlib> // Para std::srand
#include <ctime>   // Para std::time

int main() {
    std::srand(std::time(NULL));

    std::cout << "\n                  ______EX02______\n\n";
    
    // Criação dos burocratas
    std::cout << "------- Bureaucrats Creation -------\n";
    Bureaucrat president("President", 1); 
    Bureaucrat manager("Manager", 50);    
    Bureaucrat intern("Intern", 150);
    // Criação dos formulários
    std::cout << "\n------- Forms Creation -------\n";
    ShrubberyCreationForm gardenPlan("CentralGarden");
    RobotomyRequestForm robotomyRequest("Bender");
    PresidentialPardonForm presidentialPardon("Marvin");

    // Tentativa de execução sem assinar (deve falhar)
    std::cout << "\n------- Attempt Execution Without Signing -------\n";
    president.executeForm(gardenPlan);
    manager.executeForm(robotomyRequest);
    intern.executeForm(presidentialPardon);

    // Processo de assinatura
    std::cout << "\n------- Signing Forms -------\n";
    president.signForm(gardenPlan);       // Sucesso (grade 1 <= 145)
    manager.signForm(robotomyRequest);    // Sucesso (grade 50 <= 72)
    intern.signForm(presidentialPardon);  // Falha (grade 150 > 25)
    president.signForm(presidentialPardon); // Sucesso (grade 1 <= 25)

    // Execução após assinatura
    std::cout << "\n------- Executing Signed Forms -------\n";
    // Shrubbery - president tem grade 1 <= 137 (executa)
    president.executeForm(gardenPlan);
    

    
    // Presidential - president tem grade 1 <= 5 (executa)
    president.executeForm(presidentialPardon);
    
    // Robotomy - president tem grade 1 <= 45 (executa)
    president.executeForm(robotomyRequest);
    
    // Robotomy - manager tem grade 50 > 45 (falha)
    manager.executeForm(robotomyRequest);
    std::cout << "\n------- Destructors -------\n";
    return 0;
}