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

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include "Entity.hpp"
# include <string>
# include <ncurses.h>

class Enemy : public Entity
{
    public:

        Enemy(int, int, char);
        Enemy(Enemy const & enemy);
        ~Enemy(void);

        Enemy& operator=(Enemy const & enemy);

        int getmv(void);
        int getDir(void);
        void mvdown(void);

    private:

        int _dir;
        int _counter;

        Enemy(void);

};

#endif
