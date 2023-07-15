
SRC = ScalarConverter.cpp \
	main.cpp

OBJS = $(SRC:.cpp=.o)

all: ScalarConverter

ScalarConverter: $(OBJS)
	@c++ -Wall -Wextra -Werror -std=c++98 $(OBJS) -o ScalarConverter

.cpp.o:
	@c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf ScalarConverter

re: fclean all

.PHONY: all clean fclean re
