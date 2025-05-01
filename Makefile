NAME = libft.a

SRC = $(addsuffix .c, ft_putchar ft_putstr ft_print)

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
