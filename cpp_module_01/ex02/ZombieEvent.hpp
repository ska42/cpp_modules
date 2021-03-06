/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 11:28:39 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/01 12:32:09 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <string>
# include "Zombie.hpp"

class ZombieEvent
{

private:
	std::string	type;	

public:
	ZombieEvent(void);
	void		setZombieType(std::string type);
	Zombie		*newZombie(std::string name);
	Zombie		*randomChump(void);

};

#endif
