# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/27 09:03:07 by mchristo          #+#    #+#              #
#    Updated: 2019/01/27 11:09:40 by mchristo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= ft_retro								# Name...

SRC		:= ./srcs/*								# Files to compile
OBJ		:= $(SRC:.cpp=.o)						# Objects of said files 

COMP	:= clang++								# Compiler
NFLAG	:= -lncurses
FLAGS	:= -Wall -Wextra -Werror				# Required flags

all: 	$(NAME)									# Compile and create objects
		@echo "[BEWARE] Objects have been created!"
		
$(NAME): $(OBJ)								# Compile with said objects
		@$(COMP) $(FLAGS) -lncurses -o $(NAME) $(OBJ)				

$(OBJ):	 $(SRC)								# Compile modified files instead of everything 
		@$(COMP) $(FLAGS) $@ -c

clean:											# Delete objects
		@rm -f *.o
		@echo "[YELLOW ALERT] Objects removed!"

fclean:											# Delete objects and execution file
		@rm -f $(NAME)
		@echo "[RED ALERT] $(NAME) removed!"

re:		fclean all								# Delete everything and recompile

.PHONY: all clean fclean format re				# Syntax stuff