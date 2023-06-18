

all: harlFilter

harlFilter: Harl.o main.o
	@c++ -Wall -Wextra -Werror -std=c++98 Harl.cpp main.cpp -o harlFilter

Harl.o main.o:
	@c++ -Wall -Wextra -Werror -std=c++98 Harl.cpp main.cpp -c

clean:
	@rm -rf Harl.o main.o

fclean: clean
	@rm -rf harlFilter

re: fclean all

.PHONY = all clean fclean re