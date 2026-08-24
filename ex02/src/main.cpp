/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 10:32:39 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/24 11:13:21 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

int	main()
{
	std::cout << "\n===== ENOUGH GRADE TEST =====" << std::endl;

	AForm	usera("UserAgreement", 50, 40);
	Bureaucrat	bob("Bob", 40);
	try
	{
		bob.signAForm(usera);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error caught: " << e.what() << std::endl;
	}


	std::cout << "\n===== INSUFFICIENT GRADE TEST =====" << std::endl;
	AForm	con("Contract", 100, 40);
	Bureaucrat	john("John", 150);
	try
	{
		john.signAForm(con);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error caught: " << e.what() << std::endl;
	}


	std::cout << "\n===== OPERATOR << TEST =====" << std::endl;

	AForm	priv("PrivacyAgrement", 80, 40);
	std::cout << priv << std::endl;


	std::cout << "\n===== END ====="<< std::endl;
}