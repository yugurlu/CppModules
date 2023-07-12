

SRC = Bureaucrat.cpp \
	AForm.cpp \
	ShrubberyCreationForm.cpp \
	PresidentialPardonForm.cpp \
	RobotomyRequestForm.cpp \
	main.cpp 

OBJS = $(SRC:.cpp=.o)

all: Bureaucrats

Bureaucrats: $(OBJS)
	@c++ -Wall -Wextra -Werror -std=c++98 $(OBJS) -o Bureaucrats

.cpp.o:
	@c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf Bureaucrats

re: fclean all

.PHONY:	all clean fclean re