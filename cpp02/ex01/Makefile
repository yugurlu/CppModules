
all: Fixed

Fixed: main.o Fixed.o
	@c++ -Wall -Wextra -Werror -std=c++98 Fixed.cpp main.cpp -o Fixed

main.o Fixed.o:
	@c++ -Wall -Wextra -Werror -std=c++98 Fixed.cpp main.cpp -c

clean:
	@rm -rf main.o Fixed.o

fclean: clean
	@rm -rf Fixed

re: fclean all

.PHONY = all clean fclean re