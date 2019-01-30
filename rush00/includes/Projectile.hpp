/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Projectile.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 11:26:31 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/27 15:27:03 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROJECTILE_HPP
# define PROJECTILE_HPP

# include "Entity.hpp"

class Projectile : public Entity
{
    public:

        Projectile(void);
        Projectile(int, int, char, int);
        Projectile(Projectile const &);
        ~Projectile(void);

        Projectile& operator=(Projectile const &);

        int getmv(void);

        int getIsPlayer(void) const;
        void mvup(void);

    private:

        int _isPlayer;

};

#endif
