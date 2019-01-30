/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 09:02:39 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/27 09:09:30 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Enemy.hpp"

Enemy::Enemy(void) : Entity(0, 0, '@')
{
    _counter = 0;
    _dir = 0;
}

Enemy::Enemy(int y, int x, char c) : Entity(y, x, c)
{
    _counter = 0;
    _dir = 0;
}

Enemy::Enemy(Enemy const & enemy)
{
    *this = enemy;
}

Enemy::~Enemy() {}

Enemy& Enemy::operator=(Enemy const & enemy)
{
    Entity::operator=(enemy);
    _dir = getDir();
    return *this;
}

int Enemy::getDir()
{
    return this->_dir;
}

int Enemy::getmv()
{
    int xLoc;

    this->_counter ^= 1;
    if (!this->_counter)
        return 0;
    switch(this->_dir)
    {
        case 0:
            mvleft();
            break ;
        case 1:
            mvright();
            break ;
        default:
            break ;
    }

    xLoc = this->getXLoc();
    if(xLoc == 1 || xLoc >= this->getXMax() - 4)
    {
        this->_dir = (~(this->_dir)) & 1;
        Enemy::mvdown();
        getmv();
    }
    if (this->getYLoc() > this->getYMax() - 4)
        return -1;
    return this->_dir;
}

void Enemy::mvdown()
{
    mvwaddch(this->getCurWin(), this->getYLoc(), this->getXLoc(), ' ');
    this->setYLoc(this->getYLoc() + 1);
}
