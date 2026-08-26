/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 09:22:06 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/26 09:22:07 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class	AForm
{
	private:
		const std::string name;
		bool isSigned;
		const int SigGrade;
		const int ExGrade;

	public:
		virtual void execute(Bureaucrat const & executor)const = 0;
		void checkExecution(Bureaucrat const &executor) const;

		AForm();
		AForm(const AForm &other);
		AForm &operator=(const AForm &value);
		virtual ~AForm();

		AForm(std::string name, int sig, int ex);

		void beSigned(const Bureaucrat &b);

		std::string getAFormName(void)const;
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
	
	class NoExecutionException : public std::exception
	{
		public:
			const char *what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const AForm& value);

#endif