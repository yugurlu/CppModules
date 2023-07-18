
SRC = A.cpp \
	B.cpp \
	C.cpp \
	Base.cpp \
	main.cpp

OBJS = $(SRC:.cpp=.o)

all: Base

Serialize: $(OBJS)
	@c++ -Wall -Wextra -Werror -std=c++98 $(OBJS) -o Base

.cpp.o:
	@c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf Base

re: fclean all

.PHONY: all clean fclean re
