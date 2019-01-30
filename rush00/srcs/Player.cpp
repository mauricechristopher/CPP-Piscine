/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 09:02:39 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/27 22:24:44 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Player.hpp"
#include "../includes/Projectile.hpp"

Player::Player(void) : Entity(0, 0, '@') {}

Player::Player(int y, int x, char c, Squad* squad) : Entity(y, x, c)
{
    _squad = squad;
}

Player::Player(Player const & player)
{
    *this = player;
}

Player::~Player() {}

Player& Player::operator=(Player const & player)
{
    Entity::operator=(player);
    this->_squad = player.getSquad();
    return *this;
}

Squad* Player::getSquad() const
{
    return this->_squad;
}

void Player::attack()
{
    this->_squad->pushUnit(
        new Projectile(this->getYLoc() - 2, this->getXLoc(), '^', 1));
}

int Player::getmv()
{
    int choice = wgetch(this->getCurWin());
    switch(choice)
    {
        case KEY_UP:
            mvup();
            break;
        case KEY_DOWN:
            mvdown();
            break;
        case KEY_LEFT:
            mvleft();
            break;
        case KEY_RIGHT:
            mvright();
            break;
        case ' ':
            attack();
            break;
        default:
            break;
    }
    return choice;
}
