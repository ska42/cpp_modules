/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 00:25:27 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/07 02:04:54 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->level = 1;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
	std::cout << "Look out everybody! Things are about to get awesome!";
	std::cout << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{	
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->level = 1;
	this->name = name;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
	std::cout << "Look out everybody! Things are about to get awesome!";
	std::cout << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "No fair! I wasn't ready." << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap)
{
	*this = scavTrap;
	return ;
}

ScavTrap		&ScavTrap::operator=(const ScavTrap &scavTrap)
{
	this->hitPoints = scavTrap.hitPoints;
	this->maxHitPoints = scavTrap.maxHitPoints;
	this->energyPoints = scavTrap.energyPoints;
	this->maxEnergyPoints = scavTrap.maxEnergyPoints;
	this->level = scavTrap.level;
	this->name = scavTrap.name;
	this->meleeAttackDamage = scavTrap.meleeAttackDamage;
	this->rangedAttackDamage = scavTrap.rangedAttackDamage;
	this->armorDamageReduction = scavTrap.armorDamageReduction;
	return (*this);
}

void			ScavTrap::challengeNewcomer(void)
{
	std::string challenges[3] = {"Let's dance for 5 seconds !",
									"You versus me! Me versus you! Either way!",
									"Hold that door for me please.."};
	std::cout << challenges[rand() % 3] << std::endl;
	return ;
}
