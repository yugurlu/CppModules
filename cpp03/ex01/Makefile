
all: ScavTrap

ScavTrap: ScavTrap.o ClapTrap.o main.o
	@c++ -Wall -Wextra -Werror -std=c++98 ScavTrap.o ClapTrap.o main.o -o ScavTrap

ScavTrap.o: ScavTrap.cpp ScavTrap.hpp ClapTrap.hpp
	@c++ -Wall -Wextra -Werror -std=c++98 -c ScavTrap.cpp

ClapTrap.o: ClapTrap.cpp ScavTrap.hpp ClapTrap.hpp
	@c++ -Wall -Wextra -Werror -std=c++98 -c ClapTrap.cpp

main.o: main.cpp ScavTrap.hpp ClapTrap.hpp
	@c++ -Wall -Wextra -Werror -std=c++98 -c main.cpp

clean:
	@rm -rf ScavTrap.o ClapTrap.o main.o

fclean: clean
	@rm -rf ScavTrap

re: fclean all

.PHONY: all clean fclean re