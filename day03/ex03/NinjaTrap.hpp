/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 22:18:40 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/25 22:40:20 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {
public:
	NinjaTrap(void);
	NinjaTrap(std::string name);
	~NinjaTrap(void);
	void        meleeAttack(std::string const &target);
    void        rangedAttack(std::string const &target);
	void 		ninjaShoebox(NinjaTrap &attack);
	void 		ninjaShoebox(ClapTrap &attack);
	void 		ninjaShoebox(FragTrap &attack);
	void 		ninjaShoebox(ScavTrap &attack);
};

#endif