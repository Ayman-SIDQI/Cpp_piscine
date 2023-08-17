CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98

SRC := Classes.cpp \
	main.cpp

OBJ := $(SRC:.cpp=.o)
EXE := phonebook

all: $(EXE)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(EXE): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(EXE)

re: fclean all

.PHONY: all clean fclean re