# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eric <eric@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/09 13:46:46 by ebervas           #+#    #+#              #
#    Updated: 2024/10/10 10:47:52 by ebervas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c\
      ft_isdigit.c\
      ft_isalnum.c\
      ft_isascii.c\
      ft_isprint.c\
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
      ft_atoi.c\
      ft_calloc.c\
      ft_strdup.c\
      ft_strjoin.c\
      ft_split.c\
      ft_itoa.c\
      ft_putchar_fd.c\
      ft_putstr_fd.c\
      ft_putendl_fd.c

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra -I.

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean 
	rm -f $(NAME)

re : fclean all

.PHONY : clean fclean re all
