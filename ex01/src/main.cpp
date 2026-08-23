/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 10:35:13 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/23 14:13:24 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	std::cout << "\n===== ENOUGH GRADE TEST =====" << std::endl;

	Form	usera("UserAgreement", 50, 40);
	Bureaucrat	bob("Bob", 40);
	try
	{
		bob.signForm(usera);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error caught: " << e.what() << std::endl;
	}


	std::cout << "\n===== INSUFFICIENT GRADE TEST =====" << std::endl;
	Form	con("Contract", 100, 40);
	Bureaucrat	john("John", 150);
	try
	{
		john.signForm(con);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error caught: " << e.what() << std::endl;
	}


	std::cout << "\n===== OPERATOR << TEST =====" << std::endl;

	Form	priv("PrivacyAgrement", 80, 40);
	std::cout << priv << std::endl;


	std::cout << "\n===== END ====="<< std::endl;
}