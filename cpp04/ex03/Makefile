
SRC = AMateria.cpp \
	Character.cpp \
	Cure.cpp \
	Ice.cpp \
	MateriaSource.cpp \
	main.cpp

OBJS = $(SRC:.cpp=.o)

all: Materias

Materias: $(OBJS)
	@c++ -Wall -Wextra -Werror -std=c++98 $(OBJS) -o Materias

.cpp.o:
	@c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf Materias

re: fclean all

.PHONY:	all clean fclean re