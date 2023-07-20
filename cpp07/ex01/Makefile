

SRC = main.cpp

OBJS = $(SRC:.cpp=.o)

all: iter

iter: $(OBJS)
	@c++ -Wall -Wextra -Werror -std=c++98 $(OBJS) -o iter

.cpp.o:
	@c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf iter

re: fclean all

.PHONY: all clean fclean re