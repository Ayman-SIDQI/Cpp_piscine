CC=c++
FLAGS=-Wall -Wextra -Werror  -std=c++98
NAME=Form

SRC=$(wildcard *.cpp)

OBJ=$(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $@


	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)
	
re : fclean all

.PHONY: all clean fclean re
