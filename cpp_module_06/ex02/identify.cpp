/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 06:14:17 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/15 06:42:21 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base		*generate(void)
{
	Base	*base;
	int		i;

	i = rand() % 3;
	if (!i)
		base = new A();
	else if (i == 1)
		base = new B();
	else
		base = new C();
	return (base);
}

void		identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	return ;
}

void		identify_from_reference(Base &p)
{
	try
	{	
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (const std::bad_cast &)
	{
		try
		{
			B &b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "B" << std::endl;
		}
		catch (const std::bad_cast &)
		{
			try
			{
				C &c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "C" << std::endl;
			}
			catch (const std::bad_cast &)
			{
			}
		}
	}
	return ;
}

int			main(void)
{
	Base *base;

	srand(time(NULL));
	base = generate();
	identify_from_pointer(base);
	identify_from_reference(*base);
	return (0);
}
