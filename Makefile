# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajearuth <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/21 11:00:12 by ajearuth          #+#    #+#              #
#    Updated: 2021/05/22 10:46:44 by ajearuth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
SRCS := \

INCDIR := includes
OBJS := $(SRCS:.c=.o)
CC := gcc -c -o
LINKER := ac rcs 
FLAGS := -Wall -Wextra #-Werror

all:	$(NAME)

$(NAME):	$(OBJS)
	$(LINKER) $(OBJS)

$(OBJSD)%.o:    $(SRCSD)%.c
	$(CC) $@ $^ $(FLAGS)

clean:
	rm -rf $(OBJS)

fclean:    clean
	rm -f $(NAME)

re:		fclean all

.PHONY:		all, clean, fclean, re
