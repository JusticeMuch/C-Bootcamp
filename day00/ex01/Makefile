NAME = contracts

FLAGS = -Wall -Wextra -Werror

CC = g++ -o

SRC= contracts.cpp contracts.class.cpp

all		:	$(NAME)

$(NAME)		:
			@$(CC) $(NAME) $(SRC) $(FLAGS)
			@echo "contracts compiled"

clean	:
			rm -rf $(NAME)

fclean	:
			rm -rf $(NAME)

re		:	fclean all