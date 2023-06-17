
all: Prog

Prog: main.o
	@c++ -Wall -Wextra -Werror -std=c++98 main.cpp -o Prog

main.o:
	@c++ -Wall -Wextra -Werror -std=c++98 main.cpp -c

clean:
	@rm -rf main.o

fclean: clean
	@rm -rf Prog

re: fclean re

.PHONY = all re fclean clean