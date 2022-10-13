# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schung <schung@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 22:46:33 by schung            #+#    #+#              #
#    Updated: 2022/10/11 22:46:36 by schung           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp

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