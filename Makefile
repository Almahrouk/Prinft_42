# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dal-mahr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/13 12:26:49 by dal-mahr          #+#    #+#              #
#    Updated: 2024/10/13 12:26:52 by dal-mahr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME            = libftprintf.a
CC              = cc
CFLAGS          = -Wall -Wextra -Werror

SOURCES         = ft_printf.c ft_putchar.c ft_putstr.c ft_putmemoryaddress.c ft_putnbr.c ft_putnbrunsigned.c ft_print_hex.c\

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $@ $?

%.o: %.c
	$(CC) -c $(CFLAGS) $(SOURCES)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
