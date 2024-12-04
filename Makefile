# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mariorinaldi <mariorinaldi@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/24 13:41:06 by nrinaldi          #+#    #+#              #
#    Updated: 2024/04/27 19:52:57 by mariorinald      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SOURCES = conversion.c error.c ft_atoi.c split.c ft_strlen.c \
	sortingfunctions.c push_swap.c push.c rotate.c sort2.c swaps.c \
	sort3.c sort4.c pushfroma.c rotationtype.c calculations.c applyrotatepush.c \
	reverserotate.c rotationtype2.c sortmorethan4.c pushbackfromb.c

OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
