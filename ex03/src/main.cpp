/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 09:24:51 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/26 12:04:05 by cacortes         ###   ########.fr       */
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
	std::cout << "\n\n\n===== SHRUBBERY INTERN TEST =====" << std::endl;

	Intern *jim = new Intern();
	
	AForm *Sform = jim->makeForm("ShrubberyCreationForm", "themes");

	std::cout << "\n===== END ====="<< std::endl;

	delete Sform;
	delete jim;


	std::cout << "\n\n\n===== PRESIDENTIAL INTERN TEST =====" << std::endl;

	Intern *tim = new Intern();
	
	AForm *Pform = tim->makeForm("PresidentialPardonForm", "themes");

	std::cout << "\n===== END ====="<< std::endl;

	delete Pform;
	delete tim;


	std::cout << "\n\n\n===== ROBOTOMY INTERN TEST =====" << std::endl;

	Intern *bob = new Intern();
	
	AForm *Rform = bob->makeForm("RobotomyRequestForm", "themes");

	std::cout << "\n===== END ====="<< std::endl;

	delete Rform;
	delete bob;


	std::cout << "\n\n\n===== FAILED INTERN TEST =====" << std::endl;

	Intern *john = new Intern();
	
	AForm *Fform = john->makeForm("Rob", "themes");

	std::cout << "\n===== END ====="<< std::endl;

	delete Fform;
	delete john;	
}