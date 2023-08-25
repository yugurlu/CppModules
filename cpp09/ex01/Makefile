
SRC = RPN.cpp \
	main.cpp

OBJS = $(SRC:.cpp=.o)

all: RPN

RPN: $(OBJS)
	@c++ -Wall -Wextra -Werror -std=c++98 $(OBJS) -o RPN

.cpp.o:
	@c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf RPN

re: fclean all

.PHONY: all clean fclean re