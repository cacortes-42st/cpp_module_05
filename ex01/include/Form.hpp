/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 11:20:56 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/28 11:26:32 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class	Form
{
	private:
		const std::string name;
		bool isSigned;
		const int SigGrade;
		const int ExGrade;

	public:
		Form();
		Form(const Form &other);
		Form &operator=(const Form &value);
		~Form();

		Form(std::string name, int sig, int ex);

		void beSigned(const Bureaucrat &b);

		std::string getFormName(void)const;
		bool getSignedStat(void)const;
		int getSigGrade(void)const;
		int getExGrade(void)const;


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

std::ostream& operator<<(std::ostream& os, const Form& value);

#endif