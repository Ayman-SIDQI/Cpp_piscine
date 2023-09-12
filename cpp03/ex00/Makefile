# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/07 10:41:26 by asidqi            #+#    #+#              #
#    Updated: 2023/09/09 16:03:37 by asidqi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=c++
FLAGS=-Wall -Wextra -Werror -std=c++98
NAME=ClapTrap

SRC=main.cpp\
	ClapTrap.cpp

OBJ=$(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $@

clean: 
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)
	
re : fclean all

.PHONY: all clean fclean re
