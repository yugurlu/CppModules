

all: Account

Account: Account.o tests.o
	@c++ -Wall -Wextra -Werror -std=c++98 Account.cpp tests.cpp  -o Account


Account.o tests.o:
	@c++ -Wall -Wextra -Werror -std=c++98 Account.cpp tests.cpp -c

clean:
	@rm tests.o Account.o

fclean: clean
	@rm Account

re: fclean all

.PHONY = all re fclean clean