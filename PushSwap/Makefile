SRCS =  push.c/
		pushwap.c/
		swap.c/
		swap-push.c/
		
		


CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
NAME = pushwap.a
OBJS = $(SRCS:.c=.o)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS) 

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus