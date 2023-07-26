
SRC = Span.cpp \
	main.cpp

OBJS = $(SRC:.cpp=.o)

all: Span

Span: $(OBJS)
	@c++ -Wall -Wextra -Werror -std=c++98 $(OBJS) -o Span

.cpp.o:
	@c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf Span

re: fclean all

.PHONY: all clean fclean re