
all: Fixed

Fixed: main.o Fixed.o Point.o bsp.o
	@g++ -Wall -Wextra -Werror -std=c++98 Fixed.o Point.o bsp.o main.o -o Fixed

main.o: main.cpp Fixed.hpp Point.hpp bsp.o
	@g++ -Wall -Wextra -Werror -std=c++98 -c main.cpp

Fixed.o: Fixed.cpp Fixed.hpp
	@g++ -Wall -Wextra -Werror -std=c++98 -c Fixed.cpp

Point.o: Point.cpp Fixed.hpp Point.hpp 
	@g++ -Wall -Wextra -Werror -std=c++98 -c Point.cpp

bsp.o: bsp.cpp Fixed.hpp Point.hpp
	@g++ -Wall -Wextra -Werror -std=c++98 -c bsp.cpp

clean:
	@rm -rf main.o Fixed.o Point.o bsp.o

fclean: clean
	@rm -rf Fixed

re: fclean all

.PHONY: all clean fclean re
