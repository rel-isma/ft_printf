# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rel-isma <rel-isma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 18:28:58 by rel-isma          #+#    #+#              #
#    Updated: 2022/11/10 20:56:34 by rel-isma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rc
RM = rm -f

FILE  = ft_printf.c ft_putchar.c ft_putunsigned.c ft_puthexdecimal_m.c \
		ft_puthexdecimal.c ft_putnumber.c ft_putstring.c ft_putadress.c 

OBJECTS		= 	$(FILE:c=o)

all: $(NAME)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $<

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
		