/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Entity.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 09:02:39 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/27 22:24:36 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Entity.hpp"

Entity::Entity(void)
{
    getmaxyx(stdscr, _yMax, _xMax);

    _curwin = newwin(_yMax - 2, _xMax - 2, 1, 1);
    _yLoc = 0;
    _xLoc = 0;
    _character = '@';

    keypad(_curwin, true);
    nodelay(_curwin, true);
    box(_curwin, 0, 0);
}

Entity::Entity(int y, int x, char c)
{
    getmaxyx(stdscr, _yMax, _xMax);

    _curwin = newwin(_yMax - 2, _xMax - 2, 1, 1);
    _yLoc = y;
    _xLoc = x;
    _character = c;

    keypad(_curwin, true);
    nodelay(_curwin, true);
    box(_curwin, 0, 0);
}

Entity::Entity(Entity const & entity)
{
    *this = entity;
}

Entity::~Entity() {}

Entity& Entity::operator=(Entity const & entity)
{
    _curwin = entity.getCurWin();
    _yLoc = entity.getYLoc();
    _xLoc = entity.getXLoc();
    _character = entity.getCharacter();

    getmaxyx(_curwin, _yMax, _xMax);
    keypad(_curwin, true);

    return *this;
}

WINDOW* Entity::getCurWin(void) const
{
    return this->_curwin;
}

int Entity::getXLoc(void) const
{
    return this->_xLoc;
}

int Entity::getYLoc(void) const
{
    return this->_yLoc;
}

int Entity::getXMax(void) const
{
    return this->_xMax;
}

int Entity::getYMax(void) const
{
    return this->_yMax;
}

int Entity::getCharacter(void) const
{
    return this->_character;
}

void Entity::setWindow(WINDOW* window)
{
    this->_curwin = window;
}

void Entity::setYLoc(int yLoc)
{
    this->_yLoc = yLoc;
}

void Entity::mvup()
{
    mvwaddch(_curwin, _yLoc, _xLoc, ' ');  // deletes trailing _characters
    _yLoc--;
    if(_yLoc < 1)
        _yLoc = 1;
}

void Entity::mvdown()
{
    mvwaddch(_curwin, _yLoc, _xLoc, ' ');
    _yLoc++;

    if(_yLoc > _yMax - 4)
        _yLoc = _yMax - 4;
}

void Entity::mvleft()
{
    mvwaddch(_curwin, _yLoc, _xLoc, ' ');
    _xLoc--;
    if(_xLoc < 1)
        _xLoc = 1;
}

void Entity::mvright()
{
    mvwaddch(_curwin, _yLoc, _xLoc, ' ');
    _xLoc++;
    if(_xLoc > _xMax - 4)
        _xLoc = _xMax - 4;
}

void Entity::display()
{
    mvwaddch(_curwin, _yLoc, _xLoc, _character); // adds a _character to the screen
}
