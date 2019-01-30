/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Entity.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 09:02:39 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/27 09:09:30 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENTITY_HPP
# define ENTITY_HPP

# include <string>
# include <ncurses.h>

class Entity
{
    public:

        Entity(int, int, char);
        Entity(Entity const & entity);
        virtual ~Entity(void);

        Entity& operator=(Entity const & entity);

        virtual void mvup(void);
        virtual void mvdown(void);
        void mvleft(void);
        void mvright(void);

        virtual int getmv(void) = 0;

        void display(void);

        WINDOW* getCurWin(void) const;
        int getXLoc(void) const;
        int getYLoc(void) const;
        int getXMax(void) const;
        int getYMax(void) const;
        int getCharacter(void) const;
        void setWindow(WINDOW*);
        void setYLoc(int);

    protected:

        Entity(void);

    private:

        int _xLoc, _yLoc, _xMax, _yMax;
        char _character;
        WINDOW *_curwin;

};

#endif
