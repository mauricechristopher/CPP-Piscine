/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 09:02:45 by mchristo          #+#    #+#             */
/*   Updated: 2019/01/29 17:30:49 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Player.hpp"
#include "../includes/Enemy.hpp"
#include <unistd.h>
#include <stdio.h>

#include "../includes/Player.hpp"
#include "../includes/Enemy.hpp"
#include <unistd.h>
#include <stdio.h>

int check_collisions(Entity* player, Squad* enemies, Squad* missiles, int ymax, int xmax)
{
    int yArr[ymax];
    int xArr[xmax];
    t_squad* ptr;
    int x;
    int y;

    for (int i = 0; i < ymax; i++)
        yArr[i] = 0;
    for (int i = 0; i < xmax; i++)
        xArr[i] = 0;

    ptr = enemies->getSquad();
    while (ptr)
    {
        x = ptr->unit->getXLoc();
        y = ptr->unit->getYLoc();

        yArr[y] = 1;
        xArr[x] = 1;

        ptr = ptr->next;
    }

    ptr = missiles->getSquad();
    while (ptr)
    {
        x = ptr->unit->getXLoc();
        y = ptr->unit->getYLoc();

        if (yArr[y] == 1 && xArr[x] == 1)
        {
            yArr[y] = 2;
            xArr[x] = 2;
            ptr = missiles->deleteUnit(ptr);
        }
        else
            ptr = ptr->next;
    }

    ptr = enemies->getSquad();
    while (ptr)
    {
        x = ptr->unit->getXLoc();
        y = ptr->unit->getYLoc();

        if (yArr[y] == 2 && xArr[x] == 2)
            ptr = enemies->deleteUnit(ptr);
        else
            ptr = ptr->next;
    }

    if (xArr[player->getXLoc()] && yArr[player->getYLoc()])
        return 1;
    return 0;
}

int main(void)
{
    int ymax, xmax;

    initscr();
    noecho();
    cbreak();
    curs_set(0);
    getmaxyx(stdscr, ymax, xmax);
    keypad(stdscr, true); 

    std::string choices[3] = {"New Game" ,"High Scores", "Exit"};

    int choice;
    int highlight = 0;

    while(1)
    {
        for(int i = 0; i < 3; i++)
        {
            if(i == highlight)
                wattron(stdscr, A_REVERSE);
            mvwprintw(stdscr, i+5, getmaxx(stdscr)/2 - 4, choices[i].c_str());
            wattroff(stdscr, A_REVERSE);
        }
        choice = wgetch(stdscr);

        switch(choice)
        {
            case KEY_UP:
                highlight--;
                if(highlight == -1)
                    highlight = 2;
                break;
            case KEY_DOWN:
                highlight++;
                if(highlight == 3)
                    highlight = 0;
                break;
            default:
                break;
        }

        if(choice == 10 && highlight == 0) {
            
            clear();
            Squad *enemies = new Squad();
            for (int i = 2; i < ymax / 10 + ymax % 10; i += 2)
                for (int j = 2; j < xmax / 2 + xmax % 2; j += 2)
                    enemies->pushUnit(new Enemy(i, j, '#'));

            // enemies->pushUnit(new Enemy(3, 6, '#'));
            Squad *missiles = new Squad();
            Player *player = new Player(ymax - 5, xmax / 2, '@', missiles);

            mvprintw(0, xmax/2 - 9, "Terminal Invaders");
            refresh();

            do {
                missiles->updateSquad();
                enemies->updateSquad();
                player->display();
                missiles->displaySquad();
                enemies->displaySquad();
                wrefresh(player->getCurWin());
                if (check_collisions(player, enemies, missiles, ymax, xmax)) {
                    wrefresh(stdscr);
                    wrefresh(player->getCurWin());
                    wclear(player->getCurWin());
                    while(1) {
                        clear();
                        mvwaddstr(stdscr, ymax/2, xmax/2 - 13, "You have been terminated!\n");
                        usleep(1000000);
                        refresh();
                        return 0;
                    }
                    return 0;
                }

                missiles->refreshSquad();
                enemies->refreshSquad();
                if (enemies->isEmpty()) {
                    wrefresh(stdscr);
                    wrefresh(player->getCurWin());
                    wclear(player->getCurWin());
                    while(1) {
                        clear();
                        mvwaddstr(stdscr, ymax/2, xmax/2 - 27, "Congratulations! You have terminated the terminites!\n");
                        usleep(1000000);
                        refresh();
                        return 0;
                    }
                    return 0;
                }
                usleep(30000);
            } while (player->getmv() != 'x');

            delete player;
            delete enemies;
            delete missiles;
        }
        if(choice == 10 && highlight == 1) {
            clear();
            mvwprintw(stdscr,ymax / 2, xmax/2, "This Feature is Unavailable");
        }
        if(choice == 10 && highlight == 2) {
            endwin();
            return 0;
        }
    }
}
