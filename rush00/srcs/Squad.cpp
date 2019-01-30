#include "../includes/Squad.hpp"

Squad::Squad(void)
{
    this->_squad = NULL;
    this->_count = 0;
}

Squad::Squad(Squad const & squad)
{
    this->_squad = NULL;
    this->_copySquad(squad);
    this->_count = squad.getCount();
}

Squad::~Squad(void)
{
    this->_deleteSquad();
}

Squad& Squad::operator=(Squad const & squad)
{
    if (this == &squad)
        return *this;
    if (this->_squad)
        this->_deleteSquad();
    this->_copySquad(squad);
    this->_count = squad.getCount();
    return *this;
}

int Squad::getCount(void) const
{
    return this->_count;
}

t_squad* Squad::getSquad(void) const
{
    return this->_squad;
}

void Squad::_copySquad(Squad const & squad)
{
    t_squad *ptr = squad.getSquad();

    while (ptr)
    {
        pushUnit(ptr->unit);
        ptr = ptr->next;
    }
}

void Squad::_deleteSquad()
{
    t_squad* ptr;

    while (this->_squad)
    {
        ptr = this->_squad;
        this->_squad = this->_squad->next;
        delete ptr->unit;
        delete ptr;
    }
}

t_squad* Squad::deleteUnit(t_squad *item)
{
    t_squad *prev = item->prev;
    t_squad *next = item->next;

    if (prev && next)
    {
        prev->next = next;
        next->prev = prev;
    }
    else if (!prev && next)
    {
        next->prev = NULL;
        this->_squad = next;
    }
    else if (prev && !next)
    {
        prev->next = NULL;
    }
    else
        this->_squad = NULL;

    mvwaddch(
        item->unit->getCurWin(), item->unit->getYLoc(), item->unit->getXLoc(), '*');
    wrefresh(item->unit->getCurWin());
    delwin(item->unit->getCurWin());
    delete item->unit;
    delete item;

    this->_count -= 1;

    return next;
}

int Squad::pushUnit(Entity *entity)
{
    t_squad* ptr = this->_squad;
    t_squad* newItem;

    if (!entity)
        return this->_count;
    if (!ptr)
    {
        this->_squad = new t_squad;
        this->_squad->unit = entity;
        this->_squad->prev = NULL;
        this->_squad->next = NULL;
    }
    else
    {
        newItem = new t_squad;
        newItem->unit = entity;
        newItem->prev = NULL;
        ptr->prev = newItem;
        newItem->next = ptr;
        this->_squad = newItem;
    }
    this->_count += 1;
    return (this->_count);
}

void Squad::updateSquad(void)
{
    t_squad *ptr = this->_squad;

    while (ptr)
    {
        if (ptr->unit->getmv() == -1)
        {
            Entity* item = ptr->unit;

            mvwaddch(item->getCurWin(), item->getYLoc(), item->getXLoc(), ' ');
            wrefresh(item->getCurWin());
            ptr = this->deleteUnit(ptr);
        }
        else
            ptr = ptr->next;
    }
}

void Squad::displaySquad(void)
{
    t_squad *ptr = this->_squad;

    while (ptr)
    {
        ptr->unit->display();
        ptr = ptr->next;
    }
}

void Squad::refreshSquad(void)
{
    t_squad *ptr = this->_squad;

    while (ptr)
    {
        wrefresh(ptr->unit->getCurWin());
        ptr = ptr->next;
    }
}

int Squad::isEmpty()
{
    if (!this->_squad)
        return 1;
    return 0;
}
