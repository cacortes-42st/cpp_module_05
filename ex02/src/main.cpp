/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 10:32:39 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/25 16:21:51 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	std::cout << "\n===== ENOUGH SHRUB TEST =====" << std::endl;

	Bureaucrat	bob("Bob", 2);
	ShrubberyCreationForm shrub1("Hello");
	try
	{
		bob.signAForm(shrub1);
		bob.executeForm(shrub1);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error caught: " << e.what() << std::endl;
	}


	std::cout << "\n===== INSUFFICIENT SHRUB TEST =====" << std::endl;
	
	Bureaucrat	john("John", 150);
	ShrubberyCreationForm shrub2("Goodbye");
	try
	{
		john.signAForm(shrub2);
		john.executeForm(shrub2);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error caught: " << e.what() << std::endl;
	}



	std::cout << "\n\n\n===== ENOUGH ROB TEST =====" << std::endl;

	Bureaucrat	steve("Steve", 2);
	RobotomyRequestForm rob1("Welcome");
	try
	{
		steve.signAForm(rob1);
		steve.executeForm(rob1);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error caught: " << e.what() << std::endl;
	}


	std::cout << "\n===== INSUFFICIENT ROB TEST =====" << std::endl;
	
	Bureaucrat	simon("Simon", 50);
	RobotomyRequestForm rob2("SeeYouSoon");
	try
	{
		simon.signAForm(rob2);
		simon.executeForm(rob2);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error caught: " << e.what() << std::endl;
	}



	std::cout << "\n\n\n===== ENOUGH PRESI TEST =====" << std::endl;

	Bureaucrat	will("William", 2);
	PresidentialPardonForm presi1("ComeIn");
	try
	{
		will.signAForm(presi1);
		will.executeForm(presi1);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error caught: " << e.what() << std::endl;
	}


	std::cout << "\n===== INSUFFICIENT PRESI TEST =====" << std::endl;
	
	Bureaucrat	adam("Adam", 150);
	PresidentialPardonForm presi2("GoAway");
	try
	{
		adam.signAForm(presi2);
		adam.executeForm(presi2);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error caught: " << e.what() << std::endl;
	}
	
	std::cout << "\n\n\n===== END ====="<< std::endl;
}