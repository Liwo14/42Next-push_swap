NAME = push_swap.a

SRCS = complex_sort.c ft_printf.c ft_printf_utils.c init.c input_check.c input_clean.c linked_list.c \
	linked_list_utils.c main.c medium_sort.c push.c push_swap.c rev_rotate.c rotate.c simple_sort.c\
	sorts_utils.c split.c swap.c utils.c \

OBJS = $(SRCS:.c=.o)
CLFAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME):$(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o:%c
	cc $(CFLAGS)-c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean re
