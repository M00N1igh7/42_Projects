NAME = libft.a
CC = cc
CFLAGS = -Wextra -Werror -Wall
SRCS = $(shell find *.c)
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
%.o:%.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS)
fclean:
	rm -f $(OBJS) $(NAME)
re: fclean all

.PHONY: clean fclean re all
