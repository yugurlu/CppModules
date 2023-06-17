

all: megaphone

megaphone: megaphone.o
	@c++ -Wall -Wextra -Werror -std=c++98 megaphone.cpp -o megaphone

megaphone.o:
	@c++ -Wall -Wextra -Werror -std=c++98 megaphone.cpp -c

clean:
	@rm -rf megaphone.o
fclean: clean
	@rm -rf megaphone

re:	fclean all

.PHONY = all re fclean clean