/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 09:54:46 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/26 11:46:26 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <iostream>

class AForm;

class	Intern
{
	public:

		Intern();
		Intern(const Intern &other);
		Intern &operator=(const Intern &value);
		~Intern();

		AForm *makeForm(std::string form, std::string target);
};

#endif