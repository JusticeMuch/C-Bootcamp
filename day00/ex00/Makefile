NAME = megaphone

FLAGS = -Wall -Wextra -Werror

CC = g++ -o

SRC= megaphone.cpp

all		:	$(NAME)

$(NAME)		:
			@$(CC) $(NAME) $(SRC) $(FLAGS)
			@echo "megaphone compiled"

clean	:
			rm -rf $(NAME)

fclean	:
			rm -rf $(NAME)

re		:	fclean all