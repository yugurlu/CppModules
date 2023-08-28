
SRC = PmergeMe.cpp \
	main.cpp

OBJS = $(SRC:.cpp=.o)

all: PmergeMe

PmergeMe: $(OBJS)
	@c++ -Wall -Wextra -Werror -std=c++98 $(OBJS) -o PmergeMe

.cpp.o:
	@c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf PmergeMe

re: fclean all

.PHONY: all clean fclean re