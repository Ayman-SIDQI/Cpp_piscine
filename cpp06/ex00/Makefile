CC=c++
FLAGS=-Wall -Wextra -Werror  -std=c++98 #-fsanitize=address -g3
NAME=Convert

SRC=$(wildcard *.cpp)

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
