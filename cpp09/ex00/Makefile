
SRC = BitcoinExchange.cpp \
	main.cpp

OBJS = $(SRC:.cpp=.o)

all: btc

btc: $(OBJS)
	@c++ -Wall -Wextra -Werror -std=c++98 $(OBJS) -o btc

.cpp.o:
	@c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf btc

re: fclean all

.PHONY: all clean fclean re