# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgomez-b < jgomez-b@student.42madrid.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/07 20:04:00 by jgomez-b          #+#    #+#              #
#    Updated: 2024/07/08 02:46:03 by jgomez-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Werror -Wextra
ARFLAGS = -rcs
AR = ar

SRCS = 	ft_putchar.c \
	   	ft_putstr.c \
		ft_putptr.c \
	   	ft_putnbr_unsigned.c\
	   	ft_putnbr.c\
	   	ft_puthexadecimal.c \
		ft_converted_format.c\
	   	ft_printf.c
		
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re