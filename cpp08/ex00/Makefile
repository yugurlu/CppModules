
SRC = main.cpp

OBJS = $(SRC:.cpp=.o)

all: easyfind

easyfind: $(OBJS)
	@c++ -Wall -Wextra -Werror -std=c++98 $(OBJS) -o easyfind

.cpp.o:
	@c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf easyfind

re: fclean all

.PHONY: all clean fclean re