
SRC = Serialize.cpp \
	main.cpp

OBJS = $(SRC:.cpp=.o)

all: Serialize

Serialize: $(OBJS)
	@c++ -Wall -Wextra -Werror -std=c++98 $(OBJS) -o Serialize

.cpp.o:
	@c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf Serialize

re: fclean all

.PHONY: all clean fclean re
