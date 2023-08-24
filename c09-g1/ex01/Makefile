NAME = libft.a

INCLUDE_DIR = ./includes/

SRC_DIR = srcs/

MY_SOURCES = 	ft_putchar.c \
				ft_putstr.c \
				ft_strcmp.c \
				ft_strlen.c \
				ft_swap.c

SRCS = $(addprefix $(SRC_DIR), $(MY_SOURCES))

MY_OBJECTS = $(SRCS:.c=.o)

CFLAGS += -Wall -Wextra -Werror -I $(INCLUDE_DIR)

%.o:	%.c
	$(CC) $(CFLAGS) -I./$(INCLUDE_DIR) -c $< -o $@

all: $(NAME)

$(NAME): $(MY_OBJECTS)
	ar rcs $(NAME) $(MY_OBJECTS)

clean:
	rm -f $(MY_OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
