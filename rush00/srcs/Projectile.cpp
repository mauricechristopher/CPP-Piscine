/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Projectile.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 11:26:31 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/27 22:24:48 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Projectile.hpp"

Projectile::Projectile(void) : Entity(0, 0, '@')
{
    this->_isPlayer = 0;
}

Projectile::Projectile(int y, int x, char c, int isPlayer) : Entity(y, x, c)
{
    this->_isPlayer = isPlayer;
}

Projectile::Projectile(Projectile const & Projectile)
{
    *this = Projectile;
}

Projectile::~Projectile() {}

Projectile& Projectile::operator=(Projectile const & projectile)
{
    Entity::operator=(projectile);
    this->_isPlayer = projectile.getIsPlayer();
    return *this;
}

int Projectile::getIsPlayer(void) const
{
    return this->_isPlayer;
}

void Projectile::mvup()
{
    mvwaddch(this->getCurWin(), this->getYLoc(), this->getXLoc(), ' ');
    this->setYLoc(this->getYLoc() - 1);
}

int Projectile::getmv()
{
    mvwaddch(this->getCurWin(), this->getYLoc(), this->getXLoc(), ' ');
    if (this->_isPlayer == 1)
    {
        this->setYLoc(this->getYLoc() - 1);
    }
    if (this->_isPlayer == 0)
    {
        this->setYLoc(this->getYLoc() + 1);
    }
    if (this->getYLoc() > this->getYMax() - 2 || this->getYLoc() < 2)
    {
        return -1;
    }
    return 1;
}
