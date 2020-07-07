/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 22:41:01 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/07 22:37:31 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{

private:


public:
	FragTrap(void);
	FragTrap(std::string name);
	~FragTrap(void);
	FragTrap(const FragTrap &fragTrap);
	FragTrap		&operator=(const FragTrap &fragTrap);
	void			rangedAttack(std::string const &target);
	void			meleeAttack(std::string const &target);
	void			vaulthunter_dot_exe(std::string const &target);

};

#endif
