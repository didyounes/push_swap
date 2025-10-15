NAME = push_swap
SOURCE = push_swap.c  s_tree.c utils.c utils2.c push.c reverse.c  rotate.c  swap.c error.c small_sort.c get_index.c init.c three.c
OBJC = $(SOURCE:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
all : $(NAME)
$(NAME) : $(OBJC)
	$(CC) $(CFLAGS) $(OBJC) -o $(NAME)
%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJC)
fclean: clean
	rm -f $(NAME)
re: fclean all
.SECONDARY: $(OBJC)
.PHONY: all clean fclean re
