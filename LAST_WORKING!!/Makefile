# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/05 04:05:33 by lloginov          #+#    #+#              #
#    Updated: 2024/10/13 19:09:56 by lloginov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = push_swap.c\
		fonctions.c\
		list-utils.c\
		checher.c\
		Rotate.c\
		RR.c\
		sort.c\
		split.c\
		swap-push.c\
		utils.c\
		utils2.c\
		sort2.c\

CC = gcc
RM = rm -f
FLAGS = -Wall -Werror -Wextra  #-fsanitize=address -g3
NAME = push_swap
OBJS = $(SRCS:.c=.o)

.c.o:
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean
