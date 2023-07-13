

SRC = ClapTrap.cpp \
	ScavTrap.cpp \
	FragTrap.cpp \
	main.cpp

OBJS = $(SRC:.cpp=.o)

all: FragTrap

FragTrap: $(OBJS)
	@c++ -Wall -Wextra -Werror -std=c++98 $(OBJS) -o FragTrap

.cpp.o:
	@c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf FragTrap

re: fclean all

.PHONY:	all clean fclean re