
all: ClapTrap

ClapTrap: ClapTrap.o main.o
	@c++ -Wall -Wextra -Werror -std=c++98 ClapTrap.o main.o -o ClapTrap

ClapTrap.o: ClapTrap.cpp ClapTrap.hpp
	@c++ -Wall -Wextra -Werror -std=c++98 -c ClapTrap.cpp

main.o: main.cpp ClapTrap.hpp
	@c++ -Wall -Wextra -Werror -std=c++98 -c main.cpp

clean:
	@rm -rf ClapTrap.o main.o

fclean: clean
	@rm -rf ClapTrap

re: fclean all

.PHONY: all clean fclean re