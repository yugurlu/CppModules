


all: Zombie

Zombie: main.o Zombie.o zombieHorde.o
	@c++ -Wall -Wextra -Werror -std=c++98 Zombie.cpp zombieHorde.cpp main.cpp -o Zombie

main.o Zombie.o zombieHorde.o:
	@c++ -Wall -Wextra -Werror -std=c++98  Zombie.cpp zombieHorde.cpp main.cpp -c

clean:
	@rm -rf main.o Zombie.o zombieHorde.o

fclean: clean
	@rm -rf Zombie

re: fclean all

.PHONY = all re fclean clean