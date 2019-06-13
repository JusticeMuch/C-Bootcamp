
NAME = convert

FLAGS = -Wall -Wextra -Werror

CC = clang++ -o

SRC= main.cpp 

all		:	$(NAME)

$(NAME)		:
			@$(CC) $(NAME) $(SRC) $(FLAGS)
			@echo "convert compiled"

clean	:
			rm -rf $(NAME)

fclean	:
			rm -rf $(NAME)

re	: fclean all