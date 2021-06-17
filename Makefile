# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/17 10:52:08 by mavinici          #+#    #+#              #
#    Updated: 2021/06/17 10:52:08 by mavinici         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS_PATH = srcs

SRCS = 

OBJS_PATH = objs

OBJS =

CC = clang

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror

all:

$(NAME): $(OBJS)

$(OBJS):

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean clean re
