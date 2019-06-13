
NAME = serial

FLAGS = -Wall -Wextra -Werror

CC = clang++ -o

SRC= main.cpp serial.cpp

all		:	$(NAME)

$(NAME)		:
			@$(CC) $(NAME) $(SRC) $(FLAGS)
			@echo "serial compiled"

clean	:
			rm -rf $(NAME)

fclean	:
			rm -rf $(NAME)

re	: fclean all