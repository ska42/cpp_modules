/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 02:29:37 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/20 18:03:00 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int				main(void)
{
	Bureaucrat		*bob;
	Bureaucrat		*joe;
	Bureaucrat		*kevin;
	std::srand(std::time(nullptr));
	try
	{
		bob = new Bureaucrat("bob", 150);
		joe = new Bureaucrat("joe", 1);
		kevin = new Bureaucrat("kevin", 151);
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << *bob;
	std::cout << *joe;
	try
	{
		bob->incGrade();
		joe->incGrade();
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << *bob;
	std::cout << *joe;

	Intern michel;

	Form *form1 = michel.makeForm("presidential pardon", "blab");
	Form *form2 = michel.makeForm("robotomy request", "bla");
	Form *form3 = michel.makeForm("shrubbery creation", "blob");
	Form *form4 = michel.makeForm("bwaaaa", "blub");
	(void)form4;
	std::cout << *form1;
	std::cout << *form2;
	std::cout << *form3;
	joe->signForm(*form1);
	joe->signForm(*form3);
	joe->executeForm(*form1);
	joe->executeForm(*form2);
	joe->signForm(*form2);
	bob->executeForm(*form2);
	joe->executeForm(*form2);
	joe->executeForm(*form3);
	delete(bob);
	delete(joe);
	return (0);
}
