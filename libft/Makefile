# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgomez-b <jgomez-b@student.42Madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/11 17:38:28 by jgomez-b          #+#    #+#              #
#    Updated: 2024/01/28 20:57:56 by jgomez-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Werror -Wextra
ARFLAGS = -rcs
AR = ar

SRCS = 	ft_isalpha.c \
	   	ft_isdigit.c \
	   	ft_isalnum.c\
	   	ft_isascii.c\
	   	ft_isprint.c \
		ft_strlen.c\
	   	ft_memset.c\
	   	ft_bzero.c\
	   	ft_memcpy.c\
	   	ft_memmove.c\
	   	ft_strlcpy.c\
		ft_strlcat.c\
	   	ft_toupper.c\
	   	ft_tolower.c\
	   	ft_strchr.c\
	   	ft_strrchr.c\
		ft_strncmp.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strnstr.c\
		ft_calloc.c\
	   	ft_atoi.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
