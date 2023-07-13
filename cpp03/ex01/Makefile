

SRC = ClapTrap.cpp \
	ScavTrap.cpp \
	main.cpp

OBJS = $(SRC:.cpp=.o)

all: ScavTrap

ScavTrap: $(OBJS)
	@c++ -Wall -Wextra -Werror -std=c++98 $(OBJS) -o ScavTrap

.cpp.o:
	@c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf ScavTrap

re: fclean all

.PHONY:	all clean fclean re