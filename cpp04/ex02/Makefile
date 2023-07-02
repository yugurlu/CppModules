
SRC = AAnimal.cpp \
	Cat.cpp \
	Dog.cpp \
	WrongAnimal.cpp \
	WrongCat.cpp \
	Brain.cpp \
	main.cpp

OBJS = $(SRC:.cpp=.o)

all: Animals

Animals: $(OBJS)
	@c++ -Wall -Wextra -Werror -std=c++98 $(OBJS) -o Animals

.cpp.o:
	@c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf Animals

re: fclean all

.PHONY:	all clean fclean re
