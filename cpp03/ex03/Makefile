
all: DiamondTrap

DiamondTrap: DiamondTrap.o FragTrap.o ScavTrap.o ClapTrap.o main.o
	@c++ -Wall -Wextra -Werror -std=c++98 DiamondTrap.o FragTrap.o ScavTrap.o ClapTrap.o main.o -o DiamondTrap

DiamondTrap.o: DiamondTrap.cpp  DiamondTrap.hpp FragTrap.hpp ScavTrap.hpp ClapTrap.hpp
	@c++ -Wall -Wextra -Werror -std=c++98 -c DiamondTrap.cpp

FragTrap.o: FragTrap.cpp DiamondTrap.hpp FragTrap.hpp ScavTrap.hpp ClapTrap.hpp
	@c++ -Wall -Wextra -Werror -std=c++98 -c FragTrap.cpp

ScavTrap.o: ScavTrap.cpp DiamondTrap.hpp FragTrap.hpp ScavTrap.hpp ClapTrap.hpp
	@c++ -Wall -Wextra -Werror -std=c++98 -c ScavTrap.cpp

ClapTrap.o: ClapTrap.cpp DiamondTrap.hpp FragTrap.hpp ScavTrap.hpp ClapTrap.hpp
	@c++ -Wall -Wextra -Werror -std=c++98 -c ClapTrap.cpp

main.o: main.cpp DiamondTrap.hpp FragTrap.hpp ScavTrap.hpp ClapTrap.hpp
	@c++ -Wall -Wextra -Werror -std=c++98 -c main.cpp

clean:
	@rm -rf DiamondTrap.o FragTrap.o ScavTrap.o ClapTrap.o main.o

fclean: clean
	@rm -rf DiamondTrap

re: fclean all

.PHONY: all clean fclean re