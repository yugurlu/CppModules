

SRC = main.cpp

OBJS = $(SRC:.cpp=.o)

all: Array

Array: $(OBJS)
	@c++ -Wall -Wextra -Werror -std=c++98 $(OBJS) -o Array

.cpp.o:
	@c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf Array

re: fclean all

.PHONY: all clean fclean re