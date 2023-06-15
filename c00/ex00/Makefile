

all: megaphone

megaphone:
	@c++ -Wall -Wextra -Werror -std=c++98 megaphone.cpp -c
	@c++ -Wall -Wextra -Werror -std=c++98 megaphone.o -o megaphone

clean:
	@rm -rf megaphone.o
fclean: clean
	@rm -rf megaphone

re:	fclean all
