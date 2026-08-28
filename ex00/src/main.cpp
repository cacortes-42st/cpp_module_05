/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 11:08:07 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/28 11:21:06 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	std::cout << "\n===== HIGH GRADE TEST =====" << std::endl;

	try
	{
		Bureaucrat	bob("Bob", -1);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error caught: " << e.what() << std::endl;
	}


	std::cout << "\n===== LOW GRADE TEST =====" << std::endl;

	try
	{
		Bureaucrat	john("John", 160);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error caught: " << e.what() << std::endl;
	}


	std::cout << "\n===== INCREMENT GRADE TEST =====" << std::endl;

	Bureaucrat	steve("Steve", 3);
	try
	{
		std::cout << "Old grade level: " << steve.getGrade() << std::endl;
		steve.GraIncrement();
		std::cout << "New grade level: " << steve.getGrade() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error caught on " << steve.getName() << ": " << e.what() << std::endl;
	}


	std::cout << "\n===== DECREMENT GRADE TEST =====" << std::endl;

	Bureaucrat	sam("sam", 80);
	try
	{
		std::cout << "Old grade level: " << sam.getGrade() << std::endl;
		sam.GraDecrement();
		std::cout << "New grade level: " << sam.getGrade() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error caught on " << sam.getName() << ": " << e.what() << std::endl;
	}


	std::cout << "\n===== OPERATOR << TEST =====" << std::endl;

	Bureaucrat	wilson("Wilson", 80);
	std::cout << wilson << std::endl;


	std::cout << "\n===== END ====="<< std::endl;
}