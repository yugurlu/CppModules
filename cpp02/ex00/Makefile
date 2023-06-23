
all: Fixed

Fixed: main.o Fixed.o
	@c++ -Wall -Wextra -Werror -std=c++98 Fixed.o main.o -o Fixed

main.o: main.cpp Fixed.hpp
	@c++ -Wall -Wextra -Werror -std=c++98 -c main.cpp

Fixed.o: Fixed.cpp Fixed.hpp
	@c++ -Wall -Wextra -Werror -std=c++98 -c Fixed.cpp

clean:
	@rm -rf main.o Fixed.o

fclean: clean
	@rm -rf Fixed

re: fclean all

.PHONY: all clean fclean re