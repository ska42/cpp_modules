/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 22:07:39 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/07 23:01:42 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void): ClapTrap()
{
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	std::cout << "This is a bird, this is a plain, no this is SUP3R-TP";
 	std::cout << std::endl;
	return ;
}

SuperTrap::SuperTrap(std::string name): ClapTrap(name)
{	
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	std::cout << "This is a bird, this is a plain, no this is SUP3R-TP";
 	std::cout << std::endl;
	return ;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "Sadly, this is the end for SUP3R-TP" << std::endl;
	return ;
}

SuperTrap::SuperTrap(const SuperTrap &superTrap)
{
	*this = superTrap;
	return ;
}

SuperTrap		&SuperTrap::operator=(const SuperTrap &superTrap)
{
	this->hitPoints = superTrap.hitPoints;
	this->maxHitPoints = superTrap.maxHitPoints;
	this->energyPoints = superTrap.energyPoints;
	this->maxEnergyPoints = superTrap.maxEnergyPoints;
	this->level = superTrap.level;
	this->name = superTrap.name;
	this->meleeAttackDamage = superTrap.meleeAttackDamage;
	this->rangedAttackDamage = superTrap.rangedAttackDamage;
	this->armorDamageReduction = superTrap.armorDamageReduction;
	return (*this);
}

void			SuperTrap::rangedAttack(std::string const &target)
{
	return (FragTrap::rangedAttack(target));
}

void			SuperTrap::meleeAttack(std::string const &target)
{	
	return (NinjaTrap::meleeAttack(target));
}
