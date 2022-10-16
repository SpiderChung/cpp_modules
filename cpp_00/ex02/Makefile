# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schung <schung@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/14 23:41:26 by schung            #+#    #+#              #
#    Updated: 2022/10/15 00:44:55 by schung           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

SRC = ${shell find . -name "*.cpp"}

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)
	
clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf $(NAME)
	
re: fclean all

.PHONY: all clean fclean re