/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 11:07:27 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/22 21:57:41 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class	Bureaucrat
{
	private:
		const std::string name;
		int	grade;

	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat &operator=(const Bureaucrat &value);
		~Bureaucrat();

		Bureaucrat(const std::string name, int grade);

		std::string getName(void)const;
		int getGrade(void)const;

		void	GraIncrement(void);
		void	GraDecrement(void);


	class GradeTooHighException : public std::exception
	{
		public:
			const char *what() const throw()
			{
				return "The grade of the bureaucrat is too high";
			}
	};

	class GradeTooLowException : public std::exception
	{
		public:
			const char *what() const throw()
			{
				return "The grade of the bureaucrat is too low";
			}
	};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& value);

#endif 