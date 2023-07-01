
SRC = Animal.cpp \
	Cat.cpp \
	Dog.cpp \
	WrongAnimal.cpp \
	WrongCat.cpp

OBJS = $(SRC:.cpp=.o)

all: Animals

Animals: $(OBJS)
	@c++ -Wall -Wextra -Werror -std=c++98 $(OBJS) -o Animals

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf Animals

re: fclean all

.PHONY:	all clean fclean re
