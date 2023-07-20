
SRC = main.cpp

OBJS = $(SRC:.cpp=.o)

all: whatever

whatever: $(OBJS)
	@c++ -Wall -Wextra -Werror -std=c++98 $(OBJS) -o whatever

.cpp.o:
	@c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf whatever

re: fclean all

.PHONY: all clean fclean re