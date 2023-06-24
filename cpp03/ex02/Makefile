
all: FragTrap

FragTrap: FragTrap.o ScavTrap.o ClapTrap.o main.o
	@c++ -Wall -Wextra -Werror -std=c++98 FragTrap.o ScavTrap.o ClapTrap.o main.o -o FragTrap

FragTrap.o: FragTrap.cpp FragTrap.hpp ScavTrap.hpp ClapTrap.hpp
	@c++ -Wall -Wextra -Werror -std=c++98 -c FragTrap.cpp

ScavTrap.o: ScavTrap.cpp FragTrap.hpp ScavTrap.hpp ClapTrap.hpp
	@c++ -Wall -Wextra -Werror -std=c++98 -c ScavTrap.cpp

ClapTrap.o: ClapTrap.cpp FragTrap.hpp ScavTrap.hpp ClapTrap.hpp
	@c++ -Wall -Wextra -Werror -std=c++98 -c ClapTrap.cpp

main.o: main.cpp FragTrap.hpp ScavTrap.hpp ClapTrap.hpp
	@c++ -Wall -Wextra -Werror -std=c++98 -c main.cpp

clean:
	@rm -rf FragTrap.o ScavTrap.o ClapTrap.o main.o

fclean: clean
	@rm -rf FragTrap

re: fclean all

.PHONY: all clean fclean re