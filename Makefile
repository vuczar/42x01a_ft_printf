# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vimauric <vimauric@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/03 17:19:19 by vimauric          #+#    #+#              #
#    Updated: 2026/07/03 18:35:40 by vimauric         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a

SRC := ft_printf.c

OBJ := $(OBJ:.c=.o)

CC := cc

CFLAGS := -Wall -Wextra -Werror

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ) : libft.h

all : $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
