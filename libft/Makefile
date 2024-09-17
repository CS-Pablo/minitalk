# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csauron <csauron@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/09 19:09:09 by csauron           #+#    #+#              #
#    Updated: 2024/09/10 17:12:24 by csauron          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     = libft.a

OBJFILES = $(SRCS:.c=.o)
OBJS     =  $(OBJFILES)
CC = cc
CFLAGS = -Wall -Wextra -Werror
TARGET = libft
SRCS = main.c ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c \
        ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
        ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c \
        ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c \
		ft_isascii.c ft_isdigit.c ft_calloc.c ft_strnstr.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c

HEADER    = libft.h

all:            $(NAME)

$(NAME):    ${OBJS}
	@ar rc ${NAME} ${OBJS}

${OBJPATH}%.o:%.c
	@gcc ${CFLAGS} -o $@ -c $<

clean:
	@rm -f ${OBJS}

fclean:     clean
	@rm -f $(NAME)

re:            fclean all

.PHONY: all clean fclean re