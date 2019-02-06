# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchristo <mchristo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/30 23:11:41 by mchristo          #+#    #+#              #
#    Updated: 2019/01/31 22:19:22 by mchristo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= iter

SRC		:= *.cpp								# Files to compile
OBJ		:= $(SRC:.cpp=.o)						# Objects of said files 

COMP	:= clang++								# Compiler
FLAGS	:= -Wall -Wextra -Werror				# Required flags

all: 	$(NAME)									# Compile and create objects
		@echo "\033[1;32m[GREEN ALERT] Objects have been created!\033[0m"
		
$(NAME): $(OBJ)									# Compile with said objects
		@$(COMP) $(SRC) -o $(NAME)				

$(OBJ):											# Compile modified files instead of everything 
		@$(COMP) $(FLAGS) $(SRC) -c 

clean:											# Delete objects
		@rm -f $(OBJ)
		@echo "\033[1;33m[YELLOW ALERT] Objects removed!\033[0m"

fclean:											# Delete objects and execution file
		@rm -f $(NAME)
		@echo "\033[1;31m[RED ALERT] $(NAME) removed!\033[0m"

re:		fclean all clean						# Delete everything and recompile

.PHONY: all clean fclean format re				# Syntax stuff