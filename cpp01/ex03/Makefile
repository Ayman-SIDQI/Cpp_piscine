CC=c++
FLAGS=-Wall -Wextra -Werror -std=C++98
NAME=Human

SRC=HumanA.cpp\
	HumanB.cpp\
	Weapon.cpp\
	main.cpp

OBJ= $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $@

clean: 
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)
	
re : fclean all

.PHONY: all clean fclean re
