/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 09:24:51 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/26 16:31:56 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	std::cout << "\n\n\n===== DEFAULT INTERN TEST =====" << std::endl;

	Intern someRandomIntern;
	AForm* rrf;
	(void)rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	std::cout << "\n===== END ====="<< std::endl;

	delete rrf;

	
	std::cout << "\n\n\n===== SHRUBBERY INTERN TEST =====" << std::endl;

	Intern *jim = new Intern();
	
	AForm *Sform = jim->makeForm("shrubbery creation", "themes");

	std::cout << "\n===== END ====="<< std::endl;

	delete Sform;
	delete jim;


	std::cout << "\n\n\n===== ROBOTOMY INTERN TEST =====" << std::endl;

	Intern *bob = new Intern();
	
	AForm *Rform = bob->makeForm("robotomy request", "themes");

	std::cout << "\n===== END ====="<< std::endl;

	delete Rform;
	delete bob;

	
	std::cout << "\n\n\n===== PRESIDENTIAL INTERN TEST =====" << std::endl;

	Intern *tim = new Intern();
	
	AForm *Pform = tim->makeForm("presidential pardon", "themes");

	std::cout << "\n===== END ====="<< std::endl;

	delete Pform;
	delete tim;


	std::cout << "\n\n\n===== FAILED INTERN TEST =====" << std::endl;

	Intern *john = new Intern();
	
	AForm *Fform = john->makeForm("Rob", "themes");

	std::cout << "\n===== END ====="<< std::endl;

	delete Fform;
	delete john;
}