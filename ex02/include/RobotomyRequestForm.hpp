/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 13:28:13 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/25 13:25:19 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_HPP
#define ROBOTOMY_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <string>
#include <fstream>
#include <iostream>

class RobotomyRequestForm : public AForm
{
	private:
		std::string target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &other);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &value);
		~RobotomyRequestForm();

		RobotomyRequestForm(std::string target);

		void execute(Bureaucrat const & executor)const;
};


#endif