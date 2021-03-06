/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 04:04:13 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/01 11:20:15 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void		PonyOnTheHeap(void)
{
	Pony	*p;

	std::cout << "PonyOnTheHeap()" << std::endl;
	p = new Pony();
	p->setColor("Black");
	std::cout << "The pony is " << p->getColor() << std::endl;
	p->jump();
	p->jump();
	p->walk();
	delete(p);
	std::cout << "Ending PonyOnTheHeap()" << std::endl;
}

void		PonyOnTheStack(void)
{
	Pony	p;

	std::cout << "PonyOnTheStack()" << std::endl;
	std::cout << "The pony is " << p.getColor() << std::endl;
	p.walk();
	p.walk();
	p.walk();
	p.walk();
	p.walk();
	std::cout << "Ending PonyOnTheStack()" << std::endl;
}

int			main(void)
{
	std::cout << "Call PonyOnTheStack()" << std::endl;
	PonyOnTheStack();
	std::cout << "Out PonyOnTheStack()" << std::endl;
	std::cout << "Call PonyOnTheHeap()" << std::endl;
	PonyOnTheHeap();
	std::cout << "Out PonyOnTheHeap()" << std::endl;
}
