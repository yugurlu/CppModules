

all: Zombie

Zombie: main.o Zombie.o newZombie.o randomChump.o
	@c++ -Wall -Wextra -Werror -std=c++98 Zombie.cpp newZombie.cpp randomChump.cpp  main.cpp -o Zombie

main.o Zombie.o newZombie.o randomChump.o:
	@c++ -Wall -Wextra -Werror -std=c++98  Zombie.cpp newZombie.cpp randomChump.cpp main.cpp -c

clean:
	@rm -rf main.o Zombie.o newZombie.o randomChump.o

fclean: clean
	@rm -rf Zombie

re: fclean all

.PHONY = all re fclean clean