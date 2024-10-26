# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ggoncalv <ggoncalv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 11:19:48 by ggoncalv          #+#    #+#              #
#    Updated: 2024/10/25 20:04:50 by ggoncalv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
NAME_TEST = libft_test

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c
OBJ = $(SRC:.c=.o)

#TEST___________________________________________________________________________________
SRC_TEST =  ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c main.c
OBJ_TEST = $(SRC_TEST:.c=.o)
#______________________________________________________________________________________________

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
#TEST_______________________________________________________________________________

all_test: $(NAME_TEST)

$(NAME_TEST): $(OBJ_TEST)
	$(CC) $(CFLAGS) $(OBJ_TEST) -o $(NAME_TEST) 

cleantest:
	rm -rf $(OBJ_TEST)

fcleantest: cleantest
	rm -rf $(NAME_TEST)

re: fclean all

retest: fcleantest all_test	
