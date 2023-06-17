

all:Game

Game: main.o Weapon.o HumanA.o HumanB.o
	@c++ -Wall -Wextra -Werror -std=c++98 main.cpp Weapon.cpp HumanA.cpp HumanB.cpp -o Game

main.o Weapon.o HumanA.o HumanB.o:
	@c++ -Wall -Wextra -Werror -std=c++98 main.cpp Weapon.cpp HumanA.cpp HumanB.cpp -c

clean:
	@rm -rf main.o Weapon.o HumanA.o HumanB.o

fclean: clean
	@rm -rf Game

re: fclean all

.PHONY = all re fclean clean