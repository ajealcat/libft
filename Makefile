# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajearuth <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/21 11:00:12 by ajearuth          #+#    #+#              #
#    Updated: 2021/05/25 15:13:11 by ajearuth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
SRCS := \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c \
		ft_strlen.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_atoi.c \
		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strdup.c \
		ft_strcat.c \

OBJS = $(SRCS:.c=.o)
CC = gcc -c -o
LINKER = ar rcs 
FLAGS = -Wall -Wextra -Werror

all :	$(NAME)

$(NAME):	$(OBJS)
	$(LINKER) $(NAME) $(OBJS)

$(OBJSD)%.o:    $(SRCSD)%.c
	$(CC) $@ $^ $(FLAGS) 

clean:
	rm -rf $(OBJS)

fclean:    clean
	rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
