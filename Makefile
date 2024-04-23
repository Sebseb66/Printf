# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfroidev <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/16 18:05:22 by sfroidev          #+#    #+#              #
#    Updated: 2023/03/28 11:18:37 by sfroidev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CCFLAG = -Wall -Wextra -Werror

RM = rm
RMFLAG = -f

SRCS = 	ft_printf.c \
	ft_printf_utils.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all:$(NAME)

clean:
	$(RM) $(RMFLAG) $(OBJS)

fclean: clean
	rm -f $(RM) $(RMFLAG) $(NAME)

re: fclean all

