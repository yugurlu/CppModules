

all:Phonebook

Phonebook:
	@c++ -Wall -Wextra -Werror -std=c++98 main.cpp Contact.cpp PhoneBook.cpp -c
	@c++ -Wall -Wextra -Werror -std=c++98 main.cpp Contact.cpp PhoneBook.cpp -o Phonebook

clean:
	@rm main.o Contact.o PhoneBook.o

fclean: clean
	@rm Phonebook

re: fclean all
