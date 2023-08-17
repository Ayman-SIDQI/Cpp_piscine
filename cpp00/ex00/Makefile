CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98

SRC := megaphone.cpp
OBJ := $(SRC:.cpp=.o)
EXE := megaphone

all: $(EXE)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(EXE): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f  $(EXE)

re: fclean all

.PHONY: all clean fclean re