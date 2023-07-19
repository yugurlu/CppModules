
SRC = Base.cpp \
	A.cpp \
	B.cpp \
	C.cpp \
	main.cpp

OBJS = $(SRC:.cpp=.o)

all: Base

Base: $(OBJS)
	@c++ -Wall -Wextra -Werror -std=c++98 $(OBJS) -o Base

.cpp.o:
	@c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf Base

re: fclean all

.PHONY: all clean fclean re
