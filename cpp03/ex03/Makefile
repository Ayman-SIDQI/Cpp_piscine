# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/07 15:27:06 by asidqi            #+#    #+#              #
#    Updated: 2023/09/12 15:07:23 by asidqi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=c++
FLAGS=-Wall -Wextra -Werror -Wshadow -std=c++98 
NAME=DiamondTrap

SRC=main.cpp\
	ClapTrap.cpp\
	ScavTrap.cpp\
	FragTrap.cpp\
	DiamondTrap.cpp

OBJ=$(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $@

clean: 
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)
	
re : fclean all

.PHONY: all clean fclean re
