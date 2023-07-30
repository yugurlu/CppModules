
SRC = main.cpp

OBJS = $(SRC:.cpp=.o)

all: MutantStack

MutantStack: $(OBJS)
	@c++ -Wall -Wextra -Werror -std=c++98 $(OBJS) -o MutantStack

.cpp.o:
	@c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf MutantStack

re: fclean all

.PHONY: all clean fclean re