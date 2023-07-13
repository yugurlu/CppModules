

SRC = ClapTrap.cpp \
	main.cpp

OBJS = $(SRC:.cpp=.o)

all: ClapTrap

ClapTrap: $(OBJS)
	@c++ -Wall -Wextra -Werror -std=c++98 $(OBJS) -o ClapTrap

.cpp.o:
	@c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf ClapTrap

re: fclean all

.PHONY:	all clean fclean re