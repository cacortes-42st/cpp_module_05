/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 10:32:11 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/25 11:35:29 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class AForm;

class	Bureaucrat
{
	private:
		const std::string name;
		int	grade;

	public:
		void executeForm(AForm const & form)const;

		Bureaucrat();
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat &operator=(const Bureaucrat &value);
		~Bureaucrat();

		Bureaucrat(const std::string name, int grade);

		void	signAForm(AForm &form);

		std::string getName(void)const;
		int getGrade(void)const;

		void	GraIncrement(void);
		void	GraDecrement(void);


	class GradeTooHighException : public std::exception
	{
		public:
			const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			const char *what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& value);

#endif 