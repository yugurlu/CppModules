

all:Phonebook

Phonebook: PhoneBook.o
	@c++ -Wall -Wextra -Werror -std=c++98 main.cpp Contact.cpp PhoneBook.cpp -o Phonebook


PhoneBook.o:
	@c++ -Wall -Wextra -Werror -std=c++98 main.cpp Contact.cpp PhoneBook.cpp -c

clean:
	@rm main.o Contact.o PhoneBook.o

fclean: clean
	@rm Phonebook

re: fclean all
