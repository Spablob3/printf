# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/02 10:12:33 by joapedro          #+#    #+#              #
#    Updated: 2025/05/02 12:18:51 by joapedro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = $(addsuffix .c, ft_putchar ft_putstr ft_printf ft_putnbr ft_unsigned_putnbr ft_puthexa ft_puthexa_big)

OBJS := $(SRC:%.c=%.o)

CC = cc

RM = rm -f

CCFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
