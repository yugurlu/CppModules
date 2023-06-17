
all: Phonebook

Phonebook: main.o PhoneBook.o Contact.o
	@c++ -Wall -Wextra -Werror -std=c++98 main.cpp PhoneBook.cpp Contact.cpp -o Phonebook

main.o PhoneBook.o Contact.o:
	@c++ -Wall -Wextra -Werror -std=c++98 main.cpp PhoneBook.cpp Contact.cpp -c

clean:
	@rm -rf main.o PhoneBook.o Contact.o

fclean: clean
	@rm -rf Phonebook

re:	fclean all

.PHONY = all re fclean clean