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

LIBFT_PATH = libft

LIBFT = $(LIBFT_PATH)/libft.a

NAME = libftprintf.a

SRCS_PATH = srcs

SRCS = $(SRCS_PATH) ft_printf.c

OBJS_PATH = objs

OBJS = $(patsubst $(SRCS_PATH)/%.c, $(OBJS_PATH)/%.o, $(SRCS))

WHERE = .

CC = clang

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	ar rcs $(NAME) $(OBJS)

$(OBJS_PATH)/%.o:	$(SRCS_PATH)/%.c
	mkdir -p $(OBJS_PATH)
	$(CC) $(CFLAGS) -I $(WHERE) -c $< -o $@

$(LIBFT):
	make -C $(LIBFT_PATH)

clean:
	make clean -C $(LIBFT_PATH)
	$(RM) $(OBJS_PATH)

fclean: clean
	make fclean $(LIBFT_PATH)
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean clean re
