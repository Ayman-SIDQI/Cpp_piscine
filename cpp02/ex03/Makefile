# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/03 10:08:27 by asidqi            #+#    #+#              #
#    Updated: 2023/09/04 20:50:19 by asidqi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Point

CC=c++

CFLAG=-Wall -Wextra -Werror -std=c++98

CPS=Fixed.cpp\
	Point.cpp\
	bsp.cpp\
	main.cpp

OBJ=$(CPS:.cpp=.o)

all: $(NAME)

%.cpp: %.o
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(OBJ) $(NAME)

re:	fclean all

.PHONY: all clean fclean re