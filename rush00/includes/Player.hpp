/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 09:02:39 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/27 09:09:30 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_HPP
# define PLAYER_HPP

# include "Entity.hpp"
# include "Squad.hpp"
# include <string>
# include <ncurses.h>

class Player : public Entity
{
    public:

        Player(int, int, char, Squad*);
        Player(Player const &);
        ~Player(void);

        Player& operator=(Player const &);

        Squad* getSquad(void) const;
        int getmv(void);
        void attack(void);

    protected:

        Player(void);
        
    private:

        Squad *_squad;

};

#endif
