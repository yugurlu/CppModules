

all: prog

prog: main.o
	@c++ -Wall -Wextra -Werror -std=c++98 main.cpp -o prog

main.o:
	@c++ -Wall -Wextra -Werror -std=c++98 main.cpp -c

clean:
	@rm -rf main.o

fclean: clean
	@rm -rf prog

re: fclean all

.PHONY = all re fclean clean
