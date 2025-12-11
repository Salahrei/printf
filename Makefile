# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/11 17:37:10 by abdesala          #+#    #+#              #
#    Updated: 2025/12/11 18:20:58 by abdesala         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf.a

CC = cc

FLAGS = -Wall -Wextra -Werror

SRCS = ft_print_HEXA.c ft_printf.c ft_putchar.c ft_puthex.c ft_putnbr.c \
		ft_putstr.c ft_putuns.c ft_printp.c

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c printf.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : clean