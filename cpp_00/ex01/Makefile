# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schung <schung@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 23:55:57 by schung            #+#    #+#              #
#    Updated: 2022/10/11 23:56:41 by schung           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = Phonebook.cpp

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