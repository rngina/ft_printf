# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rtavabil <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 16:35:23 by rtavabil          #+#    #+#              #
#    Updated: 2023/11/23 16:52:05 by rtavabil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a
SRC := ft_printf.c ft_putchar.c ft_putnbr.c \
	ft_putnbr_base.c ft_putptr.c ft_putstr.c \
	ft_putunsigned.c

OBJ := $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $@ $^
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re bonus
